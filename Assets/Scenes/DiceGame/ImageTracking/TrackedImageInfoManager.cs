using UnityEngine;
using UnityEngine.XR.ARFoundation;

/// <summary>
/// Gestisce il tracciamento delle immagini AR e istanzia un anchor
/// nella posizione dell'immagine rilevata.
/// </summary>
[RequireComponent(typeof(ARTrackedImageManager))]
public class TrackedImageInfoManager : MonoBehaviour
{
    [Header("Anchor")]
    [Tooltip("Prefab da istanziare quando viene rilevata un'immagine")]
    public GameObject anchorPrefab;

    private GameObject anchor;
    private ARTrackedImageManager trackedImageManager;

    private void Awake()
    {
        trackedImageManager = GetComponent<ARTrackedImageManager>();
    }

    private void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
        trackedImageManager.enabled = true;
    }

    private void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (var trackedImage in eventArgs.added)
        {
            SpawnAnchor(trackedImage.transform.position);
        }

        foreach (var trackedImage in eventArgs.updated)
        {
            if (anchor == null)
            {
                SpawnAnchor(trackedImage.transform.position);
            }

            if (trackedImage.trackingState == UnityEngine.XR.ARSubsystems.TrackingState.Tracking)
            {
                anchor.transform.position = trackedImage.transform.position;
                anchor.transform.rotation = trackedImage.transform.rotation;
            }
        }
    }

    private void SpawnAnchor(Vector3 position)
    {
        if (anchorPrefab == null)
        {
            Debug.LogError("[TrackedImageInfoManager] Anchor Prefab non assegnato!");
            return;
        }

        anchor = Instantiate(anchorPrefab, position, Quaternion.identity);

        if (MessageHandler.instance != null)
        {
            MessageHandler.instance.ShowMessage("In attesa dell'altro giocatore");
        }
    }
}
