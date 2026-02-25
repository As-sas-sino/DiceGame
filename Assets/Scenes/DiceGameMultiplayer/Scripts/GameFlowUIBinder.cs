using System.Collections;
using UnityEngine;
using Fusion;

public class GameFlowUIBinder : MonoBehaviour
{
    // =========================
    // REFERENCES
    // =========================
    private OrientationUIManagerMultiplayer ui;   // UI principale
    private FusionGameState game;                 // GameState network
    private FusionLobbyState lobby;               // LobbyState network
    private NetworkRunner runner;                 // Runner attivo

    private ResultControllerMultiplayer resultController;
    private bool subscribed;                      // Stato subscription evento

    // ======================================================
    // INIT
    // ======================================================
    private void OnEnable()
    {
        StartCoroutine(Init());   // Inizializzazione asincrona
    }

    private IEnumerator Init()
    {
        // Attende UI pronta
        while (OrientationUIManagerMultiplayer.Instance == null)
            yield return null;

        ui = OrientationUIManagerMultiplayer.Instance;
        resultController = FindObjectOfType<ResultControllerMultiplayer>();

        // Attende network pronto
        while (FusionBootstrap.GameStateInstance == null ||
               FusionBootstrap.LobbyStateInstance == null ||
               FusionBootstrap.RunnerInstance == null ||
               !FusionBootstrap.RunnerInstance.IsRunning)
        {
            yield return null;
        }

        game   = FusionBootstrap.GameStateInstance;
        lobby  = FusionBootstrap.LobbyStateInstance;
        runner = FusionBootstrap.RunnerInstance;

        // Subscribe evento GameState
        if (!subscribed)
        {
            game.OnGameChanged += OnGameChanged;
            subscribed = true;
        }

        OnGameChanged();  // Forza refresh iniziale
    }

    private void OnDisable()
    {
        // Unsubscribe evento
        if (game != null && subscribed)
        {
            game.OnGameChanged -= OnGameChanged;
            subscribed = false;
        }
    }

    // ======================================================
    // SINGLE SOURCE OF TRUTH (UI STATE)
    // ======================================================
    private void OnGameChanged()
    {
        if (ui == null || game == null || lobby == null)
            return;

        // =========================
        // GAME OVER PRIORITARIO
        // =========================
        if (game.GameOver)
        {
            ui.IsLifeAndTurnOpen = false;
            ui.IsNumberPanelOpen = false;
            ui.IsResultPanelOpen = false;

            ShowEndGamePanel();
            ui.ApplyOrientation();
            return;
        }
        else
        {
            ui.HideEndGamePanel();
        }

        // =========================
        // PARTITA NON AVVIATA
        // =========================
        if (!game.GameStarted)
        {
            ui.IsLifeAndTurnOpen = false;
            ui.IsNumberPanelOpen = false;
            ui.IsResultPanelOpen = false;
            ui.HideTurnWaiting();
            ui.ApplyOrientation();
            return;
        }

        int localSlot   = GetLocalSlot();             // Slot locale
        int currentSlot = game.CurrentPlayerSlot;     // Slot turno attuale
        bool myTurn     = (localSlot == currentSlot); // È il mio turno?

        ui.IsLifeAndTurnOpen = true;

        // =========================
        // CHOOSING NUMBER
        // =========================
        if (game.Phase == FusionGameState.TurnPhase.ChoosingNumber)
        {
            ui.IsResultPanelOpen = false;

            if (myTurn)
            {
                ui.CurrentInstructionText = "Scegli numero:";
                ui.IsNumberPanelOpen = true;
                ui.HideTurnWaiting();
            }
            else
            {
                ui.IsNumberPanelOpen = false;
                ui.ShowTurnWaiting($"In attesa di {GetPlayerName(currentSlot)}");
            }

            ui.ApplyOrientation();
            return;
        }

        // =========================
        // ROLLING DICE
        // =========================
        if (game.Phase == FusionGameState.TurnPhase.RollingDice)
        {
            ui.IsNumberPanelOpen = false;
            ui.IsResultPanelOpen = false;
            ui.HideTurnWaiting();
            ui.ApplyOrientation();
            return;
        }

        // =========================
        // SHOWING RESULT 🔥
        // =========================
        if (game.Phase == FusionGameState.TurnPhase.ShowingResult)
        {
            ui.IsNumberPanelOpen = false;

            if (myTurn)
            {
                ui.HideTurnWaiting();
                ui.IsResultPanelOpen = true;
            }
            else
            {
                ui.IsResultPanelOpen = false;

                string playerName = GetPlayerName(currentSlot);
                byte dice = game.DiceResult;

                ui.ShowTurnWaiting(
                    $"In attesa di {playerName}...\nRisultato: {dice}"
                );
            }

            ui.ApplyOrientation();
            return;
        }
    }

    // ======================================================
    // HELPERS
    // ======================================================

    // Restituisce lo slot del player locale
    private int GetLocalSlot()
    {
        if (runner == null || lobby == null)
            return -1;

        for (int i = 0; i < FusionGameState.MaxPlayers; i++)
        {
            var s = lobby.Slots.Get(i);
            if (s.Connected && s.Player == runner.LocalPlayer)
                return i;
        }

        return -1;
    }

    // Restituisce nome player da slot
    private string GetPlayerName(int slot)
    {
        if (slot < 0 || slot >= FusionGameState.MaxPlayers)
            return "Player";

        var s = lobby.Slots.Get(slot);
        if (!s.Connected)
            return "Player";

        string name = s.Name.ToString();
        return string.IsNullOrEmpty(name) ? "Player" : name;
    }

    // Mostra pannello fine partita
    private void ShowEndGamePanel()
    {
        string winnerName = GetPlayerName(game.WinnerSlot);
        ui.ShowEndGamePanel(winnerName, runner.IsServer);
    }
}