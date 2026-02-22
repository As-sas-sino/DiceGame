using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class TablePlacementWithButton : MonoBehaviour
{
    // ===== Manager AR =====
    [Header("AR Managers")]
    [SerializeField] private ARPlaneManager planeManager;      // Gestisce i piani AR
    [SerializeField] private ARRaycastManager raycastManager;  // Raycast sul mondo AR
    [SerializeField] private ARAnchorManager anchorManager;    // Gestione anchor AR

    // ===== Prefab =====
    [Header("Prefab")]
    [SerializeField] private GameObject tablePrefab;           // Prefab del tavolo

    // ===== Smooth movimento =====
    [Header("Smoothing")]
    [SerializeField] private float moveSpeed = 10f;            // Velocità interpolazione posizione
    [SerializeField] private float rotationSpeed = 10f;        // Velocità interpolazione rotazione

    // ===== Oggetti di gioco =====
    [Header("Gameplay Objects")]
    [SerializeField] private GameObject turricola;             // Turricula (vasetto)
    [SerializeField] private GameObject dado;                  // Dado

    private GameObject spawnedTable;                            // Tavolo istanziato
    private GameObject ghost;                                   // Ghost di preview
    private ARPlane currentPlane;                               // Piano AR attuale

    private bool isPlaced = false;                              // Tavolo confermato
    private bool tableHasAppeared = false;                      // Tavolo rilevato almeno una volta

    private readonly List<ARRaycastHit> hits = new();           // Risultati raycast

    // =========================================================
    // START
    // =========================================================
    void Start()
    {
        // Istanzia il tavolo
        spawnedTable = Instantiate(tablePrefab);
        spawnedTable.SetActive(true);

        // Recupera il ghost (15° figlio se esiste)
        if (spawnedTable.transform.childCount >= 15)
            ghost = spawnedTable.transform.GetChild(14).gameObject;

        // Reset stato UI globale
        var ui = OrientationUIManagerAR.Instance;
        if (ui != null)
        {
            ui.IsWelcomeOpen = false;     // Welcome chiuso
            ui.IsOpeningPanel = false;    // Nessuna apertura in corso
            ui.IsClosingPanel = false;    // Nessuna chiusura in corso
            ui.TableHasAppeared = false;  // Reset bottone conferma
        }
    }

    // =========================================================
    // UPDATE
    // =========================================================
    void Update()
    {
        // Se il tavolo è già piazzato, esce
        if (isPlaced) return;

        // Centro dello schermo
        Vector2 screenCenter = new(Screen.width / 2f, Screen.height / 2f);

        // Raycast verso i piani AR
        if (raycastManager.Raycast(screenCenter, hits, TrackableType.Planes))
        {
            Pose hitPose = hits[0].pose;                                  // Posizione colpita
            currentPlane = planeManager.GetPlane(hits[0].trackableId);   // Piano colpito

            // Movimento fluido del tavolo
            spawnedTable.transform.position = Vector3.Lerp(
                spawnedTable.transform.position,
                hitPose.position,
                Time.deltaTime * moveSpeed
            );

            // Rotazione fluida del tavolo
            spawnedTable.transform.rotation = Quaternion.Lerp(
                spawnedTable.transform.rotation,
                hitPose.rotation,
                Time.deltaTime * rotationSpeed
            );

            // Attiva il ghost di preview
            if (ghost != null && !ghost.activeSelf)
                ghost.SetActive(true);

            // Mostra UI conferma solo la prima volta
            if (!tableHasAppeared)
            {
                tableHasAppeared = true;

                var ui = OrientationUIManagerAR.Instance;
                if (ui != null)
                {
                    ui.TableHasAppeared = true;   // Notifica comparsa tavolo
                    ui.ShowConfirmPlacementUI(); // Mostra bottone conferma
                }
            }
        }
    }

    // =========================================================
    // CONFERMA POSIZIONE TAVOLO
    // =========================================================
    public void ConfirmPlacement()
    {
        // Evita doppia conferma o assenza piano
        if (isPlaced || currentPlane == null) return;

        isPlaced = true; // Tavolo fissato

        // Crea anchor AR sul piano
        if (anchorManager != null)
        {
            ARAnchor anchor = anchorManager.AttachAnchor(
                currentPlane,
                new Pose(spawnedTable.transform.position, spawnedTable.transform.rotation)
            );

            // Aggancia il tavolo all'anchor
            if (anchor != null)
            {
                spawnedTable.transform.SetParent(anchor.transform);
                spawnedTable.transform.localPosition = Vector3.zero;
                spawnedTable.transform.localRotation = Quaternion.identity;
            }

            // Aggancia turricula e dado al tavolo
            AttachGameplayObjectsToTable();
        }

        // Disabilita rilevamento piani
        planeManager.enabled = false;
        raycastManager.enabled = false;

        // Disattiva ghost
        if (ghost != null)
            ghost.SetActive(false);

        // Nasconde conferma e apre welcome panel
        var ui = OrientationUIManagerAR.Instance;
        if (ui != null)
        {
            ui.TableHasAppeared = false;  // Reset sicurezza
            ui.HideConfirmPlacementUI(); // Nasconde bottone conferma
            //ui.ShowWelcomePanelSmooth(); // Apre welcome animato
        }
    }

    // =========================================================
    // AGGANCIO OGGETTI AL TAVOLO
    // =========================================================
    private void AttachGameplayObjectsToTable()
    {
        if (spawnedTable == null) return;

        // Punto di ancoraggio dedicato
        Transform anchorPoint = spawnedTable.transform.Find("SpawnDandT");
        if (anchorPoint == null)
            anchorPoint = spawnedTable.transform;

        // Aggancia turricula
        if (turricola != null)
        {
            turricola.transform.SetParent(anchorPoint, false);
            turricola.transform.localPosition = Vector3.zero;
            turricola.transform.localRotation = Quaternion.identity;
        }

        // Aggancia dado
        if (dado != null)
        {
            dado.transform.SetParent(anchorPoint, false);
            dado.transform.localPosition = Vector3.zero;
            dado.transform.localRotation = Quaternion.identity;
        }
    }
}
