// FusionBootstrap.cs (Lobby + Welcome + Game state resolve)

using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using Fusion;
using Fusion.Sockets;
using UnityEngine.SceneManagement;

public class FusionBootstrap : MonoBehaviour, INetworkRunnerCallbacks
{
    // Modalità auto avvio
    public enum AutoMode { None, Host, Client }

    // =========================
    // INSPECTOR REFERENCES
    // =========================

    [Header("Runner")]
    public NetworkRunner runner; // NetworkRunner principale

    [Header("Lobby Net State (optional ref from Inspector)")]
    [SerializeField] private FusionLobbyState lobbyState;

    [Header("Welcome Net State (optional ref from Inspector)")]
    [SerializeField] private FusionWelcomeState welcomeState;

    [Header("Game Net State (optional ref from Inspector)")]
    [SerializeField] private FusionGameState gameState;

    [Header("Room")]
    public string roomName = "Room_1"; // Nome stanza

    [Header("Auto Start")]
    public AutoMode autoMode = AutoMode.None;
    public bool editorHostBuildClient = true;

    private bool started = false;

    // =========================
    // STATIC INSTANCES
    // =========================

    public static NetworkRunner RunnerInstance { get; private set; }
    public static FusionLobbyState LobbyStateInstance { get; private set; }
    public static FusionWelcomeState WelcomeStateInstance { get; private set; }
    public static FusionGameState GameStateInstance { get; private set; }

    private void Awake()
    {
        // Recupera runner se non assegnato
        if (runner == null)
            runner = GetComponent<NetworkRunner>();

        if (runner == null)
        {
            Debug.LogError("[FusionBootstrap] Nessun NetworkRunner sullo stesso GameObject!");
            enabled = false;
            return;
        }

        // Set static references
        RunnerInstance = runner;
        LobbyStateInstance = lobbyState;
        WelcomeStateInstance = welcomeState;
        GameStateInstance = gameState;

        runner.AddCallbacks(this);
    }

    private void Start()
    {
        if (started) return;
        started = true;

        // Modalità editor: host in editor, client in build
        if (editorHostBuildClient)
        {
#if UNITY_EDITOR
            StartAsHost();
#else
            StartAsClient();
#endif
            return;
        }

        // Auto mode manuale
        if (autoMode == AutoMode.Host) StartAsHost();
        else if (autoMode == AutoMode.Client) StartAsClient();
    }

    private void Update()
    {
        // Controlli validità runner e server
        if (runner == null || !runner.IsRunning) return;
        if (!runner.IsServer) return;

        // Validazione stati network
        if (WelcomeStateInstance == null || WelcomeStateInstance.Object == null || !WelcomeStateInstance.Object.IsValid) return;
        if (GameStateInstance == null || GameStateInstance.Object == null || !GameStateInstance.Object.IsValid) return;

        // (Spazio lasciato intenzionalmente per eventuale logica futura)
    }

    // =========================
    // SLOT UTILITY
    // =========================

    private byte FindFirstConnectedSlot()
    {
        if (LobbyStateInstance == null || LobbyStateInstance.Object == null || !LobbyStateInstance.Object.IsValid)
            return 0;

        for (int i = 0; i < FusionGameState.MaxPlayers; i++)
        {
            var s = LobbyStateInstance.Slots.Get(i);
            if (s.Connected) return (byte)i;
        }
        return 0;
    }

    // =========================
    // START RUNNER
    // =========================

    public async void StartAsHost() => await StartRunner(GameMode.Host);
    public async void StartAsClient() => await StartRunner(GameMode.Client);

    private async Task StartRunner(GameMode mode)
    {
        // Scene manager di rete
        var sceneManager = GetComponent<NetworkSceneManagerDefault>();
        if (sceneManager == null)
            sceneManager = gameObject.AddComponent<NetworkSceneManagerDefault>();

        runner.ProvideInput = true;

        // Scena attiva
        var activeSceneIndex = SceneManager.GetActiveScene().buildIndex;
        var sceneRef = SceneRef.FromIndex(activeSceneIndex);

        // Avvio partita
        var result = await runner.StartGame(new StartGameArgs
        {
            GameMode = mode,
            SessionName = roomName,
            SceneManager = sceneManager,
            Scene = sceneRef
        });

        if (!result.Ok)
        {
            Debug.LogError($"[FusionBootstrap] ❌ StartGame FALLITO: {result.ShutdownReason}");
            return;
        }

        // Resolve stati network
        StartCoroutine(ResolveLobbyStateInstanceLoop());
        StartCoroutine(ResolveWelcomeStateInstanceLoop());
        StartCoroutine(ResolveGameStateInstanceLoop());
    }

    // =========================
    // RESOLVE STATE INSTANCES
    // =========================

    private System.Collections.IEnumerator ResolveLobbyStateInstanceLoop()
    {
        while (runner != null && runner.IsRunning)
        {
            if (LobbyStateInstance != null && LobbyStateInstance.Object != null && LobbyStateInstance.Object.IsValid)
                yield break;

            if (lobbyState != null && lobbyState.Object != null && lobbyState.Object.IsValid)
            {
                LobbyStateInstance = lobbyState;
                yield break;
            }

            var found = FindObjectOfType<FusionLobbyState>(true);
            if (found != null && found.Object != null && found.Object.IsValid)
            {
                lobbyState = found;
                LobbyStateInstance = found;
                yield break;
            }

            yield return null;
        }
    }

    private System.Collections.IEnumerator ResolveWelcomeStateInstanceLoop()
    {
        while (runner != null && runner.IsRunning)
        {
            if (WelcomeStateInstance != null && WelcomeStateInstance.Object != null && WelcomeStateInstance.Object.IsValid)
                yield break;

            if (welcomeState != null && welcomeState.Object != null && welcomeState.Object.IsValid)
            {
                WelcomeStateInstance = welcomeState;
                yield break;
            }

            var found = FindObjectOfType<FusionWelcomeState>(true);
            if (found != null && found.Object != null && found.Object.IsValid)
            {
                welcomeState = found;
                WelcomeStateInstance = found;
                yield break;
            }

            yield return null;
        }
    }

    private System.Collections.IEnumerator ResolveGameStateInstanceLoop()
    {
        while (runner != null && runner.IsRunning)
        {
            if (GameStateInstance != null && GameStateInstance.Object != null && GameStateInstance.Object.IsValid)
                yield break;

            if (gameState != null && gameState.Object != null && gameState.Object.IsValid)
            {
                GameStateInstance = gameState;
                yield break;
            }

            var found = FindObjectOfType<FusionGameState>(true);
            if (found != null && found.Object != null && found.Object.IsValid)
            {
                gameState = found;
                GameStateInstance = found;
                yield break;
            }

            yield return null;
        }
    }

    // =========================
    // CALLBACKS
    // =========================

    public void OnPlayerJoined(NetworkRunner runner, PlayerRef player)
    {
        if (!runner.IsServer) return;
        StartCoroutine(WaitLobbySpawnThenAdd(player, preferSlot0: (player == runner.LocalPlayer)));
    }

    private System.Collections.IEnumerator WaitLobbySpawnThenAdd(PlayerRef player, bool preferSlot0)
    {
        while (LobbyStateInstance == null || LobbyStateInstance.Object == null || !LobbyStateInstance.Object.IsValid)
            yield return null;

        LobbyStateInstance.Host_AddOrUpdatePlayer(player, preferSlot0);
    }

    public void OnPlayerLeft(NetworkRunner runner, PlayerRef player)
    {
        if (!runner.IsServer) return;
        StartCoroutine(WaitLobbySpawnThenRemove(player));
    }

    private System.Collections.IEnumerator WaitLobbySpawnThenRemove(PlayerRef player)
    {
        while (LobbyStateInstance == null || LobbyStateInstance.Object == null || !LobbyStateInstance.Object.IsValid)
            yield return null;

        LobbyStateInstance.Host_RemovePlayer(player);
    }

    // Callback vuoti richiesti da INetworkRunnerCallbacks
    public void OnConnectedToServer(NetworkRunner runner) { }
    public void OnDisconnectedFromServer(NetworkRunner runner, NetDisconnectReason reason) { }
    public void OnShutdown(NetworkRunner runner, ShutdownReason shutdownReason) { }

    public void OnConnectRequest(NetworkRunner runner, NetworkRunnerCallbackArgs.ConnectRequest request, byte[] token) { }
    public void OnConnectFailed(NetworkRunner runner, NetAddress remoteAddress, NetConnectFailedReason reason) { }

    public void OnInput(NetworkRunner runner, NetworkInput input) { }
    public void OnInputMissing(NetworkRunner runner, PlayerRef player, NetworkInput input) { }
    public void OnUserSimulationMessage(NetworkRunner runner, SimulationMessagePtr message) { }
    public void OnSessionListUpdated(NetworkRunner runner, List<SessionInfo> sessionList) { }
    public void OnCustomAuthenticationResponse(NetworkRunner runner, Dictionary<string, object> data) { }
    public void OnHostMigration(NetworkRunner runner, HostMigrationToken hostMigrationToken) { }
    public void OnReliableDataReceived(NetworkRunner runner, PlayerRef player, ReliableKey key, ArraySegment<byte> data) { }
    public void OnSceneLoadDone(NetworkRunner runner) { }
    public void OnSceneLoadStart(NetworkRunner runner) { }

    public void OnObjectEnterAOI(NetworkRunner runner, NetworkObject obj, PlayerRef player) { }
    public void OnObjectExitAOI(NetworkRunner runner, NetworkObject obj, PlayerRef player) { }
    public void OnReliableDataProgress(NetworkRunner runner, PlayerRef player, ReliableKey key, float progress) { }
}