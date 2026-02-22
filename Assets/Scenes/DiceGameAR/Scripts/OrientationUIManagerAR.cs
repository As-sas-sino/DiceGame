using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

[System.Serializable] // Rende la classe serializzabile
public class OrientationUIManagerAR : MonoBehaviour
{
    public static OrientationUIManagerAR Instance; // Singleton globale

    // ===== Canvas verticali =====
    [Header("Vertical Canvases")]
    public GameObject ConfirmCanvas_V;   // Canvas conferma tavolo (verticale)
    public GameObject WelcomeCanvas_V;   // Canvas welcome (verticale)
    public GameObject StartCanvas_V;     // Canvas start (verticale)
    public GameObject ResultCanvas_V;    // Canvas risultato (verticale)

    // ===== Canvas orizzontali =====
    [Header("Horizontal Canvases")]
    public GameObject ConfirmCanvas_H;   // Canvas conferma tavolo (orizzontale)
    public GameObject WelcomeCanvas_H;   // Canvas welcome (orizzontale)
    public GameObject StartCanvas_H;     // Canvas start (orizzontale)
    public GameObject ResultCanvas_H;    // Canvas risultato (orizzontale)

    // ===== Stato UI =====
    [HideInInspector] public bool IsWelcomeOpen = false;        // Welcome visibile
    [HideInInspector] public bool IsNumberPanelOpen = false;   // Pannello numeri aperto
    [HideInInspector] public string CurrentNumberInput = "";   // Backup input numero
    [HideInInspector] public bool IsClosingPanel = false;      // Welcome in chiusura
    [HideInInspector] public bool IsConfirmOpen = false;       // Conferma tavolo aperta
    [HideInInspector] public float WelcomePanelAlphaDuringFade = 0f; // Alpha welcome

    [HideInInspector] public bool IsOpeningPanel = false;      // Welcome in apertura

    [HideInInspector] public bool IsResultPanelOpen = false;   // Risultato visibile
    [HideInInspector] public float ResultPanelAlphaDuringFade = 0f; // Alpha risultato
    [HideInInspector] public string ResultValueTextBackup = ""; // Backup valore risultato
    [HideInInspector] public string OutcomeTextBackup = "";     // Backup testo esito
    [HideInInspector] public Color OutcomeTextColorBackup = Color.black; // Backup colore
    [HideInInspector] public bool IsRetryPanelActive = false;   // Retry visibile
    [HideInInspector] public string RetryTextBackup = "";       // Backup testo retry
    [HideInInspector] public string RetryInputBackup = "";      // Backup input retry
    [HideInInspector] public bool CanShowPlayButton = false;   // PlayButton abilitato
    [HideInInspector] public bool IsPlayAgainButtonActive = false; // Play again visibile

    // ===== Riferimenti UI attivi =====
    [HideInInspector] public GameObject WelcomePanel;          // Welcome panel attivo
    [HideInInspector] public GameObject PlayButton;            // Bottone play
    [HideInInspector] public GameObject NumberPanel;           // Pannello numeri
    [HideInInspector] public TMP_Text InstructionText;         // Testo istruzioni
    [HideInInspector] public TMP_InputField NumberInput;       // Input numero
    [HideInInspector] public Button ReadyButton;               // Bottone pronto
    [HideInInspector] public GameObject ResultPanel;           // Pannello risultato
    [HideInInspector] public TextMeshProUGUI ResultTitleText;  // Titolo risultato
    [HideInInspector] public TextMeshProUGUI ResultValueText;  // Valore risultato
    [HideInInspector] public TextMeshProUGUI OutcomeText;      // Testo esito
    [HideInInspector] public Button FinishButton;              // Bottone fine
    [HideInInspector] public Button PlayAgainButton;           // Bottone rigioca
    [HideInInspector] public GameObject RetryPanel;            // Pannello retry
    [HideInInspector] public TextMeshProUGUI RetryText;        // Testo retry
    [HideInInspector] public TMP_InputField NumberInputField;  // Input retry
    [HideInInspector] public Button RetryButton;               // Bottone retry
    [HideInInspector] public bool LockOrientation = false;     // Blocco orientamento
    [HideInInspector] public Button ConfirmTableButton;        // Bottone conferma tavolo
    [HideInInspector] public bool TableHasAppeared = false;    // Tavolo rilevato

    private Tweener confirmTween;               // Tween conferma tavolo
    private float confirmProgress = 0f;         // Progresso animazione conferma
    private bool confirmAnimationCompleted = false; // Conferma completata

    // ===== Welcome animation =====
    private Tweener welcomeTween;               // Tween welcome
    private float welcomeProgress = 0f;         // Progresso welcome
    private bool welcomeAnimationCompleted = false; // Welcome completato

    private ScreenOrientation lastOrientation;  // Ultimo orientamento

    [HideInInspector] public string CurrentInstructionText = ""; // Backup istruzioni
    [HideInInspector] public string CurrentInputText = "";       // Backup input

    void Awake() => Instance = this; // Inizializza singleton

    void Start()
    {
        // Spegne tutti i canvas all'avvio
        if (WelcomeCanvas_V != null) WelcomeCanvas_V.SetActive(false);
        if (WelcomeCanvas_H != null) WelcomeCanvas_H.SetActive(false);
        if (StartCanvas_V != null) StartCanvas_V.SetActive(false);
        if (StartCanvas_H != null) StartCanvas_H.SetActive(false);
        if (ResultCanvas_V != null) ResultCanvas_V.SetActive(false);
        if (ResultCanvas_H != null) ResultCanvas_H.SetActive(false);

        ApplyOrientation(); // Prima sincronizzazione UI
    }

    void Update()
    {
        if (LockOrientation) return; // Ignora se bloccato

        // Cambio orientamento
        if (Screen.orientation != lastOrientation)
        {
            ApplyOrientation(); // Aggiorna canvas

            StartGameAR startGame = FindObjectOfType<StartGameAR>();
            if (startGame != null)
                SetupPlayButtonListener(startGame); // Ricollega listener

            EnsurePlayButtonAnimation(); // Riattiva animazione
        }
    }

    public void ApplyOrientation()
    {
        bool isVertical = Screen.height > Screen.width;
        lastOrientation = Screen.orientation;

        // ===================== CONFIRM PLACEMENT =====================
        if (ConfirmCanvas_V != null)
            ConfirmCanvas_V.SetActive(isVertical);

        if (ConfirmCanvas_H != null)
            ConfirmCanvas_H.SetActive(!isVertical);

        ApplyConfirmVisualState();


        // =========================================================
        // WELCOME PANEL (apertura / chiusura / orientation-safe)
        // =========================================================

       // Determina se il pannello deve essere attivo
        bool keepWelcomeActive = IsWelcomeOpen || IsOpeningPanel || IsClosingPanel;

        // Attiva il canvas corretto secondo l'orientamento
        if (keepWelcomeActive)
        {
            WelcomeCanvas_V.SetActive(isVertical);
            WelcomeCanvas_H.SetActive(!isVertical);
        }
        else
        {
            WelcomeCanvas_V.SetActive(false);
            WelcomeCanvas_H.SetActive(false);
        }

        // Aggiorna solo il riferimento al pannello attivo (orientation-safe)
        if (keepWelcomeActive)
        {
            WelcomePanel = SafeGetChild(
                isVertical ? WelcomeCanvas_V : WelcomeCanvas_H,
                0,
                "WelcomePanel"
            );

            // Applica lo stato visivo corrente con alpha condiviso
            ApplyWelcomeVisualState();
        }

        // =========================================================
        // CANVAS START & RESULT (come Android, NO telecamere)
        // =========================================================

        if (StartCanvas_V != null && StartCanvas_V.transform.parent != null)
            StartCanvas_V.SetActive(isVertical);

        ResultCanvas_V.SetActive(isVertical);
        
        if (StartCanvas_H != null && StartCanvas_H.transform.parent != null)
            StartCanvas_H.SetActive(!isVertical);

        ResultCanvas_H.SetActive(!isVertical);

        GameObject activeStartCanvas = isVertical ? StartCanvas_V : StartCanvas_H;
        GameObject activeResultCanvas = isVertical ? ResultCanvas_V : ResultCanvas_H;

        // =========================================================
        // WELCOME PANEL REF (safe)
        // =========================================================

        if (keepWelcomeActive)
        {
            WelcomePanel = SafeGetChild(
                isVertical ? WelcomeCanvas_V : WelcomeCanvas_H,
                0,
                "WelcomePanel"
            );

            if (WelcomePanel != null)
            {
                CanvasGroup cg = WelcomePanel.GetComponent<CanvasGroup>();
                if (cg == null) cg = WelcomePanel.AddComponent<CanvasGroup>();
                cg.alpha = WelcomePanelAlphaDuringFade;
            }
        }

        // ===================== START CANVAS (IN SCENA) =====================

        if (StartCanvas_V != null)
            StartCanvas_V.SetActive(isVertical);

        if (StartCanvas_H != null)
            StartCanvas_H.SetActive(!isVertical);

        activeStartCanvas = isVertical ? StartCanvas_V : StartCanvas_H;

        if (activeStartCanvas != null)
        {
            // Riferimenti ai figli
            PlayButton  = SafeGetChild(activeStartCanvas, 0, "PlayButton");
            NumberPanel = SafeGetChild(activeStartCanvas, 1, "NumberPanel");

            // Assicura che il PlayButton parta spento
            if (PlayButton != null)
                PlayButton.SetActive(CanShowPlayButton);

            if (NumberPanel != null)
            {
                Transform t = NumberPanel.transform;

        InstructionText = SafeGetComponentFromChild<TMP_Text>(t, 0, "Text")
            ?? SafeFindComponentInChildren<TMP_Text>(t, "Text");

        NumberInput = SafeGetComponentFromChild<TMP_InputField>(t, 1, "InputField")
            ?? SafeFindComponentInChildren<TMP_InputField>(t, "InputField");

        ReadyButton = SafeGetComponentFromChild<Button>(t, 2, "ReadyButton")
            ?? SafeFindComponentInChildren<Button>(t, "Button");

        // 🔹 Ripristina sempre i valori correnti globali
        if (InstructionText != null)
            InstructionText.text = CurrentInstructionText;

        if (NumberInput != null)
        {
            NumberInput.text = CurrentInputText;

            // 🔹 Listener per aggiornare il valore in tempo reale
            NumberInput.onValueChanged.RemoveAllListeners();
            NumberInput.onValueChanged.AddListener((val) =>
            {
                CurrentInputText = val;
                CurrentNumberInput = val;
            });
        }

        NumberPanel.SetActive(IsNumberPanelOpen);
                }
            }

        // ===== Result Panel =====
        if (activeResultCanvas != null)
        {
            Transform t = activeResultCanvas.transform.GetChild(0); 
            ResultPanel = t.gameObject;

            // Recupero riferimenti interni
            ResultTitleText = ResultPanel.transform.GetChild(1).GetComponent<TextMeshProUGUI>();
            ResultValueText = ResultPanel.transform.GetChild(2).GetComponent<TextMeshProUGUI>();
            OutcomeText = ResultPanel.transform.GetChild(3).GetComponent<TextMeshProUGUI>();
            FinishButton = ResultPanel.transform.GetChild(4).GetComponent<Button>();
            PlayAgainButton = ResultPanel.transform.GetChild(5).GetComponent<Button>();
            RetryPanel = ResultPanel.transform.GetChild(6).gameObject;

            Transform r = RetryPanel.transform;
            RetryText = r.GetChild(0).GetComponent<TextMeshProUGUI>();
            NumberInputField = r.GetChild(1).GetComponent<TMP_InputField>();
            RetryButton = r.GetChild(2).GetComponent<Button>();

            // === LISTENER PER SALVARE INPUT DURANTE DIGITAZIONE ===
            NumberInputField.onValueChanged.RemoveAllListeners();
            NumberInputField.onValueChanged.AddListener(value =>
            {
                RetryInputBackup = value;
            });

            // Ripristino valori salvati
            ResultValueText.text = ResultValueTextBackup;
            OutcomeText.text = OutcomeTextBackup;
            OutcomeText.color = OutcomeTextColorBackup;
            RetryText.text = RetryTextBackup;
            NumberInputField.text = RetryInputBackup;

            RetryPanel.SetActive(IsRetryPanelActive);

            CanvasGroup cg = ResultPanel.GetComponent<CanvasGroup>();
            if (cg == null) cg = ResultPanel.AddComponent<CanvasGroup>();
            cg.alpha = ResultPanelAlphaDuringFade;

            if (IsResultPanelOpen)
            {
                ResultPanel.SetActive(true);
                DOTween.Kill(cg);
                cg.DOFade(1f, 1f).OnUpdate(() =>
                {
                    ResultPanelAlphaDuringFade = cg.alpha;
                });
            }
            else
            {
                ResultPanel.SetActive(false);
            }

           if (PlayAgainButton != null)
            {
                PlayAgainButton.gameObject.SetActive(IsPlayAgainButtonActive);
            }
        }
    }

    public void ShowConfirmPlacementUI()
    {
        if (confirmTween != null || confirmAnimationCompleted)
            return;

        TableHasAppeared = true;

        bool isVertical = Screen.height > Screen.width;
        // Attiva entrambi i canvas (solo uno sarà visibile)
        if (ConfirmCanvas_V != null)
                ConfirmCanvas_V.SetActive(isVertical);

        if (ConfirmCanvas_H != null)
                ConfirmCanvas_H.SetActive(!isVertical);

        confirmTween = DOTween.To(
            () => confirmProgress,
            x => confirmProgress = x,
            1f,
            2f // durata test
        )
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
        if (canvas == null) return;

        var cg = canvas.GetComponent<CanvasGroup>()
                ?? canvas.AddComponent<CanvasGroup>();

        cg.alpha = confirmProgress;
        cg.interactable = confirmAnimationCompleted;
        cg.blocksRaycasts = confirmAnimationCompleted;

        GameObject btnObj = SafeGetChild(canvas, 0, "Confirm");
        if (btnObj != null)
            btnObj.SetActive(TableHasAppeared);
    }

    public void HideConfirmPlacementUI()
    {
        if (ConfirmCanvas_V != null)
            ConfirmCanvas_V.SetActive(false);

        if (ConfirmCanvas_H != null)
            ConfirmCanvas_H.SetActive(false);
    }


    public void ShowWelcomePanelSmooth()
    {
        if (welcomeTween != null || welcomeAnimationCompleted)
            return;

        IsWelcomeOpen = true;
        IsOpeningPanel = true;
        IsClosingPanel = false;

        ApplyOrientation();

        welcomeTween = DOTween.To(
            () => welcomeProgress,
            x => welcomeProgress = x,
            1f,
            2f
        )
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
    private void ApplyWelcomeVisualState()
    {
        ApplyWelcomeCanvas(WelcomeCanvas_V);
        ApplyWelcomeCanvas(WelcomeCanvas_H);
    }
    private void ApplyWelcomeCanvas(GameObject canvas)
    {
        if (canvas == null) return;

        var panel = SafeGetChild(canvas, 0, "WelcomePanel");
        if (panel == null) return;

        var cg = panel.GetComponent<CanvasGroup>()
                ?? panel.AddComponent<CanvasGroup>();

        cg.alpha = welcomeProgress;
        panel.SetActive(welcomeProgress > 0f);
    }

    public void CloseWelcomePanelSmooth()
    {
        if (welcomeTween != null || !welcomeAnimationCompleted)
            return;

        IsClosingPanel = true;
        IsOpeningPanel = false;
        IsWelcomeOpen = true;

        welcomeTween = DOTween.To(
            () => welcomeProgress,
            x => welcomeProgress = x,
            0f,
            2f
        )
        .SetEase(Ease.InOutSine)
        .OnUpdate(ApplyWelcomeVisualState)
        .OnComplete(() =>
        {
            welcomeProgress = 0f;
            welcomeAnimationCompleted = false;
            IsClosingPanel = false;
            IsWelcomeOpen = false;

            ApplyWelcomeVisualState();

            // ora può riapparire il PlayButton
            CanShowPlayButton = true;
            ApplyOrientation();
            EnsurePlayButtonAnimation();

            welcomeTween = null;
        });
    }

    // ===== Animazioni =====
    public void EnsurePlayButtonAnimation()
    {
        if (PlayButton == null || !PlayButton.activeSelf) return;

        RectTransform rt = PlayButton.GetComponent<RectTransform>();
        DOTween.Kill(rt);

        Vector3 start = rt.localPosition;
        rt.DOLocalMoveY(start.y + 0.8f, 1f)
        .SetEase(Ease.InOutSine)
        .SetLoops(-1, LoopType.Yoyo);
    }


    // ===== Helpers =====
    public GameObject SafeGetChild(GameObject parent, int index, string partialName)
    {
        if (parent == null) return null;

        Transform t = parent.transform;

        if (index < t.childCount)
            return t.GetChild(index).gameObject;

        Transform found = FindChildContains(t, partialName);
        return found != null ? found.gameObject : null;
    }

    public T SafeGetComponentFromChild<T>(Transform parent, int index, string partialName) where T : Component
    {
        if (parent == null) return null;

        if (index < parent.childCount)
        {
            var comp = parent.GetChild(index).GetComponent<T>();
            if (comp != null) return comp;
        }

        Transform found = FindChildContains(parent, partialName);
        return found != null ? found.GetComponent<T>() : null;
    }

    public T SafeFindComponentInChildren<T>(Transform parent, string partialName) where T : Component
    {
        if (parent == null) return null;

        partialName = partialName.ToLower();

        foreach (Transform c in parent)
        {
            if (c.name.ToLower().Contains(partialName))
            {
                T comp = c.GetComponent<T>();
                if (comp != null) return comp;
            }
        }

        foreach (Transform c in parent)
        {
            foreach (Transform c2 in c)
            {
                if (c2.name.ToLower().Contains(partialName))
                {
                    T comp = c2.GetComponent<T>();
                    if (comp != null) return comp;
                }
            }
        }

        return null;
    }

    private Transform FindChildContains(Transform parent, string partialName)
    {
        if (parent == null) return null;

        partialName = partialName.ToLower();

        foreach (Transform c in parent)
            if (c.name.ToLower().Contains(partialName)) return c;

        foreach (Transform c in parent)
        {
            foreach (Transform c2 in c)
                if (c2.name.ToLower().Contains(partialName)) return c2;
        }

        return null;
    }

    public void SetupPlayButtonListener(StartGameAR startGame)
    {
        if (PlayButton == null || startGame == null) return;

        Button btn = PlayButton.GetComponent<Button>();
        if (btn == null) return;

        btn.onClick.RemoveAllListeners(); // evita doppie chiamate
        btn.onClick.AddListener(() => startGame.OnGiocaClicked());
    }


    public void HidePlayButton()
    {
        if (StartCanvas_V != null)
        {
            GameObject btnV = SafeGetChild(StartCanvas_V, 0, "PlayButton");
            if (btnV != null) btnV.SetActive(false);
        }

        if (StartCanvas_H != null)
        {
            GameObject btnH = SafeGetChild(StartCanvas_H, 0, "PlayButton");
            if (btnH != null) btnH.SetActive(false);
        }
    }

    public void LockOrientationFor(float seconds)
    {
        StartCoroutine(LockForSeconds(seconds));
    }

    private System.Collections.IEnumerator LockForSeconds(float t)
    {
        LockOrientation = true;
        yield return new WaitForSeconds(t);
        LockOrientation = false;
    }
}
