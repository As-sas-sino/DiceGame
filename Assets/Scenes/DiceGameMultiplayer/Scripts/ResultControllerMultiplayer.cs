using UnityEngine;
using TMPro;
using UnityEngine.UI;
using DG.Tweening;
using System.Collections;
using Fusion;

public class ResultControllerMultiplayer : MonoBehaviour
{
    // =========================
    // CONFIG
    // =========================
    [Header("Config")]
    [SerializeField] private byte maxLives = 3;   // Vite massime

    private OrientationUIManagerMultiplayer ui;
    private FusionGameState game;
    private NetworkRunner runner;

    private CanvasGroup resultCanvasGroup;

    // Riferimenti testi round (risolti runtime)
    private TMP_Text round1Text;
    private TMP_Text round2Text;
    private TMP_Text round3Text;

    private bool actionChosenThisTurn;   // Azione bonus già scelta
    private bool resultShownThisPhase;   // Evita doppia apertura panel

    // ======================================================
    // INIT
    // ======================================================
    private IEnumerator Start()
    {
        // Attende UI pronta
        while (OrientationUIManagerMultiplayer.Instance == null)
            yield return null;

        ui = OrientationUIManagerMultiplayer.Instance;

        // Attende Fusion pronto
        while (FusionBootstrap.GameStateInstance == null ||
               FusionBootstrap.RunnerInstance == null ||
               FusionBootstrap.GameStateInstance.Object == null ||
               !FusionBootstrap.GameStateInstance.Object.IsValid)
        {
            yield return null;
        }

        game   = FusionBootstrap.GameStateInstance;
        runner = FusionBootstrap.RunnerInstance;

        game.OnGameChanged += OnGameChanged;

        HideResultInstant();
    }

    // ======================================================
    // GAME STATE → RESULT FLOW
    // ======================================================
    private void OnGameChanged()
    {
        if (game.Phase != FusionGameState.TurnPhase.ShowingResult)
            return;

        if (game.DiceResult == 0)
            return;

        if (resultShownThisPhase)
            return;

        resultShownThisPhase = true;

        StartCoroutine(DelayedShow());
    }

    private IEnumerator DelayedShow()
    {
        yield return null; // sicurezza frame

        while (ui.ResultPanel == null)
            yield return null;

        ShowResultImmediate();
    }

    // ======================================================
    // SHOW RESULT
    // ======================================================
    private void ShowResultImmediate()
    {
        actionChosenThisTurn = false;

        ui.IsResultPanelOpen = true;
        ui.ApplyOrientation();

        ResolveRoundTexts();
        RefreshCanvasGroup();

        resultCanvasGroup.alpha = 1f;

        // Valore dado
        ui.ResultValueText.text = game.DiceResult.ToString();

        bool win = game.PlayerWon;

        // Esito
        ui.OutcomeText.text = win ? "Hai indovinato!" : "Non hai indovinato!";
        ui.OutcomeText.color = win
            ? new Color32(0, 180, 50, 255)
            : new Color32(220, 0, 100, 255);

        SetupButtons(win);
        PopulateRoundResults();

        ui.ApplyOrientation();
    }

    // ======================================================
    // ROUND RESULTS
    // ======================================================
    private void ResolveRoundTexts()
    {
        if (ui.ResultPanel == null)
            return;

        Transform root = ui.ResultPanel.transform.Find("ResultRound");
        if (root == null)
            return;

        round1Text = root.Find("Round1Text")?.GetComponent<TMP_Text>();
        round2Text = root.Find("Round2Text")?.GetComponent<TMP_Text>();
        round3Text = root.Find("Round3Text")?.GetComponent<TMP_Text>();
    }

    private void PopulateRoundResults()
    {
        int slot = GetLocalSlot();
        if (slot < 0)
            return;

        byte r1 = game.ResultsByPlayerAndRound.Get(slot * FusionGameState.MaxRounds + 0);
        byte r2 = game.ResultsByPlayerAndRound.Get(slot * FusionGameState.MaxRounds + 1);
        byte r3 = game.ResultsByPlayerAndRound.Get(slot * FusionGameState.MaxRounds + 2);

        string s1 = r1 > 0 ? r1.ToString() : "-";
        string s2 = r2 > 0 ? r2.ToString() : "-";
        string s3 = r3 > 0 ? r3.ToString() : "-";

        if (round1Text != null) round1Text.text = s1;
        if (round2Text != null) round2Text.text = s2;
        if (round3Text != null) round3Text.text = s3;

        // Aggiorna cache UI
        if (ui.RoundCached != null && ui.RoundCached.Length >= 3)
        {
            ui.RoundCached[0] = s1;
            ui.RoundCached[1] = s2;
            ui.RoundCached[2] = s3;
        }
    }

    private void SetRoundText(TMP_Text text, int slot, int round)
    {
        if (text == null)
            return;

        byte value = game.ResultsByPlayerAndRound.Get(
            slot * FusionGameState.MaxRounds + round);

        text.text = value > 0 ? value.ToString() : "-";
    }

    // ======================================================
    // BUTTONS LOGIC
    // ======================================================
    private void SetupButtons(bool win)
    {
        bool myTurn = GetLocalSlot() == game.CurrentPlayerSlot;
        int slot = GetLocalSlot();

        bool canGainLife = false;

        if (slot >= 0)
        {
            byte currentLives = game.Lives.Get(slot);
            canGainLife = currentLives < maxLives;
        }

        bool canPassTurn = myTurn && (!win);

        SetButtonWithFade(ui.ButtonGainLife, win && myTurn, canGainLife);
        SetButtonWithFade(ui.ButtonLoseLifeOthers, win && myTurn, win && myTurn);
        SetButtonWithFade(ui.ButtonPassTurn, true, canPassTurn);
    }

    public void OnGainLifePressed()
    {
        if (actionChosenThisTurn) return;

        int slot = GetLocalSlot();
        if (slot < 0) return;

        if (game.Lives.Get(slot) >= maxLives)
            return;

        actionChosenThisTurn = true;

        game.RPC_RequestGainLife((byte)slot);

        LockButtons();
        ui.ApplyOrientation();
    }

    public void OnLoseLifeOthersPressed()
    {
        if (actionChosenThisTurn) return;

        int slot = GetLocalSlot();
        if (slot < 0) return;

        actionChosenThisTurn = true;

        game.RPC_RequestLoseLifeOthers((byte)slot);

        LockButtons();
        ui.ApplyOrientation();
    }

    public void OnPassTurnPressed()
    {
        resultShownThisPhase = false;
        HideResultSmooth();
        game.RPC_EndTurn();
    }

    private void LockButtons()
    {
        SetButtonWithFade(ui.ButtonGainLife, true, false);
        SetButtonWithFade(ui.ButtonLoseLifeOthers, true, false);
        SetButtonWithFade(ui.ButtonPassTurn, true, true);
    }

    // ======================================================
    // HELPERS
    // ======================================================
    private int GetLocalSlot()
    {
        var lobby = FusionBootstrap.LobbyStateInstance;
        if (lobby == null || runner == null)
            return -1;

        for (int i = 0; i < FusionGameState.MaxPlayers; i++)
        {
            var s = lobby.Slots.Get(i);
            if (s.Connected && s.Player == runner.LocalPlayer)
                return i;
        }
        return -1;
    }

    private void RefreshCanvasGroup()
    {
        if (ui.ResultPanel == null) return;

        resultCanvasGroup = ui.ResultPanel.GetComponent<CanvasGroup>() ??
                            ui.ResultPanel.AddComponent<CanvasGroup>();
    }

    private void HideResultInstant()
    {
        if (ui?.ResultPanel == null) return;

        ui.IsResultPanelOpen = false;
        ui.ResultPanel.SetActive(false);
    }

    private void HideResultSmooth()
    {
        if (ui?.ResultPanel == null) return;

        ui.IsResultPanelOpen = false;
        RefreshCanvasGroup();

        DOTween.Kill(resultCanvasGroup);

        resultCanvasGroup.alpha = 1f;
        resultCanvasGroup.DOFade(0f, 0.25f)
            .OnComplete(() => ui.ResultPanel.SetActive(false));
    }

    private void SetButton(Button b, bool visible, bool interactable)
    {
        if (b == null) return;

        b.gameObject.SetActive(visible);
        b.interactable = interactable;
    }

    private void SetButtonWithFade(Button b, bool visible, bool interactable)
    {
        if (b == null) return;

        b.gameObject.SetActive(visible);
        b.interactable = interactable;

        CanvasGroup cg = b.GetComponent<CanvasGroup>();
        if (cg == null)
            cg = b.gameObject.AddComponent<CanvasGroup>();

        cg.alpha = interactable ? 1f : 0.7f; // semi trasparente se disabilitato
    }
}