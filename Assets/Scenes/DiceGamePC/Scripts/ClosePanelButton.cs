using UnityEngine;
using DG.Tweening;

public class ClosePanelButton : MonoBehaviour
{
    public GameObject welcomePanel;   // Riferimento al pannello di benvenuto da chiudere
    private CanvasGroup canvasGroup;  // Serve per controllare l'alpha (trasparenza)

    private void Awake()
    {
        // Si assicura che il pannello abbia un CanvasGroup
        canvasGroup = welcomePanel.GetComponent<CanvasGroup>();
        if (canvasGroup == null)
        {
            // Se non esiste, lo agginge automaticamente
            canvasGroup = welcomePanel.AddComponent<CanvasGroup>();
        }
    }

    // Metodo per chiudere il pannello di benvenuto
    public void CloseWelcomePanel()
    {
        // Animiamo l'alpha da 1 a 0 in 2 secondi (effetto dissolvenza)
        canvasGroup.DOFade(0f, 2f).OnComplete(() =>
        {
            welcomePanel.SetActive(false); // Disattiviamo il pannello alla fine dell'animazione
            Debug.Log("Gioco iniziato!");
        });
    }
}
