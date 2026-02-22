using Fusion;
using UnityEngine;

public class EndGameController : MonoBehaviour
{
    // Chiamato dal bottone Restart
    public void OnRestartPressed()
    {
        // Recupera Runner e GameState
        var runner = FusionBootstrap.RunnerInstance;
        var game = FusionBootstrap.GameStateInstance;

        // Validazione riferimenti
        if (runner == null || game == null)
            return;

        // Solo il server può riavviare la partita
        if (!runner.IsServer)
            return;

        // Riavvia il gameplay dal primo slot
        game.RPC_StartGameplay(0);

        // Nasconde pannello end game
        var ui = OrientationUIManagerMultiplayer.Instance;
        if (ui != null)
            ui.HideEndGamePanel();
    }
}