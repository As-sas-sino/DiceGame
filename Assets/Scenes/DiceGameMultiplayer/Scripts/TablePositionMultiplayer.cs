//Table nuovo
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Google.XR.ARCoreExtensions;
using Fusion;
using System.Collections;
using System.Collections.Generic;

public class TablePlacementAR : MonoBehaviour
{
    [Header("Fusion")]
    [SerializeField] private NetworkRunner runner;
    [SerializeField] private NetworkObject tableNetworkPrefab;

    [Header("AR Managers")]
    [SerializeField] private ARPlaneManager planeManager;
    [SerializeField] private ARRaycastManager raycastManager;
    [SerializeField] private ARAnchorManager anchorManager;

    [Header("Preview")]
    [SerializeField] private GameObject tablePreviewPrefab;

    [Header("Smoothing")]
    [SerializeField] private float moveSpeed = 10f;
    [SerializeField] private float rotationSpeed = 10f;

    [Header("Gameplay Objects (LOCAL)")]
    [SerializeField] private GameObject turricola;
    [SerializeField] private GameObject dado;

    [Header("Client")]
    [SerializeField] private string networkTableTag = "NetworkTable";

    private GameObject previewTable;
    private GameObject ghost;
    private ARPlane currentPlane;

    private bool isPlaced;
    private bool tableHasAppeared;
    private bool initialized;

    private bool clientWaiting;
    private bool clientOpenedName;
    private bool clientAttachedObjects;

    private readonly List<ARRaycastHit> hits = new();

    // =========================================================
    // UNITY
    // =========================================================
    private void Awake()
    {
        Debug.Log("[AR][AWAKE] TablePlacementAR");

        if (!runner)
        {
            runner = FindObjectOfType<NetworkRunner>(true);
            Debug.Log($"[AR][AWAKE] Runner trovato = {runner != null}");
        }
    }

    private void Start()
    {
        Debug.Log("[AR][START] Reset UI + avvio init");
        ResetUI();
        StartCoroutine(WaitRunnerThenInit());
    }

    private IEnumerator WaitRunnerThenInit()
    {
        Debug.Log("[AR][INIT] Attendo NetworkRunner...");
        while (runner && !runner.IsRunning)
            yield return null;

        Debug.Log($"[AR][INIT] Runner pronto | IsServer={runner.IsServer}");
        InitForRole();
    }

    private void ResetUI()
    {
        var ui = OrientationUIManagerMultiplayer.Instance;
        if (!ui)
        {
            Debug.LogWarning("[AR][UI] OrientationUIManagerMultiplayer NON trovato");
            return;
        }

        ui.IsWelcomeOpen = false;
        ui.IsOpeningPanel = false;
        ui.IsClosingPanel = false;
        ui.TableHasAppeared = false;
        ui.IsNamePanelOpen = false;
        ui.ResetLobbyPanelState();
        ui.ApplyOrientation();

        Debug.Log("[AR][UI] UI resettata");
    }

    // =========================================================
    // INIT
    // =========================================================
    private void InitForRole()
    {
        if (initialized)
        {
            Debug.Log("[AR][INIT] Init già eseguito, skip");
            return;
        }

        initialized = true;

        if (!runner.IsServer)
        {
            Debug.Log("[AR][INIT] CLIENT → disabilito AR e attendo tavolo");
            DisableARPlacement();
            StartClientWaitTable();
            return;
        }

        Debug.Log("[AR][INIT] HOST → abilito AR e creo preview");
        EnableARPlacement();

        previewTable = Instantiate(tablePreviewPrefab);
        previewTable.SetActive(true);

        if (previewTable.transform.childCount >= 15)
        {
            ghost = previewTable.transform.GetChild(14).gameObject;
            ghost.SetActive(false);
            Debug.Log("[AR][INIT] Ghost trovato e disattivato");
        }
        else
        {
            Debug.LogWarning("[AR][INIT] Ghost NON trovato");
        }
    }

    // =========================================================
    // UPDATE (HOST)
    // =========================================================
    private void Update()
    {
        if (isPlaced || !runner || !runner.IsServer || previewTable == null)
            return;

        Vector2 center = new(Screen.width / 2f, Screen.height / 2f);

        if (!raycastManager.Raycast(center, hits, TrackableType.Planes))
            return;

        var hit = hits[0];
        currentPlane = planeManager.GetPlane(hit.trackableId);

        previewTable.transform.position = Vector3.Lerp(
            previewTable.transform.position,
            hit.pose.position,
            Time.deltaTime * moveSpeed);

        previewTable.transform.rotation = Quaternion.Lerp(
            previewTable.transform.rotation,
            hit.pose.rotation,
            Time.deltaTime * rotationSpeed);

        if (ghost && !ghost.activeSelf)
        {
            ghost.SetActive(true);
            Debug.Log("[AR][UPDATE] Ghost attivato");
        }

        if (!tableHasAppeared)
        {
            tableHasAppeared = true;
            Debug.Log("[AR][UPDATE] Tavolo rilevato → mostro pulsante Conferma");
            OrientationUIManagerMultiplayer.Instance?.ShowConfirmPlacementUI();
        }
    }

    // =========================================================
    // CONFIRM (HOST)
    // =========================================================
    public void ConfirmPlacement()
    {
        Debug.Log("========== [AR][CONFIRM] PREMUTO ==========");

        if (isPlaced || !runner || !runner.IsServer || previewTable == null)
        {
            Debug.LogWarning("[AR][CONFIRM] Condizioni NON valide, return");
            return;
        }

        isPlaced = true;

        Vector3 pos = previewTable.transform.position;
        Quaternion rot = previewTable.transform.rotation;

        Debug.Log($"[AR][CONFIRM] Posizione finale = {pos}");

        Destroy(previewTable);
        previewTable = null;

        var netObj = runner.Spawn(tableNetworkPrefab, pos, rot);
        if (!netObj)
        {
            Debug.LogError("[AR][CONFIRM] Spawn NetworkTable FALLITO");
            return;
        }

        Debug.Log("[AR][CONFIRM] Tavolo di rete spawnato");

        AttachGameplayObjects(netObj.gameObject);

        var netState = netObj.GetComponent<NetworkTableState>();
        if (!netState)
            Debug.LogError("[AR][CONFIRM] NetworkTableState MANCANTE");

        if (currentPlane)
        {
            Debug.Log("[AR][CONFIRM] Avvio Cloud Anchor");
            StartCoroutine(HostCloudAnchor(pos, rot, netState));
        }
        else
        {
            Debug.LogWarning("[AR][CONFIRM] currentPlane NULL → salto Cloud Anchor");
        }

        var ui = OrientationUIManagerMultiplayer.Instance;
        if (ui != null)
        {
            Debug.Log("[UI] Nascondo pulsante Conferma e reset stato");
            ui.TableHasAppeared = false;
            ui.HideConfirmPlacementUI();
        }

        tableHasAppeared = false; // ← IMPORTANTISSIMO

        ForceOpenNamePanel();

        Debug.Log("========== [AR][CONFIRM] FINE ==========");
    }

    // =========================================================
    // CLOUD ANCHOR HOST
    // =========================================================
    private IEnumerator HostCloudAnchor(Vector3 pos, Quaternion rot, NetworkTableState netState)
{
    Debug.Log("[CLOUD][HOST] ====== INIZIO HOST CLOUD ANCHOR ======");

    // ---------------------------------------------------------
    // 1. Attendo ARSession tracking stabile
    // ---------------------------------------------------------
    Debug.Log($"[CLOUD][HOST] Stato ARSession iniziale = {ARSession.state}");

    while (ARSession.state != ARSessionState.SessionTracking)
    {
        Debug.Log($"[CLOUD][HOST] Attendo SessionTracking... Stato attuale = {ARSession.state}");
        yield return null;
    }

    Debug.Log("[CLOUD][HOST] ARSession in SessionTracking");

    // ---------------------------------------------------------
    // 2. Creo anchor locale
    // ---------------------------------------------------------
    Debug.Log("[CLOUD][HOST] Creo Anchor locale");

    var localAnchor = anchorManager.AttachAnchor(
        currentPlane,
        new Pose(pos, rot)
    );

    if (localAnchor == null)
    {
        Debug.LogError("[CLOUD][HOST] ERRORE: AttachAnchor ha restituito NULL");
        yield break;
    }

    Debug.Log("[CLOUD][HOST] Anchor locale creato correttamente");

    // ---------------------------------------------------------
    // 3. Avvio hosting Cloud Anchor
    // ---------------------------------------------------------
    Debug.Log("[CLOUD][HOST] Avvio HostCloudAnchor");

    var cloudAnchor = anchorManager.HostCloudAnchor(localAnchor);

    Debug.Log($"[CLOUD][HOST] Stato iniziale cloud = {cloudAnchor.cloudAnchorState}");

    // ---------------------------------------------------------
    // 4. Attesa con TIMEOUT
    // ---------------------------------------------------------
    float timeout = 20f;
    float timer = 0f;

    while (cloudAnchor.cloudAnchorState == CloudAnchorState.TaskInProgress)
    {
        timer += Time.deltaTime;

        if (timer >= timeout)
        {
            Debug.LogError("[CLOUD][HOST] TIMEOUT: Cloud Anchor hosting non completato");
            yield break;
        }

        yield return null;
    }

    // ---------------------------------------------------------
    // 5. Stato finale
    // ---------------------------------------------------------
    Debug.Log($"[CLOUD][HOST] Stato finale cloud = {cloudAnchor.cloudAnchorState}");

    if (cloudAnchor.cloudAnchorState != CloudAnchorState.Success)
    {
        Debug.LogError("[CLOUD][HOST] Hosting FALLITO");
        yield break;
    }

    // ---------------------------------------------------------
    // 6. Success → invio ID via Networked State
    // ---------------------------------------------------------
    string anchorId = cloudAnchor.cloudAnchorId;
    Debug.Log($"[CLOUD][HOST] SUCCESS → CloudAnchorId = {anchorId}");

    if (netState == null)
    {
        Debug.LogError("[CLOUD][HOST] NetworkTableState NULL → impossibile inviare ID");
        yield break;
    }

    netState.SetCloudAnchorId(anchorId);
    Debug.Log("[CLOUD][HOST] CloudAnchorId inviato ai client");

    // ---------------------------------------------------------
    // 7. Cleanup AR
    // ---------------------------------------------------------
    Debug.Log("[CLOUD][HOST] Disabilito AR Placement");
    DisableARPlacement();

    Debug.Log("[CLOUD][HOST] ====== FINE HOST CLOUD ANCHOR ======");
}

    // =========================================================
    // CLIENT
    // =========================================================
    private void StartClientWaitTable()
    {
        if (clientWaiting) return;
        clientWaiting = true;

        Debug.Log("[CLIENT] In attesa del tavolo di rete");
        StartCoroutine(ClientWaitTableRoutine());
    }

    private IEnumerator ClientWaitTableRoutine()
    {
        GameObject table = GameObject.FindWithTag(networkTableTag);
        while (!table)
        {
            yield return null;
            table = GameObject.FindWithTag(networkTableTag);
        }

        Debug.Log("[CLIENT] Tavolo trovato");

        if (!clientAttachedObjects)
        {
            clientAttachedObjects = true;
            Debug.Log("[CLIENT] Attach gameplay objects");
            AttachGameplayObjects(table);
        }

        if (!clientOpenedName)
        {
            clientOpenedName = true;
            Debug.Log("[CLIENT] Apro Name Panel");
            ForceOpenNamePanel();
        }
    }

    // =========================================================
    // ATTACH GAMEPLAY
    // =========================================================
    private void AttachGameplayObjects(GameObject tableRoot)
    {
        Transform anchor = tableRoot.transform.Find("SpawnDandT") ?? tableRoot.transform;

        if (turricola)
        {
            turricola.transform.SetParent(anchor, false);
            turricola.transform.localPosition = Vector3.zero;
            turricola.transform.localRotation = Quaternion.identity;
            Debug.Log("[ATTACH] Turricola attachata");
        }

        if (dado)
        {
            dado.transform.SetParent(anchor, false);
            dado.transform.localPosition = Vector3.zero;
            dado.transform.localRotation = Quaternion.identity;
            Debug.Log("[ATTACH] Dado attachato");
        }
    }

    // =========================================================
    // UI
    // =========================================================
    private void ForceOpenNamePanel()
    {
        var ctrl = FindObjectOfType<NameEntryUIController>(true);
        if (ctrl)
        {
            ctrl.OpenNamePanel();
            Debug.Log("[UI] Name Panel aperto via controller");
        }
        else
        {
            OrientationUIManagerMultiplayer.Instance?.ShowNamePanel();
            Debug.Log("[UI] Name Panel aperto via UI Manager");
        }
    }

    // =========================================================
    // AR TOGGLES
    // =========================================================
    private void DisableARPlacement()
    {
        Debug.Log("[AR] Disabilito AR Placement");
        if (planeManager) planeManager.enabled = false;
        if (raycastManager) raycastManager.enabled = false;
        if (ghost) ghost.SetActive(false);
    }

    private void EnableARPlacement()
    {
        Debug.Log("[AR] Abilito AR Placement");
        if (planeManager) planeManager.enabled = true;
        if (raycastManager) raycastManager.enabled = true;
    }
}