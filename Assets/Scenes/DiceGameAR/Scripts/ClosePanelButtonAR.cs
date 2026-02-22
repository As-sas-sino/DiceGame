using UnityEngine; 

public class ClosePanelButtonAR : MonoBehaviour
{
    public void CloseWelcomePanel()     // Serve a chiudere il pannello di benvenuto con animazione
    {
        // Recupera l'istanza singleton del manager che gestisce l'UI
        // in base all'orientamento (verticale/orizzontale)
        var manager = OrientationUIManagerAR.Instance;

        // Se il manager non esiste, esce dal metodo
        if (manager == null) return;

        // Chiama il metodo che chiude il pannello di benvenuto
        manager.CloseWelcomePanelSmooth();
    }
}
