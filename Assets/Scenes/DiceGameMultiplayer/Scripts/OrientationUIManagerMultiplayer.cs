// OrientationUIManagerMultiplayer.cs
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

public class OrientationUIManagerMultiplayer : MonoBehaviour
{
    public static OrientationUIManagerMultiplayer Instance;

    // EVENTO: il Flow lo ascolta per riscrivere HUD dopo rotate
    public event Action OnOrientationChanged;

    // ===================== CANVASES =====================
    [Header("Vertical Canvases")]
    public GameObject ConfirmCanvas_V;
    public GameObject LobbyCanvas_V;
    public GameObject WelcomeCanvas_V;
    public GameObject StartCanvas_V;
    public GameObject ResultCanvas_V;
    public GameObject WaitingCanvas_V; // rules waiting
    public GameObject lifeAndTurnCanvas_V;
    public GameObject NameCanvas_V;
    public GameObject TurnWaitingCanvas_V;
    public GameObject EndGameCanvas_V;

    [Header("Horizontal Canvases")]
    public GameObject ConfirmCanvas_H;
    public GameObject LobbyCanvas_H;
    public GameObject WelcomeCanvas_H;
    public GameObject StartCanvas_H;
    public GameObject ResultCanvas_H;
    public GameObject WaitingCanvas_H; // rules waiting
    public GameObject lifeAndTurnCanvas_H;
    public GameObject NameCanvas_H;
    public GameObject TurnWaitingCanvas_H;
    public GameObject EndGameCanvas_H;

    // ===================== STATE =====================
    [Header("Runtime State")]
    public bool LockOrientation = false;
    [HideInInspector] public bool IsEndGameOpen = false;
    [HideInInspector] public string EndGameWinnerText = "";
    [HideInInspector] public bool EndGameShowRestartButton = false;

    [HideInInspector] public bool IsLobbyOpen = false;
    [HideInInspector] public bool IsLobbyOpening = false;
    [HideInInspector] public bool IsLobbyClosing = false;

    [HideInInspector] public bool IsWelcomeOpen = false;
    [HideInInspector] public bool IsOpeningPanel = false;
    [HideInInspector] public bool IsClosingPanel = false;

    [HideInInspector] public bool IsNumberPanelOpen = false;
    [HideInInspector] public string CurrentInstructionText = "";
    [HideInInspector] public string CurrentInputText = "";

    [HideInInspector] public bool IsResultPanelOpen = false;

    // ===== Rules Waiting (vecchio, con dots) =====
    [HideInInspector] public bool IsWaitingOpen = false; // derivato
    [HideInInspector] public bool IsWaitingForRules = false;

    [HideInInspector] public bool IsLifeAndTurnOpen = false;
    [HideInInspector] public bool IsNamePanelOpen = false;

    // ===================== NAME PANEL (cached) =====================
    [Header("Name UI (cached)")]
    [HideInInspector] public GameObject NamePanel;
    [HideInInspector] public TMP_Text NameLabelText;
    [HideInInspector] public TMP_InputField NameInput;
    [HideInInspector] public Button NameContinueButton;

    [Header("Name UI (state cache)")]
    [HideInInspector] public string NameInputCached = "";
    [SerializeField] private string nameLabelBaseText = "Nome (max 15 caratteri):";
    private const int NameMaxLen = 15;

    // ===================== START (cached) =====================
    [Header("Start UI (cached)")]
    [HideInInspector] public GameObject NumberPanel;
    [HideInInspector] public TMP_Text InstructionText;
    [HideInInspector] public TMP_InputField NumberInput;
    [HideInInspector] public Button ReadyButton;

    // ===================== RESULT (cached refs) =====================
    [Header("Result UI (cached)")]
    [HideInInspector] public GameObject ResultPanel;
    [HideInInspector] public TextMeshProUGUI ResultTitleText;
    [HideInInspector] public TextMeshProUGUI ResultValueText;
    [HideInInspector] public TextMeshProUGUI OutcomeText;

    [HideInInspector] public TMP_Text Round1Text;
    [HideInInspector] public TMP_Text Round2Text;
    [HideInInspector] public TMP_Text Round3Text;

    [HideInInspector] public Button ButtonGainLife;
    [HideInInspector] public Button ButtonLoseLifeOthers;
    [HideInInspector] public Button ButtonPassTurn;

    // ===================== RESULT (state cache) =====================
    [Header("Result UI (state cache)")]
    [HideInInspector] public string ResultValueCached = "";
    [HideInInspector] public string OutcomeCached = "";
    [HideInInspector] public Color OutcomeColorCached = Color.white;
    [HideInInspector] public string[] RoundCached = new string[3] { "", "", "" };

    [HideInInspector] public bool ShowGainLifeBtn = false;
    [HideInInspector] public bool ShowLoseLifeOthersBtn = false;
    [HideInInspector] public bool ShowPassTurnBtn = true;

    [HideInInspector] public bool GainLifeInteractable = false;
    [HideInInspector] public bool LoseLifeOthersInteractable = false;
    [HideInInspector] public bool PassTurnInteractable = true;

    // ===================== WAITING (RULES cached) =====================
    [Header("Waiting UI (cached)")]
    [HideInInspector] public GameObject WaitingPanel;
    [HideInInspector] public TMP_Text WaitingText;

    [SerializeField] private string waitingBaseText = "In attesa degli altri giocatori";
    public void SetWaitingBaseText(string text)
    {
        waitingBaseText = string.IsNullOrEmpty(text) ? "In attesa..." : text;
    }

    private Tweener waitingDotsTween;
    private int waitingDots = 0;

    // ===================== LIFE & TURN HUD (cached) =====================
    [Header("Life & Turn HUD (cached)")]
    [HideInInspector] public GameObject LifeAndTurnPanel;
    [HideInInspector] public TMP_Text RoundHeaderText;

    [HideInInspector] public TMP_Text[] NamePlayerTexts = new TMP_Text[4];
    [HideInInspector] public GameObject[] LifePlayerRoots = new GameObject[4];
    [HideInInspector] public GameObject[,] LifeHearts = new GameObject[4, 3];

    [HideInInspector] public GameObject[] TotalPlayerRoots = new GameObject[4];
    [HideInInspector] public TMP_Text[] TotLabelTexts = new TMP_Text[4];
    [HideInInspector] public TMP_Text[] PointValueTexts = new TMP_Text[4];

    // ===================== END GAME (cached) =====================
    [HideInInspector] public GameObject EndGamePanel;
    [HideInInspector] public TMP_Text EndGameWinnerLabel;
    [HideInInspector] public Button EndGameRestartButton;

    // ===================== CONFIRM / LOBBY / WELCOME ANIMS =====================
    private ScreenOrientation lastOrientation;

    private Tweener lobbyTween;
    private float lobbyProgress = 0f;
    private bool lobbyAnimationCompleted = false;

    private Tweener welcomeTween;
    private float welcomeProgress = 0f;
    private bool welcomeAnimationCompleted = false;

    private Tweener confirmTween;
    private float confirmProgress = 0f;
    private bool confirmAnimationCompleted = false;

    [HideInInspector] public bool TableHasAppeared = false;

    // ===================== LOBBY DATA =====================
    [HideInInspector] public string[] LobbyPlayerNames = new string[4] { "???", "???", "???", "???" };
    [HideInInspector] public bool[] LobbyPlayerReady = new bool[4] { false, false, false, false };
    [HideInInspector] public bool[] LobbyPlayerPresent = new bool[4] { false, false, false, false };

    [HideInInspector] public GameObject LobbyPanel;
    [HideInInspector] public TMP_Text LobbyTitleText;
    [HideInInspector] public TMP_Text[] LobbyNameTexts = new TMP_Text[4];
    [HideInInspector] public TMP_Text[] LobbyReadyTexts = new TMP_Text[4];

    [HideInInspector] public Button LobbyInviteButton;
    [HideInInspector] public Button LobbyReadyButton;
    [HideInInspector] public Button LobbyStartButton;

    private const string LobbyTitleBase = "In attesa di giocatori";

    private bool hasAppliedOnce = false;
    private bool lastIsVerticalApplied = true;

    // ===== Turn Waiting (NUOVO, SEPARATO DAL RULES) =====
    [HideInInspector] public bool IsTurnWaitingOpen = false;
    [HideInInspector] public string TurnWaitingText = "";
    
    private TMP_Text TurnWaitingTextUI;
    private Tweener turnWaitingDotsTween;
    private int turnWaitingDots = 0;

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        if (ConfirmCanvas_V) ConfirmCanvas_V.SetActive(false);
        if (ConfirmCanvas_H) ConfirmCanvas_H.SetActive(false);

        if (LobbyCanvas_V) LobbyCanvas_V.SetActive(false);
        if (LobbyCanvas_H) LobbyCanvas_H.SetActive(false);

        if (WelcomeCanvas_V) WelcomeCanvas_V.SetActive(false);
        if (WelcomeCanvas_H) WelcomeCanvas_H.SetActive(false);

        if (StartCanvas_V) StartCanvas_V.SetActive(false);
        if (StartCanvas_H) StartCanvas_H.SetActive(false);

        if (ResultCanvas_V) ResultCanvas_V.SetActive(false);
        if (ResultCanvas_H) ResultCanvas_H.SetActive(false);

        if (WaitingCanvas_V) WaitingCanvas_V.SetActive(false);
        if (WaitingCanvas_H) WaitingCanvas_H.SetActive(false);

        if (lifeAndTurnCanvas_V) lifeAndTurnCanvas_V.SetActive(false);
        if (lifeAndTurnCanvas_H) lifeAndTurnCanvas_H.SetActive(false);

        if (NameCanvas_V) NameCanvas_V.SetActive(false);
        if (NameCanvas_H) NameCanvas_H.SetActive(false);

        ApplyOrientation();
    }

    private void Update()
    {
        if (LockOrientation) return;

        bool isVerticalNow = Screen.height > Screen.width;

        if (!hasAppliedOnce || isVerticalNow != lastIsVerticalApplied)
        {
            ApplyOrientation();

            LobbyUIController lobby = FindObjectOfType<LobbyUIController>();
            if (lobby != null && IsLobbyOpen)
                lobby.RebindAfterOrientation();
        }
    }

    // ===================== ORIENTATION CORE =====================
    public void ApplyOrientation()
    {
        bool isVertical = Screen.height > Screen.width;

        bool orientationChanged = (!hasAppliedOnce) || (isVertical != lastIsVerticalApplied);
        hasAppliedOnce = true;
        lastIsVerticalApplied = isVertical;

        lastOrientation = Screen.orientation;

        // salva input numero
        if (NumberInput != null)
        {
            string live = NumberInput.text;
            if (!string.IsNullOrEmpty(live))
                CurrentInputText = live;
        }

        // salva input nome (se aperto)
        SaveNameStateFromLive();

        // ===== CONFIRM =====
        if (ConfirmCanvas_V) ConfirmCanvas_V.SetActive(isVertical);
        if (ConfirmCanvas_H) ConfirmCanvas_H.SetActive(!isVertical);
        ApplyConfirmVisualState();

        // ===== NAME PANEL =====
        if (IsNamePanelOpen)
        {
            if (NameCanvas_V) NameCanvas_V.SetActive(isVertical);
            if (NameCanvas_H) NameCanvas_H.SetActive(!isVertical);

            GameObject activeName = isVertical ? NameCanvas_V : NameCanvas_H;
            CacheNameReferences(activeName);
            ApplyNameVisualState();
            ApplyNameStateToUI();
        }
        else
        {
            if (NameCanvas_V) NameCanvas_V.SetActive(false);
            if (NameCanvas_H) NameCanvas_H.SetActive(false);
        }

        // ===== LOBBY =====
        bool keepLobbyActive = IsLobbyOpen || IsLobbyOpening || IsLobbyClosing;
        if (keepLobbyActive)
        {
            SaveLobbyStateFromLive();

            if (LobbyCanvas_V) LobbyCanvas_V.SetActive(isVertical);
            if (LobbyCanvas_H) LobbyCanvas_H.SetActive(!isVertical);

            GameObject activeLobby = isVertical ? LobbyCanvas_V : LobbyCanvas_H;
            CacheLobbyReferences(activeLobby);
            ApplyLobbyStateToUI();
            ApplyLobbyVisualState();
        }
        else
        {
            if (LobbyCanvas_V) LobbyCanvas_V.SetActive(false);
            if (LobbyCanvas_H) LobbyCanvas_H.SetActive(false);
        }

        // ===== WAITING (RULES) =====
        if (IsWaitingOpen)
        {
            if (WaitingCanvas_V) WaitingCanvas_V.SetActive(isVertical);
            if (WaitingCanvas_H) WaitingCanvas_H.SetActive(!isVertical);

            GameObject activeWaiting = isVertical ? WaitingCanvas_V : WaitingCanvas_H;
            CacheWaitingReferences(activeWaiting);

            if (WaitingPanel == null && activeWaiting != null && activeWaiting.transform.childCount > 0)
            {
                WaitingPanel = activeWaiting.transform.GetChild(0).gameObject;
                WaitingText = WaitingPanel.GetComponentInChildren<TMP_Text>(true);
            }

            ApplyWaitingVisualState();
            EnsureWaitingDotsAnimation();
            RefreshWaitingTextNow();
        }
        else
        {
            if (WaitingCanvas_V) WaitingCanvas_V.SetActive(false);
            if (WaitingCanvas_H) WaitingCanvas_H.SetActive(false);
            StopWaitingDotsAnimation();
        }
        
        // ===== WAITING (TURN) =====
        if (IsTurnWaitingOpen)
        {
            if (TurnWaitingCanvas_V) TurnWaitingCanvas_V.SetActive(isVertical);
            if (TurnWaitingCanvas_H) TurnWaitingCanvas_H.SetActive(!isVertical);

            GameObject active = isVertical ? TurnWaitingCanvas_V : TurnWaitingCanvas_H;

            if (active != null)
            {
                TurnWaitingTextUI = active.GetComponentInChildren<TMP_Text>(true);
                StopTurnWaitingDotsAnimation();   // 🔒 reset sicuro
                EnsureTurnWaitingDotsAnimation(); // 🔁 riavvio
                RefreshTurnWaitingTextNow();
            }
        }
        else
        {
            if (TurnWaitingCanvas_V) TurnWaitingCanvas_V.SetActive(false);
            if (TurnWaitingCanvas_H) TurnWaitingCanvas_H.SetActive(false);

            StopTurnWaitingDotsAnimation();
        }

        // ===== WELCOME =====
        bool keepWelcomeActive = !IsWaitingOpen && (IsWelcomeOpen || IsOpeningPanel || IsClosingPanel);
        if (keepWelcomeActive)
        {
            if (WelcomeCanvas_V) WelcomeCanvas_V.SetActive(isVertical);
            if (WelcomeCanvas_H) WelcomeCanvas_H.SetActive(!isVertical);

            GameObject activeWelcome = isVertical ? WelcomeCanvas_V : WelcomeCanvas_H;
            CacheWelcomeReferences(activeWelcome);
            ApplyWelcomeVisualState();
        }
        else
        {
            if (WelcomeCanvas_V) WelcomeCanvas_V.SetActive(false);
            if (WelcomeCanvas_H) WelcomeCanvas_H.SetActive(false);
        }

        // ===== START =====
        bool showStart = IsNumberPanelOpen;

        if (StartCanvas_V) StartCanvas_V.SetActive(isVertical && showStart);
        if (StartCanvas_H) StartCanvas_H.SetActive(!isVertical && showStart);

        if (showStart)
        {
            GameObject activeStart = isVertical ? StartCanvas_V : StartCanvas_H;
            CacheStartReferences(activeStart);
            ApplyStartVisualState();
        }
        else
        {
            NumberPanel = null;
            InstructionText = null;
            NumberInput = null;
            ReadyButton = null;
        }

        // ===== RESULT =====
        SaveResultStateFromLive();

        bool showResult = IsResultPanelOpen;

        if (ResultCanvas_V) ResultCanvas_V.SetActive(isVertical && showResult);
        if (ResultCanvas_H) ResultCanvas_H.SetActive(!isVertical && showResult);

        if (showResult)
        {
            GameObject activeResult = isVertical ? ResultCanvas_V : ResultCanvas_H;
            CacheResultReferences(activeResult);
            ApplyResultVisualState();
            ApplyResultStateToUI();
        }
        else
        {
            ResultPanel = null;
            ResultTitleText = null;
            ResultValueText = null;
            OutcomeText = null;

            Round1Text = null;
            Round2Text = null;
            Round3Text = null;

            ButtonGainLife = null;
            ButtonLoseLifeOthers = null;
            ButtonPassTurn = null;
        }
        
        // ===== END GAME =====
        if (EndGameCanvas_V) EndGameCanvas_V.SetActive(isVertical && IsEndGameOpen);
        if (EndGameCanvas_H) EndGameCanvas_H.SetActive(!isVertical && IsEndGameOpen);

        GameObject activeEnd = isVertical ? EndGameCanvas_V : EndGameCanvas_H;

        if (IsEndGameOpen && activeEnd != null)
        {
            CacheEndGameReferences(activeEnd);
            ApplyEndGameVisualState();
        }
        else
        {
            EndGamePanel = null;
            EndGameWinnerLabel = null;
            EndGameRestartButton = null;
        }

        // ===== LIFE & TURN HUD =====
        if (lifeAndTurnCanvas_V) lifeAndTurnCanvas_V.SetActive(isVertical && IsLifeAndTurnOpen);
        if (lifeAndTurnCanvas_H) lifeAndTurnCanvas_H.SetActive(!isVertical && IsLifeAndTurnOpen);

        GameObject activeHud = isVertical ? lifeAndTurnCanvas_V : lifeAndTurnCanvas_H;
        CacheLifeAndTurnReferences(activeHud);
        ApplyLifeAndTurnVisualState();
        if (IsLifeAndTurnOpen)
        {
            var hud = FindObjectOfType<LifeAndTurnHUDMultiplayer>();
            if (hud != null)
                hud.RefreshAll();
        }

        if (orientationChanged)
            OnOrientationChanged?.Invoke();
    }

    // ===================== PUBLIC API =====================
    public void ShowNamePanel()
    {
        IsNamePanelOpen = true;
        ApplyOrientation();
    }

    public void HideNamePanel()
    {
        IsNamePanelOpen = false;
        ApplyOrientation();
    }

    public void ResetLobbyPanelState()
    {
        lobbyTween?.Kill();
        lobbyTween = null;

        lobbyProgress = 0f;
        lobbyAnimationCompleted = false;

        IsLobbyOpen = false;
        IsLobbyOpening = false;
        IsLobbyClosing = false;

        ApplyOrientation();
    }

    // ===================== NAME PANEL =====================
    private void CacheNameReferences(GameObject activeNameCanvas)
    {
        NamePanel = null;
        NameLabelText = null;
        NameInput = null;
        NameContinueButton = null;

        if (!activeNameCanvas) return;

        Transform panelT =
            FindChildContains(activeNameCanvas.transform, "namepanel") ??
            FindChildContains(activeNameCanvas.transform, "panel");

        if (panelT == null && activeNameCanvas.transform.childCount > 0)
            panelT = activeNameCanvas.transform.GetChild(0);

        if (panelT == null) return;

        NamePanel = panelT.gameObject;

        NameLabelText =
            SafeFindComponentInChildren<TMP_Text>(NamePanel.transform, "text") ??
            SafeFindComponentInChildren<TMP_Text>(NamePanel.transform, "label");

        NameInput =
            SafeFindComponentInChildren<TMP_InputField>(NamePanel.transform, "inputfield") ??
            SafeFindComponentInChildren<TMP_InputField>(NamePanel.transform, "input");

        NameContinueButton =
            SafeFindComponentInChildren<Button>(NamePanel.transform, "continue") ??
            SafeFindComponentInChildren<Button>(NamePanel.transform, "continua") ??
            SafeFindComponentInChildren<Button>(NamePanel.transform, "button");

        if (NameInput != null)
            NameInput.characterLimit = NameMaxLen;
    }

    private void ApplyNameVisualState()
    {
        if (NamePanel == null) return;
        NamePanel.SetActive(IsNamePanelOpen);
    }

    private void ApplyNameStateToUI()
    {
        if (!IsNamePanelOpen) return;
        if (NamePanel == null) return;

        if (NameLabelText != null)
            NameLabelText.text = nameLabelBaseText;

        if (NameInput != null)
        {
            string target = NameInputCached ?? "";
            if (NameInput.text != target)
                NameInput.SetTextWithoutNotify(target);
        }
    }

    private void SaveNameStateFromLive()
    {
        if (!IsNamePanelOpen) return;

        if (NameInput != null)
            NameInputCached = NameInput.text ?? "";
    }

    // ===================== START (NumberPanel) =====================
    private void CacheStartReferences(GameObject activeStartCanvas)
    {
        NumberPanel = null;
        InstructionText = null;
        NumberInput = null;
        ReadyButton = null;

        if (!activeStartCanvas) return;

        Transform numberT = FindChildContains(activeStartCanvas.transform, "numberpanel");
        if (numberT == null) return;

        NumberPanel = numberT.gameObject;

        InstructionText = SafeFindComponentInChildren<TMP_Text>(NumberPanel.transform, "text");
        NumberInput = SafeFindComponentInChildren<TMP_InputField>(NumberPanel.transform, "inputfield");
        ReadyButton = SafeFindComponentInChildren<Button>(NumberPanel.transform, "readybutton")
                   ?? SafeFindComponentInChildren<Button>(NumberPanel.transform, "button");

        if (NumberInput != null)
        {
            NumberInput.onValueChanged.RemoveAllListeners();
            NumberInput.onValueChanged.AddListener(val => CurrentInputText = val);
        }
    }

    private void ApplyStartVisualState()
    {
        if (NumberPanel == null) return;

        if (InstructionText != null)
            InstructionText.text = CurrentInstructionText;

        if (NumberInput != null && NumberInput.text != CurrentInputText)
            NumberInput.SetTextWithoutNotify(CurrentInputText);

        NumberPanel.SetActive(IsNumberPanelOpen);
    }

    // ===================== RESULT =====================
    private void CacheResultReferences(GameObject activeResultCanvas)
    {
        ResultPanel = null;
        ResultTitleText = null;
        ResultValueText = null;
        OutcomeText = null;

        Round1Text = null;
        Round2Text = null;
        Round3Text = null;

        ButtonGainLife = null;
        ButtonLoseLifeOthers = null;
        ButtonPassTurn = null;

        if (!activeResultCanvas) return;

        Transform panelT =
            FindChildContains(activeResultCanvas.transform, "resultpanel") ??
            FindChildContains(activeResultCanvas.transform, "panel");

        if (panelT == null && activeResultCanvas.transform.childCount > 0)
            panelT = activeResultCanvas.transform.GetChild(0);

        if (panelT == null) return;

        ResultPanel = panelT.gameObject;

        ResultTitleText = SafeFindComponentInChildren<TextMeshProUGUI>(ResultPanel.transform, "textresulttitle");
        ResultValueText = SafeFindComponentInChildren<TextMeshProUGUI>(ResultPanel.transform, "textresultvalue");
        OutcomeText = SafeFindComponentInChildren<TextMeshProUGUI>(ResultPanel.transform, "textoutcome");

        Transform resultRoundT = FindChildContains(ResultPanel.transform, "resultround");

        if (resultRoundT != null)
        {
            Round1Text = SafeFindComponentInChildren<TMP_Text>(resultRoundT, "round1");
            Round2Text = SafeFindComponentInChildren<TMP_Text>(resultRoundT, "round2");
            Round3Text = SafeFindComponentInChildren<TMP_Text>(resultRoundT, "round3");
        }
        else
        {
            Round1Text = SafeFindComponentInChildren<TMP_Text>(ResultPanel.transform, "round1");
            Round2Text = SafeFindComponentInChildren<TMP_Text>(ResultPanel.transform, "round2");
            Round3Text = SafeFindComponentInChildren<TMP_Text>(ResultPanel.transform, "round3");
        }

        ButtonGainLife = SafeFindComponentInChildren<Button>(ResultPanel.transform, "buttongainlife");
        ButtonLoseLifeOthers = SafeFindComponentInChildren<Button>(ResultPanel.transform, "buttonloselifeothers");
        ButtonPassTurn = SafeFindComponentInChildren<Button>(ResultPanel.transform, "buttonpassturn");
    }

    private void ApplyResultVisualState()
    {
        if (!ResultPanel) return;
        ResultPanel.SetActive(IsResultPanelOpen);
    }

    private void ApplyResultStateToUI()
    {
        if (!IsResultPanelOpen) return;
        if (ResultPanel == null) return;

        if (ResultValueText != null)
            ResultValueText.text = ResultValueCached ?? "";

        if (OutcomeText != null)
        {
            OutcomeText.text = OutcomeCached ?? "";
            OutcomeText.color = OutcomeColorCached;
        }

        if (RoundCached == null || RoundCached.Length < 3)
            RoundCached = new string[3] { "", "", "" };

        if (Round1Text != null) Round1Text.text = RoundCached[0] ?? "";
        if (Round2Text != null) Round2Text.text = RoundCached[1] ?? "";
        if (Round3Text != null) Round3Text.text = RoundCached[2] ?? "";

        if (ButtonGainLife != null)
        {
            ButtonGainLife.gameObject.SetActive(ShowGainLifeBtn);
            ButtonGainLife.interactable = GainLifeInteractable;
        }

        if (ButtonLoseLifeOthers != null)
        {
            ButtonLoseLifeOthers.gameObject.SetActive(ShowLoseLifeOthersBtn);
            ButtonLoseLifeOthers.interactable = LoseLifeOthersInteractable;
        }

        if (ButtonPassTurn != null)
        {
            ButtonPassTurn.gameObject.SetActive(ShowPassTurnBtn);
            ButtonPassTurn.interactable = PassTurnInteractable;
        }
    }

    // ===================== LIFE & TURN HUD =====================
    private void CacheLifeAndTurnReferences(GameObject activeHudCanvas)
    {
        LifeAndTurnPanel = null;
        RoundHeaderText = null;

        for (int i = 0; i < 4; i++)
        {
            NamePlayerTexts[i] = null;
            LifePlayerRoots[i] = null;
            TotalPlayerRoots[i] = null;
            TotLabelTexts[i] = null;
            PointValueTexts[i] = null;

            for (int h = 0; h < 3; h++)
                LifeHearts[i, h] = null;
        }

        if (!activeHudCanvas) return;
        if (!IsLifeAndTurnOpen) return;

        Transform panelT = activeHudCanvas.transform.Find("Panel");
        if (panelT == null) panelT = FindChildContains(activeHudCanvas.transform, "panel");
        if (panelT == null) return;

        LifeAndTurnPanel = panelT.gameObject;

        RoundHeaderText = panelT.Find("Round")?.GetComponent<TMP_Text>();

        Transform playerGroup = panelT.Find("Player");
        if (playerGroup != null)
        {
            NamePlayerTexts[0] = playerGroup.Find("NamePlayer1")?.GetComponent<TMP_Text>();
            NamePlayerTexts[1] = playerGroup.Find("NamePlayer2")?.GetComponent<TMP_Text>();
            NamePlayerTexts[2] = playerGroup.Find("NamePlayer3")?.GetComponent<TMP_Text>();
            NamePlayerTexts[3] = playerGroup.Find("NamePlayer4")?.GetComponent<TMP_Text>();
        }

        Transform lifeGroup = panelT.Find("Life");
        if (lifeGroup != null)
        {
            for (int p = 0; p < 4; p++)
            {
                Transform pT = lifeGroup.Find($"Player{p + 1}");
                if (pT == null) continue;

                LifePlayerRoots[p] = pT.gameObject;
                LifeHearts[p, 0] = pT.Find("Vita1")?.gameObject;
                LifeHearts[p, 1] = pT.Find("Vita2")?.gameObject;
                LifeHearts[p, 2] = pT.Find("Vita3")?.gameObject;
            }
        }

       Transform totalGroup = FindChildContains(panelT, "totalpoint");

        if (totalGroup == null)
        {
            Debug.Log("[Tot][CACHE] ❌ TotalPoint NOT FOUND");
        }
        else
        {
            for (int p = 0; p < 4; p++)
            {
                Transform playerT = FindChildContains(totalGroup, $"player{p + 1}");

                if (playerT == null)
                {
                    Debug.Log($"[Tot][CACHE] ❌ Player{p+1} NOT FOUND");
                    continue;
                }

                TotalPlayerRoots[p] = playerT.gameObject;

                TotLabelTexts[p] =
                    FindChildContains(playerT, $"totplayer{p+1}")?.GetComponent<TMP_Text>();

                PointValueTexts[p] =
                    FindChildContains(playerT, $"pointplayer{p+1}")?.GetComponent<TMP_Text>();

                Debug.Log($"[Tot][CACHE] Slot {p} PointValueTexts = {(PointValueTexts[p] != null ? "OK" : "NULL")}");
            }
        }
    }

    private void ApplyLifeAndTurnVisualState()
    {
        if (LifeAndTurnPanel == null) return;
        LifeAndTurnPanel.SetActive(IsLifeAndTurnOpen);
    }

    // ✅ HARD CLOSE: evita che al resume/rotate il Welcome torni fuori per flag/tween rimasti sporchi
    public void ForceCloseWelcomeImmediate()
    {
        if (welcomeTween != null)
        {
            welcomeTween.Kill();
            welcomeTween = null;
        }

        welcomeProgress = 0f;
        welcomeAnimationCompleted = false;

        IsOpeningPanel = false;
        IsClosingPanel = false;
        IsWelcomeOpen = false;

        if (WelcomeCanvas_V) WelcomeCanvas_V.SetActive(false);
        if (WelcomeCanvas_H) WelcomeCanvas_H.SetActive(false);
    }

    // ===================== WAITING (RULES) =====================
    private void RecomputeWaitingOpenAndApply()
    {
        IsWaitingOpen = IsWaitingForRules; // (turn qui compat)
        ApplyOrientation();
    }

    public void ShowWaitingForRules(string baseText)
    {
        ForceCloseWelcomeImmediate();

        IsWaitingForRules = true;
        SetWaitingBaseText(baseText);
        RecomputeWaitingOpenAndApply();
    }

    public void HideWaitingForRules()
    {
        IsWaitingForRules = false;
        RecomputeWaitingOpenAndApply();
    }

    private IEnumerator RefreshWaitingTextNextFrame()
    {
        yield return null; // aspetta che il canvas esista
        RefreshWaitingTextNow();
    }

    public void ShowWaitingPanel()
    {
        ShowWaitingForRules(waitingBaseText);
    }

    public void HideWaitingPanel()
    {
        IsWaitingForRules = false;
        RecomputeWaitingOpenAndApply();
    }

    private void CacheWaitingReferences(GameObject activeWaitingCanvas)
    {
        WaitingPanel = null;
        WaitingText = null;

        if (!activeWaitingCanvas) return;

        Transform panelT = FindChildContains(activeWaitingCanvas.transform, "waitingpanel");
        if (panelT == null && activeWaitingCanvas.transform.childCount > 0)
            panelT = activeWaitingCanvas.transform.GetChild(0);

        if (panelT == null) return;

        WaitingPanel = panelT.gameObject;

        WaitingText = SafeFindComponentInChildren<TMP_Text>(WaitingPanel.transform, "waitingtext")
                   ?? SafeFindComponentInChildren<TMP_Text>(WaitingPanel.transform, "text")
                   ?? SafeFindComponentInChildren<TMP_Text>(WaitingPanel.transform, "waiting");
    }

    private void ApplyWaitingVisualState()
    {
        if (!WaitingPanel) return;

        CanvasGroup cg = WaitingPanel.GetComponent<CanvasGroup>() ?? WaitingPanel.AddComponent<CanvasGroup>();
        cg.alpha = 1f;
        cg.interactable = false;
        cg.blocksRaycasts = false;

        WaitingPanel.SetActive(IsWaitingOpen);
    }

    private void EnsureWaitingDotsAnimation()
    {
        if (waitingDotsTween != null && waitingDotsTween.IsActive())
            return; // 🔒 NON crearne un altro

        waitingDotsTween = DOTween.To(() => waitingDots, x =>
        {
            waitingDots = x;
            RefreshWaitingTextNow();
        }, 3, 1.2f)
        .SetEase(Ease.Linear)
        .SetLoops(-1, LoopType.Restart);
    }

    private void RefreshWaitingTextNow()
    {
        if (!IsWaitingOpen || WaitingText == null) return;

        int dotsClamped = Mathf.Clamp(waitingDots, 0, 3);
        WaitingText.text = waitingBaseText + new string('.', dotsClamped);
    }

    private void StopWaitingDotsAnimation()
    {
        if (waitingDotsTween != null)
        {
            waitingDotsTween.Kill();
            waitingDotsTween = null;
        }

        waitingDots = 0;

        if (WaitingText != null)
            WaitingText.text = waitingBaseText;
    }

    // ===================== CONFIRM =====================
    public void ShowConfirmPlacementUI()
    {
        if (confirmTween != null || confirmAnimationCompleted) return;

        TableHasAppeared = true;

        confirmTween = DOTween.To(() => confirmProgress, x => confirmProgress = x, 1f, 2f)
            .SetEase(Ease.InOutSine)
            .OnUpdate(ApplyConfirmVisualState)
            .OnComplete(() =>
            {
                confirmProgress = 1f;
                confirmAnimationCompleted = true;
                ApplyConfirmVisualState();
                confirmTween = null;
            });
    }

    private void ApplyConfirmVisualState()
    {
        ApplyConfirmCanvas(ConfirmCanvas_V);
        ApplyConfirmCanvas(ConfirmCanvas_H);
    }

    private void ApplyConfirmCanvas(GameObject canvas)
    {
        if (!canvas) return;

        var cg = canvas.GetComponent<CanvasGroup>() ?? canvas.AddComponent<CanvasGroup>();
        cg.alpha = confirmProgress;
        cg.interactable = confirmAnimationCompleted;
        cg.blocksRaycasts = confirmAnimationCompleted;

        GameObject btnObj = SafeGetChild(canvas, 0);
        if (btnObj != null && btnObj.name.ToLower().Contains("confirm"))
            btnObj.SetActive(TableHasAppeared);
    }

    public void HideConfirmPlacementUI()
    {
        if (ConfirmCanvas_V) ConfirmCanvas_V.SetActive(false);
        if (ConfirmCanvas_H) ConfirmCanvas_H.SetActive(false);
    }

    // ===================== LOBBY =====================
    private void CacheLobbyReferences(GameObject activeLobbyCanvas)
    {
        if (!activeLobbyCanvas) return;

        LobbyPanel = SafeGetChild(activeLobbyCanvas, 0);
        if (!LobbyPanel) LobbyPanel = FindChildContains(activeLobbyCanvas.transform, "lobbypanel")?.gameObject;
        if (!LobbyPanel) return;

        LobbyTitleText = SafeFindComponentInChildren<TMP_Text>(LobbyPanel.transform, "text");

        LobbyNameTexts[0] = SafeFindComponentInChildren<TMP_Text>(LobbyPanel.transform, "playername1");
        LobbyNameTexts[1] = SafeFindComponentInChildren<TMP_Text>(LobbyPanel.transform, "playername2");
        LobbyNameTexts[2] = SafeFindComponentInChildren<TMP_Text>(LobbyPanel.transform, "playername3");
        LobbyNameTexts[3] = SafeFindComponentInChildren<TMP_Text>(LobbyPanel.transform, "playername4");

        LobbyReadyTexts[0] = SafeFindComponentInChildren<TMP_Text>(LobbyPanel.transform, "playerready1");
        LobbyReadyTexts[1] = SafeFindComponentInChildren<TMP_Text>(LobbyPanel.transform, "playerready2");
        LobbyReadyTexts[2] = SafeFindComponentInChildren<TMP_Text>(LobbyPanel.transform, "playerready3");
        LobbyReadyTexts[3] = SafeFindComponentInChildren<TMP_Text>(LobbyPanel.transform, "playerready4");

        LobbyInviteButton = SafeFindComponentInChildren<Button>(LobbyPanel.transform, "invitebutton");
        LobbyReadyButton = SafeFindComponentInChildren<Button>(LobbyPanel.transform, "readybutton");
        LobbyStartButton = SafeFindComponentInChildren<Button>(LobbyPanel.transform, "startbutton");
    }

    private void ApplyLobbyStateToUI()
    {
        if (LobbyTitleText != null && string.IsNullOrEmpty(LobbyTitleText.text))
            LobbyTitleText.text = LobbyTitleBase;

        for (int i = 0; i < 4; i++)
        {
            bool slotVuoto = (LobbyPlayerPresent == null || i >= LobbyPlayerPresent.Length) ? true : !LobbyPlayerPresent[i];

            if (LobbyNameTexts[i] != null)
                LobbyNameTexts[i].text = slotVuoto ? "???" : LobbyPlayerNames[i];

            if (LobbyReadyTexts[i] != null)
            {
                if (slotVuoto)
                {
                    LobbyReadyTexts[i].text = "";
                }
                else
                {
                    bool ready = LobbyPlayerReady[i];
                    LobbyReadyTexts[i].text = ready ? "SI" : "NO";
                    LobbyReadyTexts[i].color = ready
                        ? new Color32(0, 180, 50, 255)
                        : new Color32(220, 0, 100, 255);
                }
            }
        }
    }

    private void ApplyLobbyVisualState()
    {
        if (!LobbyPanel) return;

        CanvasGroup cg = LobbyPanel.GetComponent<CanvasGroup>() ?? LobbyPanel.AddComponent<CanvasGroup>();
        cg.alpha = lobbyProgress;
        cg.interactable = lobbyProgress >= 0.99f;
        cg.blocksRaycasts = lobbyProgress >= 0.01f;

        LobbyPanel.SetActive(lobbyProgress > 0f);
    }

    public void ShowLobbyPanelSmooth()
    {
        if (lobbyTween != null || lobbyAnimationCompleted) return;

        IsLobbyOpen = true;
        IsLobbyOpening = true;
        IsLobbyClosing = false;

        ApplyOrientation();

        lobbyTween = DOTween.To(() => lobbyProgress, x => lobbyProgress = x, 1f, 2f)
            .SetEase(Ease.InOutSine)
            .OnUpdate(ApplyLobbyVisualState)
            .OnComplete(() =>
            {
                lobbyProgress = 1f;
                lobbyAnimationCompleted = true;
                IsLobbyOpening = false;
                ApplyLobbyVisualState();
                lobbyTween = null;
            });
    }

    public void CloseLobbyPanelSmooth(Action onComplete = null)
    {
        if (lobbyTween != null || !lobbyAnimationCompleted) return;

        IsLobbyClosing = true;
        IsLobbyOpening = false;
        IsLobbyOpen = true;

        lobbyTween = DOTween.To(() => lobbyProgress, x => lobbyProgress = x, 0f, 2f)
            .SetEase(Ease.InOutSine)
            .OnUpdate(ApplyLobbyVisualState)
            .OnComplete(() =>
            {
                lobbyProgress = 0f;
                lobbyAnimationCompleted = false;
                IsLobbyClosing = false;
                IsLobbyOpen = false;

                ApplyLobbyVisualState();
                ApplyOrientation();

                lobbyTween = null;
                onComplete?.Invoke();
            });
    }

    // ===================== WELCOME =====================
    private void CacheWelcomeReferences(GameObject activeWelcomeCanvas) { }

    private void ApplyWelcomeVisualState()
    {
        ApplyWelcomeCanvas(WelcomeCanvas_V);
        ApplyWelcomeCanvas(WelcomeCanvas_H);
    }

    private void ApplyWelcomeCanvas(GameObject canvas)
    {
        if (!canvas) return;

        Transform panelT = FindChildContains(canvas.transform, "welcomepanel");
        if (panelT == null && canvas.transform.childCount > 0)
            panelT = canvas.transform.GetChild(0);

        if (panelT == null) return;

        var cg = panelT.GetComponent<CanvasGroup>() ?? panelT.gameObject.AddComponent<CanvasGroup>();
        cg.alpha = welcomeProgress;
        panelT.gameObject.SetActive(welcomeProgress > 0f);
    }

    public void ShowWelcomePanelSmooth()
    {
        if (welcomeTween != null || welcomeAnimationCompleted) return;

        IsWelcomeOpen = true;
        IsOpeningPanel = true;
        IsClosingPanel = false;

        ApplyOrientation();

        welcomeTween = DOTween.To(() => welcomeProgress, x => welcomeProgress = x, 1f, 2f)
            .SetEase(Ease.InOutSine)
            .OnUpdate(ApplyWelcomeVisualState)
            .OnComplete(() =>
            {
                welcomeProgress = 1f;
                welcomeAnimationCompleted = true;
                IsOpeningPanel = false;
                ApplyWelcomeVisualState();
                welcomeTween = null;
            });
    }

    public void CloseWelcomePanelSmooth(Action onComplete = null)
    {
        if (welcomeTween != null || !welcomeAnimationCompleted) return;

        IsClosingPanel = true;
        IsOpeningPanel = false;
        IsWelcomeOpen = true;

        welcomeTween = DOTween.To(() => welcomeProgress, x => welcomeProgress = x, 0f, 2f)
            .SetEase(Ease.InOutSine)
            .OnUpdate(ApplyWelcomeVisualState)
            .OnComplete(() =>
            {
                welcomeProgress = 0f;
                welcomeAnimationCompleted = false;
                IsClosingPanel = false;
                IsWelcomeOpen = false;

                ApplyWelcomeVisualState();
                ApplyOrientation();

                welcomeTween = null;
                onComplete?.Invoke();
            });
    }

    // ===================== HELPERS =====================
    private GameObject SafeGetChild(GameObject parent, int index)
    {
        if (!parent) return null;
        Transform t = parent.transform;
        if (index >= 0 && index < t.childCount) return t.GetChild(index).gameObject;
        return null;
    }

    private Transform FindChildContains(Transform root, string partialName)
    {
        if (root == null) return null;
        partialName = partialName.ToLower();

        var queue = new System.Collections.Generic.Queue<Transform>();
        queue.Enqueue(root);

        while (queue.Count > 0)
        {
            var cur = queue.Dequeue();
            if (cur.name.ToLower().Contains(partialName))
                return cur;

            for (int i = 0; i < cur.childCount; i++)
                queue.Enqueue(cur.GetChild(i));
        }

        return null;
    }

    private T SafeFindComponentInChildren<T>(Transform root, string partialName) where T : Component
    {
        Transform t = FindChildContains(root, partialName);
        if (t == null) return null;

        var direct = t.GetComponent<T>();
        if (direct != null) return direct;

        return t.GetComponentInChildren<T>(true);
    }

    public void LockOrientationFor(float seconds)
    {
        StartCoroutine(LockForSeconds(seconds));
    }

    private IEnumerator LockForSeconds(float t)
    {
        LockOrientation = true;
        yield return new WaitForSeconds(t);
        LockOrientation = false;
    }

    private void SaveResultStateFromLive()
    {
        if (!IsResultPanelOpen) return;

        if (ResultValueText != null)
            ResultValueCached = ResultValueText.text;

        if (OutcomeText != null)
        {
            OutcomeCached = OutcomeText.text;
            OutcomeColorCached = OutcomeText.color;
        }

        if (RoundCached == null || RoundCached.Length < 3)
            RoundCached = new string[3] { "-", "-", "-" };

        //if (Round1Text != null) RoundCached[0] = Round1Text.text;
        //if (Round2Text != null) RoundCached[1] = Round2Text.text;
        //if (Round3Text != null) RoundCached[2] = Round3Text.text;

        if (ButtonGainLife != null)
        {
            ShowGainLifeBtn = ButtonGainLife.gameObject.activeSelf;
            GainLifeInteractable = ButtonGainLife.interactable;
        }

        if (ButtonLoseLifeOthers != null)
        {
            ShowLoseLifeOthersBtn = ButtonLoseLifeOthers.gameObject.activeSelf;
            LoseLifeOthersInteractable = ButtonLoseLifeOthers.interactable;
        }

        if (ButtonPassTurn != null)
        {
            ShowPassTurnBtn = ButtonPassTurn.gameObject.activeSelf;
            PassTurnInteractable = ButtonPassTurn.interactable;
        }
    }

    private void SaveLobbyStateFromLive()
    {
        if (!(IsLobbyOpen || IsLobbyOpening || IsLobbyClosing)) return;

        for (int i = 0; i < 4; i++)
        {
            if (LobbyNameTexts != null && i < LobbyNameTexts.Length && LobbyNameTexts[i] != null)
            {
                string liveName = LobbyNameTexts[i].text;

                if (!string.IsNullOrEmpty(liveName))
                {
                    bool present = (liveName != "???");
                    LobbyPlayerPresent[i] = present;

                    if (present)
                        LobbyPlayerNames[i] = liveName;
                }
            }

            if (LobbyReadyTexts != null && i < LobbyReadyTexts.Length && LobbyReadyTexts[i] != null)
            {
                string liveReady = LobbyReadyTexts[i].text;

                if (!string.IsNullOrEmpty(liveReady))
                {
                    LobbyPlayerPresent[i] = true;
                    LobbyPlayerReady[i] = (liveReady.Trim().ToUpper() == "SI");
                }
            }
        }
    }

    // ===================== TURN WAITING (SEPARATO E ISOLATO) =====================
    public void ShowTurnWaiting(string text)
    {
        Debug.Log($"[TURN WAITING] ShowTurnWaiting -> '{text}'");

        IsTurnWaitingOpen = true;
        TurnWaitingText = text;
        turnWaitingDots = 0;

        ApplyOrientation();
    }

    public void HideTurnWaiting()
    {
        Debug.Log("[TURN WAITING] HideTurnWaiting");

        IsTurnWaitingOpen = false;
        StopTurnWaitingDotsAnimation();
        ApplyOrientation();
    }

    private void RefreshTurnWaitingTextNow()
    {
        if (!IsTurnWaitingOpen || TurnWaitingTextUI == null) return;

        int dotsClamped = Mathf.Clamp(turnWaitingDots, 0, 3);
        TurnWaitingTextUI.text = TurnWaitingText + new string('.', dotsClamped);
    }

    private void EnsureTurnWaitingDotsAnimation()
    {
        if (turnWaitingDotsTween != null && turnWaitingDotsTween.IsActive())
            return;

        turnWaitingDotsTween = DOTween.To(() => turnWaitingDots, x =>
        {
            turnWaitingDots = x;
            RefreshTurnWaitingTextNow();
        }, 3, 1.2f)
        .SetEase(Ease.Linear)
        .SetLoops(-1, LoopType.Restart);
    }

    private void StopTurnWaitingDotsAnimation()
    {
        if (turnWaitingDotsTween != null)
        {
            turnWaitingDotsTween.Kill();
            turnWaitingDotsTween = null;
        }

        turnWaitingDots = 0;

        if (TurnWaitingTextUI != null)
            TurnWaitingTextUI.text = TurnWaitingText;
    }

    private void CacheEndGameReferences(GameObject activeCanvas)
    {
        EndGamePanel = null;
        EndGameWinnerLabel = null;
        EndGameRestartButton = null;

        if (!activeCanvas) return;

        Transform panelT =
            FindChildContains(activeCanvas.transform, "endgamepanel") ??
            FindChildContains(activeCanvas.transform, "panel");

        if (panelT == null && activeCanvas.transform.childCount > 0)
            panelT = activeCanvas.transform.GetChild(0);

        if (panelT == null) return;

        EndGamePanel = panelT.gameObject;

        EndGameWinnerLabel =
            SafeFindComponentInChildren<TMP_Text>(panelT, "winner");

        EndGameRestartButton =
            SafeFindComponentInChildren<Button>(panelT, "restart");
    }

    private void ApplyEndGameVisualState()
    {
        if (EndGamePanel == null) return;

        EndGamePanel.SetActive(IsEndGameOpen);

        if (EndGameWinnerLabel != null)
            EndGameWinnerLabel.text = EndGameWinnerText;

        if (EndGameRestartButton != null)
            EndGameRestartButton.gameObject.SetActive(EndGameShowRestartButton);
    }

    public void ShowEndGamePanel(string winnerName, bool isHost)
    {
        IsEndGameOpen = true;
        EndGameWinnerText = $"Ha vinto: {winnerName}";
        EndGameShowRestartButton = isHost;

        ApplyOrientation();
    }

    public void HideEndGamePanel()
    {
        IsEndGameOpen = false;
        ApplyOrientation();
    }
}
