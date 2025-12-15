using UnityEngine;
using DG.Tweening;

public class ClosePanelButtonAndroid : MonoBehaviour
{
    // Metodo chiamato dal bottone per chiudere il WelcomePanel
    public void CloseWelcomePanel()
    {
        // Recupera l'istanza del manager dell'interfaccia
        OrientationUIManager manager = OrientationUIManager.Instance;

        // Controllo di sicurezza: se il manager o il pannello non esistono, esce
        if (manager == null || manager.WelcomePanel == null) return;

        // Aggiorna gli stati del manager
        manager.IsWelcomeOpen = false;   // Il welcomePanel non è più aperto
        manager.IsClosingPanel = true;   // Segnala che una chiusura è in corso

        // Recupera il pannello attualmente attivo
        GameObject currentPanel = manager.WelcomePanel;

        // Assicura la presenza del CanvasGroup per la gestione della trasparenza
        CanvasGroup canvasGroup = currentPanel.GetComponent<CanvasGroup>();
        if (canvasGroup == null)
            canvasGroup = currentPanel.AddComponent<CanvasGroup>();

        // Interrompe eventuali tween già in corso sul CanvasGroup
        DOTween.Kill(canvasGroup);

        // Salva l'alpha iniziale prima dell'animazione
        manager.WelcomePanelAlphaDuringFade = canvasGroup.alpha;

        // Avvia il fade-out del pannello da alpha corrente a 0 in 2 secondi
        canvasGroup.DOFade(0f, 2f).OnUpdate(() =>
        {
            // Aggiorna lo stato dell'alpha nel manager durante il fade
            manager.WelcomePanelAlphaDuringFade = canvasGroup.alpha;
        })
        .OnComplete(() =>
        {
            // A fine animazione spegne il pannello
            currentPanel.SetActive(false);

            // Segnala che la chiusura è completata
            manager.IsClosingPanel = false;

            Debug.Log("Pannello chiuso!");
        });

        // Riattiva e anima il pulsante Gioca
        if (manager.PlayButton != null)
        {
            manager.PlayButton.SetActive(true);
            manager.EnsurePlayButtonAnimation(); // Avvia l'animazione del bottone
        }
    }
}
