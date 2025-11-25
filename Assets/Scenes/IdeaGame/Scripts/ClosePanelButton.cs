using UnityEngine;
using DG.Tweening;

public class ClosePanelButton : MonoBehaviour
{
    public GameObject welcomePanel; 
    private CanvasGroup canvasGroup;

    private void Awake()
    {
        // Assicurati che il pannello abbia un CanvasGroup
        canvasGroup = welcomePanel.GetComponent<CanvasGroup>();
        if (canvasGroup == null)
        {
            canvasGroup = welcomePanel.AddComponent<CanvasGroup>();
        }
    }

    public void CloseWelcomePanel()
    {
        // Animiamo l'alpha da 1 a 0 in 2 secondi
        canvasGroup.DOFade(0f, 2f).OnComplete(() =>
        {
            welcomePanel.SetActive(false); // Disattiviamo il pannello alla fine dell'animazione
            Debug.Log("Gioco iniziato!");
        });
    }
}
