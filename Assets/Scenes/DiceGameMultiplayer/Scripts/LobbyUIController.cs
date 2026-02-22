using System.Collections;
using UnityEngine;
using Fusion;

public class LobbyUIController : MonoBehaviour
{
    // =========================
    // REFERENCES
    // =========================
    [Header("Refs")]
    [SerializeField] private NameEntryUIController nameEntryUI;

    private OrientationUIManagerMultiplayer ui;

    private Coroutine dotsRoutine;          // Coroutine animazione puntini
    private Coroutine bindRoutine;          // Coroutine binding Fusion
    private Coroutine liveRefreshRoutine;   // Refresh continuo

    private const string TitleBase = "In attesa di giocatori";
    private bool buttonsBound = false;

    private NetworkRunner runner;
    private FusionLobbyState lobbyState;
    private FusionLobbyState subscribedTo;

    // ======================================================
    // LIFECYCLE
    // ======================================================
    private void Awake()
    {
        ui = OrientationUIManagerMultiplayer.Instance;
        Debug.Log("[LobbyUI] Awake()");
    }

    private void OnDisable()
    {
        StopLiveRefresh();
        UnsubscribeLobbyState();

        if (bindRoutine != null) StopCoroutine(bindRoutine);
        bindRoutine = null;
    }

    // ======================================================
    // API
    // ======================================================
    public void OpenLobby()
    {
        if (ui == null) ui = OrientationUIManagerMultiplayer.Instance;
        if (ui == null) return;

        ui.ResetLobbyPanelState();
        ui.ShowLobbyPanelSmooth();
        ui.ApplyOrientation();

        BindButtons();
        StartDots();

        if (bindRoutine != null) StopCoroutine(bindRoutine);
        bindRoutine = StartCoroutine(WaitFusionThenSubscribeAndSync());

        StartLiveRefresh();
    }

    public void CloseLobby(System.Action onClosed = null)
    {
        if (ui == null) return;

        StopLiveRefresh();
        StopDots();
        ui.CloseLobbyPanelSmooth(onClosed);
    }

    public void RebindAfterOrientation()
    {
        buttonsBound = false;

        if (ui != null && (ui.IsLobbyOpen || ui.IsLobbyOpening || ui.IsLobbyClosing))
        {
            BindButtons();
            ui.ApplyOrientation();
            ForceRefreshNow();
        }
    }

    public void ForceRefreshNow()
    {
        EnsureSubscribedToCurrentLobbyState();
        RefreshFromNetwork();
        ApplyStartAndButtons();
    }

    // ======================================================
    // WAIT FUSION READY
    // ======================================================
    private IEnumerator WaitFusionThenSubscribeAndSync()
    {
        while (true)
        {
            runner = FusionBootstrap.RunnerInstance;
            lobbyState = FusionBootstrap.LobbyStateInstance;

            bool ready =
                runner != null &&
                runner.IsRunning &&
                lobbyState != null &&
                lobbyState.Object != null &&
                lobbyState.Object.IsValid;

            if (ready) break;
            yield return null;
        }

        EnsureSubscribedToCurrentLobbyState();
        ForceRefreshNow();
        yield return null;
        ForceRefreshNow();
    }

    // ======================================================
    // LIVE REFRESH
    // ======================================================
    private void StartLiveRefresh()
    {
        if (liveRefreshRoutine != null) return;
        liveRefreshRoutine = StartCoroutine(LiveRefreshLoop());
    }

    private void StopLiveRefresh()
    {
        if (liveRefreshRoutine != null)
        {
            StopCoroutine(liveRefreshRoutine);
            liveRefreshRoutine = null;
        }
    }

    private IEnumerator LiveRefreshLoop()
    {
        var wait = new WaitForSeconds(0.15f);

        while (ui != null && (ui.IsLobbyOpen || ui.IsLobbyOpening || ui.IsLobbyClosing))
        {
            ForceRefreshNow();
            yield return wait;
        }

        liveRefreshRoutine = null;
    }

    // ======================================================
    // SUBSCRIPTION
    // ======================================================
    private void EnsureSubscribedToCurrentLobbyState()
    {
        lobbyState = FusionBootstrap.LobbyStateInstance;
        if (lobbyState == null) return;

        if (subscribedTo == lobbyState) return;

        if (subscribedTo != null)
            subscribedTo.OnLobbyChanged -= OnFusionLobbyChanged;

        subscribedTo = lobbyState;
        subscribedTo.OnLobbyChanged -= OnFusionLobbyChanged;
        subscribedTo.OnLobbyChanged += OnFusionLobbyChanged;
    }

    private void UnsubscribeLobbyState()
    {
        if (subscribedTo != null)
            subscribedTo.OnLobbyChanged -= OnFusionLobbyChanged;

        subscribedTo = null;
    }

    private void OnFusionLobbyChanged()
    {
        if (ui == null) return;

        ForceRefreshNow(); // Include cambio Phase
    }

    // ======================================================
    // NETWORK → UI
    // ======================================================
    private void RefreshFromNetwork()
    {
        if (ui == null) return;

        runner = FusionBootstrap.RunnerInstance;
        lobbyState = FusionBootstrap.LobbyStateInstance;

        bool ready =
            runner != null &&
            runner.IsRunning &&
            lobbyState != null &&
            lobbyState.Object != null &&
            lobbyState.Object.IsValid;

        if (!ready) return;

        // Se fase RULES → chiude lobby e apre welcome
        if (lobbyState.Phase == FusionLobbyState.GamePhase.Rules)
        {
            if (ui.IsLobbyOpen || ui.IsLobbyOpening || ui.IsLobbyClosing)
            {
                StopLiveRefresh();
                StopDots();
                ui.CloseLobbyPanelSmooth();
            }

            if (!ui.IsWelcomeOpen)
                ui.ShowWelcomePanelSmooth();

            return;
        }

        // Aggiorna slot lobby
        for (int i = 0; i < 4; i++)
        {
            var s = lobbyState.Slots.Get(i);

            bool present = s.Connected;
            string name = present ? s.Name.ToString().Trim() : "???";
            if (string.IsNullOrEmpty(name)) name = "???";

            if (ui.LobbyNameTexts[i] != null)
                ui.LobbyNameTexts[i].text = present ? name : "???";

            if (ui.LobbyReadyTexts[i] != null)
            {
                if (!present)
                {
                    ui.LobbyReadyTexts[i].text = "";
                }
                else
                {
                    bool isReady = s.Ready;
                    ui.LobbyReadyTexts[i].text = isReady ? "SI" : "NO";
                    ui.LobbyReadyTexts[i].color = isReady
                        ? new Color32(0, 180, 50, 255)
                        : new Color32(220, 0, 100, 255);
                }
            }
        }
    }

    private void ApplyStartAndButtons()
    {
        runner = FusionBootstrap.RunnerInstance;
        lobbyState = FusionBootstrap.LobbyStateInstance;

        bool fusionReady =
            runner != null &&
            runner.IsRunning &&
            lobbyState != null &&
            lobbyState.Object != null &&
            lobbyState.Object.IsValid;

        if (!fusionReady)
            return;

        int connectedCount = 0;
        for (int i = 0; i < FusionGameState.MaxPlayers; i++)
        {
            if (lobbyState.Slots.Get(i).Connected)
                connectedCount++;
        }

        bool canStart =
            runner.IsServer &&
            connectedCount >= 2 &&
            lobbyState.AllConnectedReady();

        if (ui != null && ui.LobbyStartButton != null)
            ui.LobbyStartButton.gameObject.SetActive(canStart);

        if (ui != null && ui.LobbyReadyButton != null)
            ui.LobbyReadyButton.interactable = fusionReady;
    }

    // ======================================================
    // BUTTONS
    // ======================================================
    private void BindButtons()
    {
        if (ui == null) return;
        if (buttonsBound) return;

        if (ui.LobbyReadyButton != null)
        {
            ui.LobbyReadyButton.onClick.RemoveAllListeners();
            ui.LobbyReadyButton.onClick.AddListener(OnReadyPressed);
        }

        if (ui.LobbyStartButton != null)
        {
            ui.LobbyStartButton.onClick.RemoveAllListeners();
            ui.LobbyStartButton.onClick.AddListener(OnStartPressed);
        }

        buttonsBound = true;
    }

    private void OnReadyPressed()
    {
        runner = FusionBootstrap.RunnerInstance;
        lobbyState = FusionBootstrap.LobbyStateInstance;

        bool ready =
            runner != null &&
            runner.IsRunning &&
            lobbyState != null &&
            lobbyState.Object != null &&
            lobbyState.Object.IsValid;

        if (!ready) return;

        lobbyState.RPC_ToggleReadyFor(runner.LocalPlayer);
        ForceRefreshNow();
    }

    private void OnStartPressed()
    {
        runner = FusionBootstrap.RunnerInstance;
        lobbyState = FusionBootstrap.LobbyStateInstance;

        if (runner == null || lobbyState == null || !runner.IsRunning) return;
        if (lobbyState.Object == null || !lobbyState.Object.IsValid) return;
        if (!runner.IsServer) return;

        if (!lobbyState.AllConnectedReady())
        {
            Debug.Log("[LobbyUI] Non tutti pronti o manca nome.");
            return;
        }

        // Host passa a RULES
        lobbyState.Host_BeginRules();
        ForceRefreshNow();
    }

    // ======================================================
    // DOTS ANIMATION
    // ======================================================
    private void StartDots()
    {
        if (dotsRoutine != null)
            return;

        dotsRoutine = StartCoroutine(DotsLoop());
    }

    private void StopDots()
    {
        if (dotsRoutine != null)
        {
            StopCoroutine(dotsRoutine);
            dotsRoutine = null;
        }

        if (ui != null && ui.LobbyTitleText != null)
            ui.LobbyTitleText.text = TitleBase;
    }

    private IEnumerator DotsLoop()
    {
        int dots = 0;

        while (ui != null && (ui.IsLobbyOpen || ui.IsLobbyOpening || ui.IsLobbyClosing))
        {
            dots = (dots + 1) % 4;

            if (ui.LobbyTitleText != null)
                ui.LobbyTitleText.text = TitleBase + new string('.', dots);

            yield return new WaitForSeconds(0.4f);
        }
    }
}