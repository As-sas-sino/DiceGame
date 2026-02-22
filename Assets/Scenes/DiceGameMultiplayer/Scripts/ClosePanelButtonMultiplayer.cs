using System.Collections;
using UnityEngine;
using Fusion;

// Gestisce la chiusura del pannello regole e notifica il server
public class ClosePanelButtonMultiplayer : MonoBehaviour
{
    // Riferimento al manager UI
    private OrientationUIManagerMultiplayer ui;

    private void Awake()
    {
        ui = OrientationUIManagerMultiplayer.Instance;
    }

    // Collegato al bottone "CHIUDI"
    public void OnCloseRules()
    {
        if (ui == null) ui = OrientationUIManagerMultiplayer.Instance;
        if (ui == null) return;

        // Chiude localmente il pannello regole
        if (ui.IsWelcomeOpen)
        {
            ui.CloseWelcomePanelSmooth(() =>
            {
                // Mostra il pannello di attesa
                ui.ShowWaitingPanel();
            });
        }
        else
        {
            ui.ShowWaitingPanel();
        }

        // Notifica il server quando Fusion è pronto
        StartCoroutine(SendClosedWhenFusionReady());
    }

    // Attende che Runner e NetworkObject siano validi prima di inviare RPC
    private IEnumerator SendClosedWhenFusionReady()
    {
        var runner = FusionBootstrap.RunnerInstance;
        var welcome = FusionBootstrap.WelcomeStateInstance;

        while (runner == null || welcome == null || !runner.IsRunning ||
               welcome.Object == null || !welcome.Object.IsValid)
        {
            runner = FusionBootstrap.RunnerInstance;
            welcome = FusionBootstrap.WelcomeStateInstance;
            yield return null;
        }

        // RPC al server
        welcome.RPC_MarkClosed(runner.LocalPlayer);
    }
}