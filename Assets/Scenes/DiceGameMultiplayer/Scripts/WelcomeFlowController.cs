using UnityEngine;
using Fusion;

public class WelcomeFlowController : MonoBehaviour
{
    private OrientationUIManagerMultiplayer ui;

    private NetworkRunner runner;
    private FusionLobbyState lobby;
    private FusionWelcomeState welcome;

    private bool subscribed = false;
    private bool gameplayStartedLocal = false;

    private void Awake()
    {
        ui = OrientationUIManagerMultiplayer.Instance;
    }

    private void OnEnable()
    {
        TryResolveAndSubscribe();
    }

    private void OnDisable()
    {
        Unsubscribe();
    }

    private void Update()
    {
        TryResolveAndSubscribe();

        if (!IsFusionReady())
            return;

        // (1) Host: se welcome aperto e fase Idle → entra in Rules
        if (runner.IsServer &&
            ui != null &&
            ui.IsWelcomeOpen &&
            welcome.CurrentPhase == FusionWelcomeState.Phase.Idle)
        {
            welcome.Host_BeginRules();
            gameplayStartedLocal = false;
        }

        // (2) Applica SOLO la UI delle REGOLE
        ApplyRulesUIFromNetwork();

        // (3) Aggiorna il testo del waiting SOLO durante Rules
        UpdateWaitingText();
    }

    // ======================================================
    // FUSION READY
    // ======================================================

    private bool IsFusionReady()
    {
        runner = FusionBootstrap.RunnerInstance;
        lobby = FusionBootstrap.LobbyStateInstance;
        welcome = FusionBootstrap.WelcomeStateInstance;

        if (ui == null)
            ui = OrientationUIManagerMultiplayer.Instance;

        if (runner == null || !runner.IsRunning) return false;
        if (lobby == null || lobby.Object == null || !lobby.Object.IsValid) return false;
        if (welcome == null || welcome.Object == null || !welcome.Object.IsValid) return false;

        return true;
    }

    // ======================================================
    // SUBSCRIPTIONS
    // ======================================================

    private void TryResolveAndSubscribe()
    {
        runner = FusionBootstrap.RunnerInstance;
        lobby = FusionBootstrap.LobbyStateInstance;
        welcome = FusionBootstrap.WelcomeStateInstance;

        if (welcome == null) return;
        if (subscribed) return;

        welcome.OnWelcomeChanged -= OnWelcomeChanged;
        welcome.OnWelcomeChanged += OnWelcomeChanged;
        subscribed = true;
    }

    private void Unsubscribe()
    {
        if (!subscribed) return;
        subscribed = false;

        if (welcome != null)
            welcome.OnWelcomeChanged -= OnWelcomeChanged;
    }

    private void OnWelcomeChanged()
    {
        if (!IsFusionReady()) return;

        ApplyRulesUIFromNetwork();
        UpdateWaitingText();
    }

    // ======================================================
    // RULES UI FLOW (UNICA RESPONSABILITÀ DI QUESTO SCRIPT)
    // ======================================================

    private void ApplyRulesUIFromNetwork()
    {
        if (ui == null || !IsFusionReady())
            return;

        // ================= RULES =================
        if (welcome.CurrentPhase == FusionWelcomeState.Phase.Rules)
        {
            int mySlot = FindMySlotIndex();
            bool iAlreadyClosed =
                (mySlot >= 0) && welcome.ClosedBySlot.Get(mySlot);

            if (iAlreadyClosed)
            {
                // Ho chiuso le regole:
                // - welcome OFF
                // - waiting RULES ON
                if (ui.IsWelcomeOpen)
                    ui.CloseWelcomePanelSmooth();

                ui.ShowWaitingForRules("In attesa degli altri giocatori");
            }
            else
            {
                // Non ho ancora chiuso:
                // - welcome ON
                // - waiting RULES OFF
                if (!ui.IsWelcomeOpen)
                    ui.ShowWelcomePanelSmooth();

                ui.HideWaitingForRules();
            }

            return;
        }

        // ================= GAMEPLAY =================
        if (welcome.CurrentPhase == FusionWelcomeState.Phase.Gameplay)
        {
            // 🔥 FIX CRITICO
            if (ui.IsWaitingForRules)
                ui.HideWaitingForRules();

            if (ui.IsWelcomeOpen)
                ui.CloseWelcomePanelSmooth();

            if (!gameplayStartedLocal && runner.IsServer)
            {
                gameplayStartedLocal = true;

                var game = FusionBootstrap.GameStateInstance;
                if (game != null && game.Object != null && game.Object.HasStateAuthority)
                {
                    Debug.Log("[WELCOME] SERVER starting gameplay");
                    game.RPC_StartGameplay(0);
                }
            }

            return;
        }

        // ================= IDLE =================
        // Nessuna forzatura UI
    }

    // ======================================================
    // WAITING TEXT (RULES ONLY)
    // ======================================================

    private void UpdateWaitingText()
    {
        if (ui == null || lobby == null || welcome == null)
            return;

        // Aggiorna il testo SOLO se è attivo il waiting delle rules
        if (!ui.IsWaitingForRules)
            return;

        int connected = 0;
        int closed = 0;

        for (int i = 0; i < 4; i++)
        {
            var s = lobby.Slots.Get(i);
            if (!s.Connected) continue;

            connected++;
            if (welcome.ClosedBySlot.Get(i))
                closed++;
        }

        if (connected <= 0)
            ui.SetWaitingBaseText("In attesa di giocatori");
        else
            ui.SetWaitingBaseText($"In attesa di {closed}/{connected} giocatori");
    }

    // ======================================================
    // UTILS
    // ======================================================

    private int FindMySlotIndex()
    {
        if (runner == null || lobby == null)
            return -1;

        PlayerRef me = runner.LocalPlayer;

        for (int i = 0; i < 4; i++)
        {
            var s = lobby.Slots.Get(i);
            if (s.Connected && s.Player == me)
                return i;
        }

        return -1;
    }
}
