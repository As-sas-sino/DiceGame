using UnityEngine;
using System.Collections;

public class DiceRollVisualSyncMultiplayer : MonoBehaviour
{
    // =========================
    // VISUAL REFERENCES
    // =========================

    [Header("Visual References")]
    [SerializeField] private TurriculaAnimationMultiplayer turricula; // Animazione lancio
    [SerializeField] private GameObject diceObject;                   // Oggetto dado visivo

    private FusionGameState game;                     // Riferimento GameState
    private FusionGameState.TurnPhase lastPhase;      // Ultima fase registrata

    private IEnumerator Start()
    {
        // Attende che il GameState network sia valido
        while (FusionBootstrap.GameStateInstance == null ||
               FusionBootstrap.GameStateInstance.Object == null ||
               !FusionBootstrap.GameStateInstance.Object.IsValid)
        {
            yield return null;
        }

        game = FusionBootstrap.GameStateInstance;
        lastPhase = game.Phase;

        // Subscribe evento cambiamento stato
        game.OnGameChanged += OnGameChanged;

        Debug.Log("[DICE SYNC] Ready");
    }

    private void OnDestroy()
    {
        // Unsubscribe evento
        if (game != null)
            game.OnGameChanged -= OnGameChanged;
    }

    private void OnGameChanged()
    {
        if (game == null)
            return;

        // =========================
        // ENTER ROLLING DICE
        // =========================

        if (game.Phase == FusionGameState.TurnPhase.RollingDice &&
            lastPhase != FusionGameState.TurnPhase.RollingDice)
        {
            // Sincronizza random seed
            Random.InitState(game.DiceRollSeed);

            // Avvia animazione lancio
            turricula?.LaunchWithBowl();
        }

        // =========================
        // ENTER SHOWING RESULT
        // =========================

        if (game.Phase == FusionGameState.TurnPhase.ShowingResult &&
            lastPhase != FusionGameState.TurnPhase.ShowingResult)
        {
            // Nasconde il dado visivo
            if (diceObject != null)
                diceObject.SetActive(false);
        }

        // Aggiorna fase precedente
        lastPhase = game.Phase;
    }
}