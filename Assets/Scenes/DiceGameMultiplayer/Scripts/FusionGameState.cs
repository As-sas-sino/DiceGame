using System;
using Fusion;
using UnityEngine;

public class FusionGameState : NetworkBehaviour
{
    // =========================
    // COSTANTI GLOBALI
    // =========================
    public const int MaxPlayers = 4;   // Numero massimo giocatori
    public const int MaxRounds  = 3;   // Round per ciclo

    // =========================
    // CACHE LOCALE (Render Sync)
    // =========================
    private byte _lastDiceResult;      // Ultimo risultato dado
    private bool _lastPlayerWon;       // Ultimo esito vittoria

    private byte[] _lastLives = new byte[MaxPlayers];                      // Cache vite
    private byte[] _lastResults = new byte[MaxPlayers * MaxRounds];        // Cache risultati
    private int[] _lastTotals = new int[MaxPlayers];                       // Cache totali

    // =========================
    // FASI DEL TURNO
    // =========================
    public enum TurnPhase : byte
    {
        ChoosingNumber = 0,   // Selezione numero
        RollingDice    = 1,   // Lancio dado
        ShowingResult  = 2    // Visualizzazione risultato
    }

    // ======================================================
    // NETWORKED STATE (SOURCE OF TRUTH SERVER)
    // ======================================================

    [Networked] public NetworkBool GameStarted { get; private set; }        // Partita avviata
    [Networked] public byte CurrentPlayerSlot { get; private set; }         // Slot turno attivo
    [Networked] public byte CurrentRoundIndex { get; private set; }         // Round corrente
    [Networked] public TurnPhase Phase { get; private set; }                // Fase corrente
    [Networked] public int ChosenNumber { get; private set; }               // Numero scelto (legacy)

    [Networked, Capacity(MaxPlayers * 3)]
    public NetworkArray<byte> ResultsByPlayerAndRound => default;           // Risultati per slot/round

    [Networked] public NetworkBool PlayerWon { get; private set; }          // Vittoria ultimo turno

    [Networked, Capacity(MaxPlayers)]
    public NetworkArray<byte> Lives => default;                             // Vite giocatori

    [Networked, Capacity(MaxPlayers)]
    public NetworkArray<byte> ChosenNumberBySlot => default;                // Numero scelto per slot

    [Networked, Capacity(MaxPlayers)]
    public NetworkArray<int> TotalByPlayer => default;                      // Totale accumulato

    [Networked] public NetworkBool GameOver { get; private set; }           // Stato fine partita
    [Networked] public byte WinnerSlot { get; private set; }                // Vincitore

    // =========================
    // DICE NETWORK DATA
    // =========================
    [Networked] public int DiceRollSeed { get; private set; }               // Seed condiviso
    [Networked] public NetworkBool DiceRollActive { get; private set; }     // Lancio attivo
    [Networked] public byte DiceResult { get; private set; }                // Risultato dado

    // =========================
    // EVENTO LOCALE (UI)
    // =========================
    public event Action OnGameChanged;                                      // Trigger UI refresh

    // =========================
    // RENDER CACHE STATE
    // =========================
    private bool _lastGameStarted;
    private byte _lastPlayerSlot;
    private byte _lastRoundIndex;
    private TurnPhase _lastPhase;

    // Numeri validi selezionabili
    private static readonly int[] ValidValues =
        { 2,3,4,5,6,7,8,9,10,20,30,40,50,60 };

    // ======================================================
    // SPAWN (SERVER INIT)
    // ======================================================
    public override void Spawned()
    {
        if (Object.HasStateAuthority) // Solo server inizializza
        {
            GameStarted = false;
            CurrentPlayerSlot = 0;
            CurrentRoundIndex = 0;
            Phase = TurnPhase.ChoosingNumber;

            DiceRollSeed   = 0;
            DiceRollActive = false;
            DiceResult     = 0;

            for (int i = 0; i < MaxPlayers; i++)
            {
                Lives.Set(i, 3);
                ChosenNumberBySlot.Set(i, 0);
            }
        }

        CacheState();           // Allinea cache locale
        OnGameChanged?.Invoke();// Aggiorna UI
    }

    // ======================================================
    // RPC: SCELTA NUMERO (CLIENT → SERVER)
    // ======================================================
    [Rpc(RpcSources.All, RpcTargets.StateAuthority)]
    public void RPC_SubmitChosenNumber(PlayerRef player, byte number)
    {
        if (!Object.HasStateAuthority) return;          // Solo server valida
        if (!GameStarted) return;                       // Partita attiva
        if (Phase != TurnPhase.ChoosingNumber) return;  // Fase corretta
        if (!IsValidNumber(number)) return;             // Numero valido

        var lobby = FusionBootstrap.LobbyStateInstance;
        if (lobby == null) return;

        int slot = FindSlotIndex(lobby, player);
        if (slot != CurrentPlayerSlot) return;          // Turno corretto

        ChosenNumberBySlot.Set(slot, number);

        // Passa a Rolling
        Phase = TurnPhase.RollingDice;
        DiceRollSeed   = UnityEngine.Random.Range(int.MinValue, int.MaxValue);
        DiceRollActive = true;
        DiceResult     = 0;

        Debug.Log($"[GAMESTATE] RollingDice | Seed={DiceRollSeed}");
    }

    // ======================================================
    // SERVER LOOP
    // ======================================================
    public override void FixedUpdateNetwork()
    {
        if (!Object.HasStateAuthority || !GameStarted)
            return;

        // Nessuna logica automatica (solo RPC)
    }

    // ======================================================
    // RENDER SYNC (CLIENT/UI)
    // ======================================================
    public override void Render()
    {
        if (HasStateChanged())
        {
            CacheState();
            OnGameChanged?.Invoke();
        }
    }

    // Controllo differenze stato
    private bool HasStateChanged()
    {
        if (_lastGameStarted != GameStarted ||
            _lastPlayerSlot  != CurrentPlayerSlot ||
            _lastRoundIndex  != CurrentRoundIndex ||
            _lastPhase       != Phase ||
            _lastDiceResult  != DiceResult ||
            _lastPlayerWon   != PlayerWon)
            return true;

        for (int i = 0; i < MaxPlayers; i++)
            if (_lastLives[i] != Lives.Get(i))
                return true;

        for (int i = 0; i < MaxPlayers * MaxRounds; i++)
            if (_lastResults[i] != ResultsByPlayerAndRound.Get(i))
                return true;

        for (int i = 0; i < MaxPlayers; i++)
            if (_lastTotals[i] != TotalByPlayer.Get(i))
                return true;

        return false;
    }

    // Aggiorna cache locale
    private void CacheState()
    {
        _lastGameStarted = GameStarted;
        _lastPlayerSlot  = CurrentPlayerSlot;
        _lastRoundIndex  = CurrentRoundIndex;
        _lastPhase       = Phase;
        _lastDiceResult  = DiceResult;
        _lastPlayerWon   = PlayerWon;

        for (int i = 0; i < MaxPlayers; i++)
            _lastLives[i] = Lives.Get(i);

        for (int i = 0; i < MaxPlayers * MaxRounds; i++)
            _lastResults[i] = ResultsByPlayerAndRound.Get(i);

        for (int i = 0; i < MaxPlayers; i++)
            _lastTotals[i] = TotalByPlayer.Get(i);
    }

    // ======================================================
    // SERVER: SET RISULTATO DADO
    // ======================================================
    public void SetDiceResult(byte result)
    {
        if (!Object.HasStateAuthority) return;

        DiceResult = result;

        int slot  = CurrentPlayerSlot;
        int round = CurrentRoundIndex;

        ResultsByPlayerAndRound.Set(slot * 3 + round, result);

        int currentTotal = TotalByPlayer.Get(slot);
        TotalByPlayer.Set(slot, currentTotal + result);

        byte chosen = ChosenNumberBySlot.Get(slot);
        PlayerWon = (result == chosen);

        Phase = TurnPhase.ShowingResult;

        Debug.Log($"[SERVER] SetDiceResult Slot={slot} Result={result}");
    }

    // ======================================================
    // RPC: END TURN
    // ======================================================
    [Rpc(RpcSources.All, RpcTargets.StateAuthority)]
    public void RPC_EndTurn()
    {
        if (!Object.HasStateAuthority)
            return;

        var lobby = FusionBootstrap.LobbyStateInstance;
        if (lobby == null)
            return;

        int nextSlot = FindNextConnectedSlot(lobby, CurrentPlayerSlot);

        bool isLastRound = (CurrentRoundIndex == MaxRounds - 1);
        bool isLoopingBack = (nextSlot <= CurrentPlayerSlot);

        if (isLastRound && isLoopingBack)
        {
            int lowestTotal = int.MaxValue;
            int[] totals = new int[MaxPlayers];

            for (int i = 0; i < MaxPlayers; i++)
            {
                var s = lobby.Slots.Get(i);
                if (!s.Connected || !IsPlayerAlive(i))
                    continue;

                int sum = 0;
                for (int r = 0; r < MaxRounds; r++)
                    sum += ResultsByPlayerAndRound.Get(i * MaxRounds + r);

                totals[i] = sum;
                if (sum < lowestTotal)
                    lowestTotal = sum;
            }

            for (int i = 0; i < MaxPlayers; i++)
            {
                var s = lobby.Slots.Get(i);
                if (!s.Connected || !IsPlayerAlive(i))
                    continue;

                if (totals[i] == lowestTotal)
                {
                    byte lives = Lives.Get(i);
                    if (lives > 0)
                        Lives.Set(i, (byte)(lives - 1));
                }
            }

            for (int i = 0; i < MaxPlayers * MaxRounds; i++)
                ResultsByPlayerAndRound.Set(i, 0);

            for (int i = 0; i < MaxPlayers; i++)
                TotalByPlayer.Set(i, 0);

            CurrentRoundIndex = 0;
            CurrentPlayerSlot = (byte)FindFirstConnectedSlot(lobby);
        }
        else
        {
            if (isLoopingBack)
                CurrentRoundIndex = (byte)(CurrentRoundIndex + 1);

            CurrentPlayerSlot = (byte)nextSlot;
        }

        Phase = TurnPhase.ChoosingNumber;
        DiceRollSeed   = 0;
        DiceRollActive = false;
        DiceResult     = 0;

        int aliveCount = 0;
        int lastAliveSlot = -1;

        for (int i = 0; i < MaxPlayers; i++)
        {
            if (lobby.Slots.Get(i).Connected && IsPlayerAlive(i))
            {
                aliveCount++;
                lastAliveSlot = i;
            }
        }

        if (aliveCount == 1)
        {
            GameOver = true;
            WinnerSlot = (byte)lastAliveSlot;
            GameStarted = false;

            for (int i = 0; i < MaxPlayers * MaxRounds; i++)
                ResultsByPlayerAndRound.Set(i, 0);

            for (int i = 0; i < MaxPlayers; i++)
                TotalByPlayer.Set(i, 0);
        }

        Debug.Log($"[GAMESTATE] EndTurn Slot={CurrentPlayerSlot} Round={CurrentRoundIndex}");
    }

    // =========================
    // HELPERS
    // =========================
    private bool IsValidNumber(byte n)
    {
        for (int i = 0; i < ValidValues.Length; i++)
            if (ValidValues[i] == n) return true;
        return false;
    }

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

    private int FindNextConnectedSlot(FusionLobbyState lobby, int fromSlot)
    {
        for (int i = 1; i <= MaxPlayers; i++)
        {
            int next = (fromSlot + i) % MaxPlayers;
            if (lobby.Slots.Get(next).Connected && IsPlayerAlive(next))
                return next;
        }
        return fromSlot;
    }

    private int FindFirstConnectedSlot(FusionLobbyState lobby)
    {
        for (int i = 0; i < MaxPlayers; i++)
            if (lobby.Slots.Get(i).Connected && IsPlayerAlive(i))
                return i;

        return 0;
    }

    private bool IsPlayerAlive(int slot)
    {
        return Lives.Get(slot) > 0;
    }

    // =========================
    // START / RESTART / BONUS
    // =========================

    [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    public void RPC_StartGameplay(byte firstPlayerSlot)
    {
        GameOver = false;
        WinnerSlot = 0;

        if (!Object.HasStateAuthority)
            return;

        GameStarted = true;
        CurrentPlayerSlot = firstPlayerSlot;
        CurrentRoundIndex = 0;
        Phase = TurnPhase.ChoosingNumber;

        DiceRollSeed = 0;
        DiceRollActive = false;
        DiceResult = 0;

        for (int i = 0; i < MaxPlayers; i++)
        {
            Lives.Set(i, 3);
            ChosenNumberBySlot.Set(i, 0);
            TotalByPlayer.Set(i, 0);
        }
    }

    public void SetResult(byte chosen, byte dice)
    {
        if (!Object.HasStateAuthority) return;

        ChosenNumber = chosen;
        DiceResult = dice;
        PlayerWon = dice == chosen;
        Phase = TurnPhase.ShowingResult;
    }

    [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    public void RPC_RestartGame()
    {
        if (!Object.HasStateAuthority)
            return;

        GameOver = false;
        GameStarted = false;

        CurrentRoundIndex = 0;
        CurrentPlayerSlot = 0;
        Phase = TurnPhase.ChoosingNumber;

        for (int i = 0; i < MaxPlayers; i++)
        {
            Lives.Set(i, 3);
            TotalByPlayer.Set(i, 0);
            ChosenNumberBySlot.Set(i, 0);
        }

        for (int i = 0; i < MaxPlayers * MaxRounds; i++)
            ResultsByPlayerAndRound.Set(i, 0);

        DiceRollSeed = 0;
        DiceRollActive = false;
        DiceResult = 0;
    }

    [Rpc(RpcSources.All, RpcTargets.StateAuthority)]
    public void RPC_RequestGainLife(byte slot)
    {
        if (!IsPlayerAlive(slot)) return;

        byte lives = Lives.Get(slot);
        if (lives < 3)
            Lives.Set(slot, (byte)(lives + 1));
    }

    [Rpc(RpcSources.All, RpcTargets.StateAuthority)]
    public void RPC_RequestLoseLifeOthers(byte sourceSlot)
    {
        for (int i = 0; i < MaxPlayers; i++)
        {
            if (i == sourceSlot) continue;
            if (!IsPlayerAlive(i)) continue;

            byte lives = Lives.Get(i);
            if (lives > 0)
                Lives.Set(i, (byte)(lives - 1));
        }
    }
}