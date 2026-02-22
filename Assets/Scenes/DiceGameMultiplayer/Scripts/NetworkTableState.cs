using UnityEngine;
using Fusion;
using Google.XR.ARCoreExtensions;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.Collections;

public class NetworkTableState : NetworkBehaviour
{
    // =========================
    // NETWORKED DATA
    // =========================
    [Networked] public NetworkString<_64> CloudAnchorId { get; set; } // ID anchor condiviso

    [SerializeField] private ARAnchorManager anchorManager;           // Manager AR Anchor

    // ======================================================
    // SPAWN
    // ======================================================
    public override void Spawned()
    {
        Debug.Log($"[NET][SPAWNED] NetworkTableState | HasAuthority={Object.HasStateAuthority}");

        // CLIENT: attende e risolve anchor
        if (!Object.HasStateAuthority)
        {
            // Fallback immediato → rende visibile il tavolo
            var arOrigin = FindObjectOfType<ARSessionOrigin>();

            if (arOrigin != null)
            {
                transform.SetParent(arOrigin.transform, true);
                Debug.Log("[NET][CLIENT] Tavolo parentato a ARSessionOrigin (fallback)");
            }
            else
            {
                Debug.LogError("[NET][CLIENT] ARSessionOrigin NON trovato");
            }

            StartCoroutine(WaitAndResolve());
        }
    }

    // ======================================================
    // CLIENT RESOLVE FLOW
    // ======================================================
    private IEnumerator WaitAndResolve()
    {
        Debug.Log("[NET][CLIENT] Attendo CloudAnchorId...");

        // Attende ID replicato dal server
        while (string.IsNullOrEmpty(CloudAnchorId.ToString()))
            yield return null;

        Debug.Log($"[NET][CLIENT] CloudAnchorId ricevuto = {CloudAnchorId}");

        // Avvia resolve cloud anchor
        var resolved = anchorManager.ResolveCloudAnchorId(CloudAnchorId.ToString());
        Debug.Log("[NET][CLIENT] Resolve avviato");

        // Attende completamento task
        while (resolved.cloudAnchorState == CloudAnchorState.TaskInProgress)
            yield return null;

        Debug.Log($"[NET][CLIENT] Resolve state = {resolved.cloudAnchorState}");

        // Verifica successo
        if (resolved.cloudAnchorState != CloudAnchorState.Success)
        {
            Debug.LogError("[NET][CLIENT] Resolve FALLITO");
            yield break;
        }

        // Riallinea oggetto al cloud anchor
        transform.SetParent(resolved.transform, true);
        Debug.Log("[NET][CLIENT] Tavolo riallineato al Cloud Anchor");
    }

    // ======================================================
    // HOST SET CLOUD ID
    // ======================================================
    public void SetCloudAnchorId(string id)
    {
        // Solo authority può settare ID
        if (!Object.HasStateAuthority)
        {
            Debug.LogWarning("[NET][HOST] Tentativo SetCloudAnchorId senza authority");
            return;
        }

        CloudAnchorId = id;
        Debug.Log($"[NET][HOST] CloudAnchorId SET = {id}");
    }
}