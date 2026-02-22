using System;
using Fusion;
using UnityEngine;

public class FusionWelcomeState : NetworkBehaviour
{
    // =========================
    // FASI WELCOME
    // =========================
    public enum Phase : byte
    {
        Idle = 0,      // Nessuna regola mostrata
        Rules = 1,     // Regole aperte
        Gameplay = 2   // Tutti hanno chiuso
    }

    private const int MaxPlayers = 4;  // Slot lobby massimi

    // Fase corrente replicata
    [Networked] public Phase CurrentPhase { get; set; }

    // Stato chiusura regole per slot (0..3)
    [Networked, Capacity(MaxPlayers)]
    public NetworkArray<NetworkBool> ClosedBySlot => default;

    // Evento UI
    public event Action OnWelcomeChanged;

    // Cache hash per change detection
    private int _lastHash = int.MinValue;

    // ======================================================
    // SPAWN
    // ======================================================
    public override void Spawned()
    {
        // Inizializzazione solo server
        if (Object != null && Object.HasStateAuthority)
        {
            CurrentPhase = Phase.Idle;

            for (int i = 0; i < MaxPlayers; i++)
                ClosedBySlot.Set(i, false);
        }

        _lastHash = ComputeHash();      // Cache iniziale
        OnWelcomeChanged?.Invoke();     // Notifica UI
    }

    // ======================================================
    // HOST: INIZIO RULES
    // ======================================================
    public void Host_BeginRules()
    {
        if (Object == null || !Object.IsValid) return;
        if (!Object.HasStateAuthority) return;

        CurrentPhase = Phase.Rules;

        // Reset chiusure
        for (int i = 0; i < MaxPlayers; i++)
            ClosedBySlot.Set(i, false);

        OnWelcomeChanged?.Invoke();
    }

    // ======================================================
    // RPC: CLIENT → SERVER (CHIUSURA RULES)
    // ======================================================
    [Rpc(RpcSources.All, RpcTargets.StateAuthority)]
    public void RPC_MarkClosed(PlayerRef player)
    {
        if (Object == null || !Object.IsValid) return;
        if (!Object.HasStateAuthority) return;
        if (player == PlayerRef.None) return;

        // Recupera lobby per mappare PlayerRef → slot
        var lobby = FusionBootstrap.LobbyStateInstance;
        if (lobby == null || lobby.Object == null || !lobby.Object.IsValid)
            return;

        int slot = FindSlotIndex(lobby, player);
        if (slot < 0 || slot >= MaxPlayers)
            return;

        // Marca chiusura
        ClosedBySlot.Set(slot, true);

        // Se tutti hanno chiuso → Gameplay
        if (CurrentPhase == Phase.Rules && AllConnectedClosed(lobby))
            CurrentPhase = Phase.Gameplay;

        OnWelcomeChanged?.Invoke();
    }

    // ======================================================
    // HELPERS
    // ======================================================

    // Trova slot da PlayerRef
    private int FindSlotIndex(FusionLobbyState lobby, PlayerRef player)
    {
        for (int i = 0; i < MaxPlayers; i++)
        {
            var s = lobby.Slots.Get(i);
            if (s.Connected && s.Player == player)
                return i;
        }
        return -1;
    }

    // Verifica se tutti i connessi hanno chiuso
    private bool AllConnectedClosed(FusionLobbyState lobby)
    {
        int connected = 0;

        for (int i = 0; i < MaxPlayers; i++)
        {
            var s = lobby.Slots.Get(i);
            if (!s.Connected) continue;

            connected++;

            if (!ClosedBySlot.Get(i))
                return false;
        }

        return connected > 0;
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
            OnWelcomeChanged?.Invoke();
        }
    }

    // Calcolo hash stato corrente
    private int ComputeHash()
    {
        unchecked
        {
            int h = 17;
            h = h * 31 + (int)CurrentPhase;

            for (int i = 0; i < MaxPlayers; i++)
                h = h * 31 + (ClosedBySlot.Get(i) ? 1 : 0);

            return h;
        }
    }
}