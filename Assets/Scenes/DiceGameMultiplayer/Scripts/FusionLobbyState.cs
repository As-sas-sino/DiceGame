using System;
using Fusion;
using UnityEngine;

public class FusionLobbyState : NetworkBehaviour
{
    // =========================
    // COSTANTI
    // =========================
    private const int MaxPlayers = 4;   // Slot massimi lobby

    // =========================
    // FASE GLOBALE LOBBY
    // =========================
    public enum GamePhase : byte
    {
        Lobby = 0,   // Fase lobby
        Rules = 1    // Fase regole
    }

    // =========================
    // STRUTTURA SLOT PLAYER
    // =========================
    public struct PlayerSlot : INetworkStruct
    {
        public PlayerRef Player;            // Riferimento player
        public NetworkBool Connected;       // Stato connessione
        public NetworkBool Ready;           // Stato ready
        public NetworkString<_16> Name;     // Nome player
    }

    // Array slot replicato
    [Networked, Capacity(MaxPlayers)]
    public NetworkArray<PlayerSlot> Slots => default;

    // Fase globale replicata
    [Networked] public GamePhase Phase { get; set; }

    // Evento UI
    public event Action OnLobbyChanged;

    // Cache hash per change detection
    private int _lastHash = int.MinValue;

    // ======================================================
    // SPAWN
    // ======================================================
    public override void Spawned()
    {
        Debug.Log($"[FusionLobbyState] Spawned | StateAuth={Object.HasStateAuthority}");

        // Reset iniziale solo host
        if (Object.HasStateAuthority)
        {
            for (int i = 0; i < MaxPlayers; i++)
                Slots.Set(i, default);

            Phase = GamePhase.Lobby;
        }

        _lastHash = ComputeHash();
        OnLobbyChanged?.Invoke();
    }

    // ======================================================
    // HOST ONLY: ADD / REMOVE PLAYER
    // ======================================================
    public void Host_AddOrUpdatePlayer(PlayerRef player, bool preferSlot0 = false)
    {
        if (Object == null || !Object.IsValid) return;
        if (!Object.HasStateAuthority) return;

        // Se già presente non fare nulla
        for (int i = 0; i < MaxPlayers; i++)
        {
            var s = Slots.Get(i);
            if (s.Connected && s.Player == player)
                return;
        }

        // Preferisci slot 0 per host
        if (preferSlot0)
        {
            var s0 = Slots.Get(0);
            if (!s0.Connected)
            {
                s0.Player = player;
                s0.Connected = true;
                s0.Ready = false;
                s0.Name = "???";
                Slots.Set(0, s0);
                OnLobbyChanged?.Invoke();
                return;
            }
        }

        // Primo slot libero
        for (int i = 0; i < MaxPlayers; i++)
        {
            var s = Slots.Get(i);
            if (!s.Connected)
            {
                s.Player = player;
                s.Connected = true;
                s.Ready = false;
                s.Name = "???";
                Slots.Set(i, s);
                OnLobbyChanged?.Invoke();
                return;
            }
        }
    }

    public void Host_RemovePlayer(PlayerRef player)
    {
        if (Object == null || !Object.IsValid) return;
        if (!Object.HasStateAuthority) return;

        for (int i = 0; i < MaxPlayers; i++)
        {
            var s = Slots.Get(i);
            if (s.Connected && s.Player == player)
            {
                Slots.Set(i, default);   // Reset slot
                OnLobbyChanged?.Invoke();
                return;
            }
        }
    }

    // ======================================================
    // RPC: SET NAME
    // ======================================================
    [Rpc(RpcSources.All, RpcTargets.StateAuthority)]
    public void RPC_SetPlayerNameFor(PlayerRef player, NetworkString<_16> name)
    {
        if (Object == null || !Object.IsValid) return;
        if (!Object.HasStateAuthority) return;
        if (player == PlayerRef.None) return;

        // Aggiorna slot esistente
        for (int i = 0; i < MaxPlayers; i++)
        {
            var s = Slots.Get(i);
            if (s.Connected && s.Player == player)
            {
                s.Name = name;
                Slots.Set(i, s);
                OnLobbyChanged?.Invoke();
                return;
            }
        }

        // Race condition: crea slot se non trovato
        for (int i = 0; i < MaxPlayers; i++)
        {
            var s = Slots.Get(i);
            if (!s.Connected)
            {
                s.Player = player;
                s.Connected = true;
                s.Ready = false;
                s.Name = name;
                Slots.Set(i, s);
                OnLobbyChanged?.Invoke();
                return;
            }
        }
    }

    // ======================================================
    // RPC: TOGGLE READY
    // ======================================================
    [Rpc(RpcSources.All, RpcTargets.StateAuthority)]
    public void RPC_ToggleReadyFor(PlayerRef player)
    {
        if (Object == null || !Object.IsValid) return;
        if (!Object.HasStateAuthority) return;
        if (player == PlayerRef.None) return;

        for (int i = 0; i < MaxPlayers; i++)
        {
            var s = Slots.Get(i);
            if (s.Connected && s.Player == player)
            {
                s.Ready = !s.Ready;     // Inverte stato ready
                Slots.Set(i, s);
                OnLobbyChanged?.Invoke();
                return;
            }
        }
    }

    // ======================================================
    // CHECK: TUTTI READY
    // ======================================================
    public bool AllConnectedReady()
    {
        if (Object == null || !Object.IsValid) return false;

        int connected = 0;

        for (int i = 0; i < MaxPlayers; i++)
        {
            var s = Slots.Get(i);
            if (!s.Connected) continue;

            connected++;

            if (!s.Ready) return false;

            string n = s.Name.ToString().Trim();
            if (string.IsNullOrEmpty(n) || n == "???")
                return false;
        }

        return connected > 0;
    }

    // ======================================================
    // HOST FLOW: LOBBY → RULES
    // ======================================================
    public void Host_BeginRules()
    {
        if (Object == null || !Object.IsValid) return;
        if (!Object.HasStateAuthority) return;

        Phase = GamePhase.Rules;
        OnLobbyChanged?.Invoke();
    }

    // ======================================================
    // CHANGE DETECTOR (NETWORK SYNC)
    // ======================================================
    public override void FixedUpdateNetwork()
    {
        int h = ComputeHash();

        if (h != _lastHash)
        {
            _lastHash = h;
            OnLobbyChanged?.Invoke();
        }
    }

    // Calcolo hash stato lobby
    private int ComputeHash()
    {
        unchecked
        {
            int h = 17;
            h = h * 31 + (int)Phase;

            for (int i = 0; i < MaxPlayers; i++)
            {
                var s = Slots.Get(i);
                h = h * 31 + (s.Connected ? 1 : 0);
                h = h * 31 + (s.Ready ? 1 : 0);
                h = h * 31 + s.Player.RawEncoded;
                h = h * 31 + s.Name.ToString().GetHashCode();
            }

            return h;
        }
    }
}