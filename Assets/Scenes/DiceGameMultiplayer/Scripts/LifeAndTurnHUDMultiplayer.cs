using System;
using System.Collections;
using UnityEngine;
using Fusion;

public class LifeAndTurnHUDMultiplayer : MonoBehaviour
{
    // =========================
    // REFERENCES
    // =========================
    private OrientationUIManagerMultiplayer ui;   // UI principale
    private FusionLobbyState lobby;               // Lobby state
    private FusionGameState game;                 // Game state

    private bool subscribed = false;              // Stato subscription eventi
    private Action orientationHandler;            // Callback orientamento

    // ======================================================
    // LIFECYCLE
    // ======================================================
    private void OnEnable()
    {
        StartCoroutine(InitRoutine());   // Init asincrono
    }

    private void OnDisable()
    {
        Unsubscribe();                   // Cleanup eventi
    }

    // ======================================================
    // INIT ROUTINE
    // ======================================================
    private IEnumerator InitRoutine()
    {
        // Attende UI pronta
        while (OrientationUIManagerMultiplayer.Instance == null)
            yield return null;

        ui = OrientationUIManagerMultiplayer.Instance;

        // Attende network valido
        while (FusionBootstrap.RunnerInstance == null ||
               !FusionBootstrap.RunnerInstance.IsRunning ||
               FusionBootstrap.LobbyStateInstance == null ||
               FusionBootstrap.GameStateInstance == null ||
               FusionBootstrap.LobbyStateInstance.Object == null ||
               !FusionBootstrap.LobbyStateInstance.Object.IsValid ||
               FusionBootstrap.GameStateInstance.Object == null ||
               !FusionBootstrap.GameStateInstance.Object.IsValid)
        {
            yield return null;
        }

        lobby = FusionBootstrap.LobbyStateInstance;
        game  = FusionBootstrap.GameStateInstance;

        Subscribe();
        RefreshAll();
    }

    // ======================================================
    // SUBSCRIPTIONS
    // ======================================================
    private void Subscribe()
    {
        if (subscribed) return;
        if (ui == null || lobby == null || game == null) return;

        subscribed = true;

        // Subscribe GameState
        game.OnGameChanged -= RefreshAll;
        game.OnGameChanged += RefreshAll;

        // Subscribe orientamento
        orientationHandler = () =>
        {
            RefreshAll(); // Forza refresh dopo rebuild refs
        };

        ui.OnOrientationChanged -= orientationHandler;
        ui.OnOrientationChanged += orientationHandler;
    }

    private void Unsubscribe()
    {
        if (!subscribed) return;
        subscribed = false;

        if (game != null)
            game.OnGameChanged -= RefreshAll;

        if (ui != null && orientationHandler != null)
            ui.OnOrientationChanged -= orientationHandler;

        orientationHandler = null;
    }

    // ======================================================
    // REFRESH ROOT
    // ======================================================
    public void RefreshAll()
    {
        if (!ui.IsLifeAndTurnOpen)
            return;

        // Riallinea references
        ui     = OrientationUIManagerMultiplayer.Instance;
        lobby  = FusionBootstrap.LobbyStateInstance;
        game   = FusionBootstrap.GameStateInstance;

        if (ui == null || lobby == null || game == null) return;
        if (!lobby.Object.IsValid || !game.Object.IsValid) return;

        bool inGame = game.GameStarted;

        // HUD visibile solo in partita
        ui.IsLifeAndTurnOpen = inGame;

        if (!inGame)
            return;

        RefreshNamesAndVisibility();
        RefreshRound();
        RefreshLives();
        RefreshTotalsVisibility();
    }

    // ======================================================
    // ROUND HEADER
    // ======================================================
    private void RefreshRound()
    {
        if (ui.RoundHeaderText != null)
            ui.RoundHeaderText.text = $"ROUND: {(game.CurrentRoundIndex + 1)}/3";
    }

    // ======================================================
    // PLAYER NAMES + VISIBILITY
    // ======================================================
    private void RefreshNamesAndVisibility()
    {
        for (int i = 0; i < 4; i++)
        {
            var s = lobby.Slots.Get(i);
            bool connected = s.Connected;

            string name = connected ? s.Name.ToString().Trim() : "";
            if (string.IsNullOrEmpty(name) || name == "???")
                name = connected ? "Player" : "";

            bool active = connected;

            // Nome player
            if (ui.NamePlayerTexts != null &&
                i < ui.NamePlayerTexts.Length &&
                ui.NamePlayerTexts[i] != null)
            {
                ui.NamePlayerTexts[i].text = active ? name : "";

                if (active)
                {
                    // Colore in base alle vite
                    if (game.Lives.Get(i) <= 0)
                        ui.NamePlayerTexts[i].color = Color.gray;   // Morto
                    else
                        ui.NamePlayerTexts[i].color = Color.white;  // Vivo
                }
            }

            // Root vite
            if (ui.LifePlayerRoots != null &&
                i < ui.LifePlayerRoots.Length &&
                ui.LifePlayerRoots[i] != null)
            {
                ui.LifePlayerRoots[i].SetActive(active);
            }

            Debug.Log($"[HUD] Player {i} total = {game.TotalByPlayer.Get(i)}");
        }
    }

    // ======================================================
    // LIVES
    // ======================================================
    private void RefreshLives()
    {
        if (ui.LifeHearts == null) return;

        for (int i = 0; i < 4; i++)
        {
            var s = lobby.Slots.Get(i);
            if (!s.Connected) continue;

            int lives = Mathf.Clamp(game.Lives.Get(i), 0, 3);

            SetHeart(i, 0, lives >= 1);
            SetHeart(i, 1, lives >= 2);
            SetHeart(i, 2, lives >= 3);

            // Se morto nasconde root
            if (lives <= 0 &&
                ui.LifePlayerRoots != null &&
                i < ui.LifePlayerRoots.Length &&
                ui.LifePlayerRoots[i] != null)
            {
                ui.LifePlayerRoots[i].SetActive(false);
            }
        }
    }

    // ======================================================
    // TOTALS
    // ======================================================
    private void RefreshTotalsVisibility()
    {
        if (ui.TotalPlayerRoots == null)
            return;

        for (int i = 0; i < FusionGameState.MaxPlayers; i++)
        {
            var slot = lobby.Slots.Get(i);
            bool connected = slot.Connected;

            if (!connected)
            {
                if (ui.TotalPlayerRoots[i] != null)
                    ui.TotalPlayerRoots[i].SetActive(false);

                continue;
            }

            // Sempre visibile se connesso
            if (ui.TotalPlayerRoots[i] != null)
                ui.TotalPlayerRoots[i].SetActive(true);

            if (ui.TotLabelTexts[i] != null)
                ui.TotLabelTexts[i].text = "Tot:";

            if (ui.PointValueTexts[i] != null)
            {
                int total = game.TotalByPlayer.Get(i);
                ui.PointValueTexts[i].SetText(total.ToString());
            }
        }
    }

    // ======================================================
    // HEART HELPER
    // ======================================================
    private void SetHeart(int playerIndex, int heartIndex, bool on)
    {
        var go = ui.LifeHearts[playerIndex, heartIndex];
        if (go != null)
            go.SetActive(on);
    }
}