using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

[System.Serializable] // Permette la serializzazione per eventuali salvataggi o ispezioni
public class OrientationUIManager : MonoBehaviour
{
    public static OrientationUIManager Instance; // Singleton per acceso globale al manager

    [Header("Vertical Canvases")]
    public GameObject WelcomeCanvas_V; // Canvas Welcome in modalità verticale
    public GameObject StartCanvas_V;   // Canvas Start in modalità verticale
    public GameObject ResultCanvas_V;  // Canvas Risultato in modalità verticale

    [Header("Horizontal Canvases")]
    public GameObject WelcomeCanvas_H; // Canvas Welcome in modalità orizzontale
    public GameObject StartCanvas_H;   // Canvas Start in modalità orizzontale
    public GameObject ResultCanvas_H;  // Canvas Risultato in modalità orizzontale

    [Header("Cameras")]
    public Camera MainCamera_V; // Telecamera per modalità verticale
    public Camera MainCamera_H; // Telecamera per modalità orizzontale

    // ===== Stato UI =====
    [HideInInspector] public bool IsWelcomeOpen = true; // Indica se il pannello di benvenuto è aperto
    [HideInInspector] public bool IsNumberPanelOpen = false; // Indica se il pannello dei numeri è aperto
    [HideInInspector] public string CurrentNumberInput = ""; // Backup del numero inserito dall'utente
    [HideInInspector] public bool IsClosingPanel = false; // Indica se il Welcome Panel sta venendo chiuso con animazione
    [HideInInspector] public float WelcomePanelAlphaDuringFade = 1f; // Valore alfa salvato durante l'animazione di chiusura
    [HideInInspector] public bool IsResultPanelOpen = false; // Indica se il pannello risultato è visibile
    [HideInInspector] public float ResultPanelAlphaDuringFade = 0f; // Alpha del pannello risultato durante l'animazione
    [HideInInspector] public string ResultValueTextBackup = ""; // Backup del valore risultato
    [HideInInspector] public string OutcomeTextBackup = "";     // Backup del testo di esito
    [HideInInspector] public Color OutcomeTextColorBackup = Color.black; // Backup del colore testo risultato
    [HideInInspector] public bool IsRetryPanelActive = false; // Indica se il pannello retry è attivo
    [HideInInspector] public string RetryTextBackup = "";     // Backup del testo retry
    [HideInInspector] public string RetryInputBackup = ""; // Backup dell'input retry

    // ===== Riferimenti attivi =====
    [HideInInspector] public GameObject WelcomePanel; // Riferimento al Welcome Panel attivo
    [HideInInspector] public GameObject PlayButton; // Riferimento al bottone Gioca
    [HideInInspector] public GameObject NumberPanel; // Riferimento al pannello inserimento numero
    [HideInInspector] public TMP_Text InstructionText; // Testo istruzioni NumberPanel
    [HideInInspector] public TMP_InputField NumberInput; // Campo input numero
    [HideInInspector] public Button ReadyButton; // Bottone "Pronto"
    [HideInInspector] public GameObject ResultPanel;    // Pannello dei risultati
    [HideInInspector] public TextMeshProUGUI ResultTitleText; // Titolo risultato
    [HideInInspector] public TextMeshProUGUI ResultValueText; // Valore numerico del risultato
    [HideInInspector] public TextMeshProUGUI OutcomeText; // Testo di esito (vittoria/sconfitta)
    [HideInInspector] public Button FinishButton; // Bottone fine partita
    [HideInInspector] public Button PlayAgainButton; // Bottone gioca ancora
    [HideInInspector] public GameObject RetryPanel; // Pannello retry
    [HideInInspector] public TextMeshProUGUI RetryText; // Testo retry
    [HideInInspector] public TMP_InputField NumberInputField; // Input retry
    [HideInInspector] public Button RetryButton; // Bottone retry
    [HideInInspector] public bool LockOrientation = false; // Blocca temporaneamente il cambio orientamento

    private ScreenOrientation lastOrientation; // Ultimo orientamento salvato

    // Elementi NumberPanel
    [HideInInspector] public string CurrentInstructionText = ""; // Backup testo istruzioni
    [HideInInspector] public string CurrentInputText = ""; // Backup input numero

    void Awake() => Instance = this; // Inizializza il Singleton

    void Start()
    {
        ApplyOrientation(); // Applica orientamento iniziale

        EnsurePlayButtonAnimation(); // Avvia animazione pulsante Gioca
    }

    void Update()
    {
        // Se l’orientamento è bloccato, non fare nulla
        if (LockOrientation)
            return; 

        // Backup valori RetryPanel prima del cambio orientamento
        if (RetryPanel != null && RetryPanel.activeSelf)
        {
            if (RetryText != null) RetryTextBackup = RetryText.text;
            if (NumberInputField != null) RetryInputBackup = NumberInputField.text;
        }

        // Backup NumberPanel prima del cambio orientamento
        if (NumberPanel != null && NumberPanel.activeSelf)
        {
            if (NumberInput != null) CurrentInputText = NumberInput.text;
            if (InstructionText != null) CurrentInstructionText = InstructionText.text;
        }

        // Se cambia l’orientamento ricarica tutta la UI
        if (Screen.orientation != lastOrientation)
        {
            ApplyOrientation();
            EnsurePlayButtonAnimation();
        }
    }

    public void ApplyOrientation()
    {
        bool isVertical = Screen.height > Screen.width;    // Verifica se lo schermo è verticale

        lastOrientation = Screen.orientation;     // Salva orientamento attuale

        // ===== Welcome Panel =====
        bool keepActive = IsWelcomeOpen || IsClosingPanel;

        if (!IsClosingPanel)
        {
            // Attiva il canvas corretto
            WelcomeCanvas_V.SetActive(isVertical && keepActive);
            WelcomeCanvas_H.SetActive(!isVertical && keepActive);
        }
        else
        {
            // Gestione animazione durante cambio orientamento
            if (isVertical)
            {
                WelcomeCanvas_V.SetActive(true);
                WelcomeCanvas_H.SetActive(false);
                WelcomePanel = SafeGetChild(WelcomeCanvas_V, 0, "WelcomePanel");
            }
            else
            {
                WelcomeCanvas_V.SetActive(false);
                WelcomeCanvas_H.SetActive(true);
                WelcomePanel = SafeGetChild(WelcomeCanvas_H, 0, "WelcomePanel");
            }

            CanvasGroup cg = WelcomePanel.GetComponent<CanvasGroup>();
            if (cg == null) cg = WelcomePanel.AddComponent<CanvasGroup>();

            cg.alpha = WelcomePanelAlphaDuringFade;

            DOTween.Kill(cg);
            cg.DOFade(0f, 12f * cg.alpha).OnUpdate(() =>
            {
                WelcomePanelAlphaDuringFade = cg.alpha;
            })
            .OnComplete(() =>
            {
                WelcomePanel.SetActive(false);
                IsClosingPanel = false;
            });
        }

        // ===== Start & Result Canvas =====
        StartCanvas_V.SetActive(isVertical);
        ResultCanvas_V.SetActive(isVertical);
        StartCanvas_H.SetActive(!isVertical);
        ResultCanvas_H.SetActive(!isVertical);

        GameObject activeStartCanvas = isVertical ? StartCanvas_V : StartCanvas_H;
        GameObject activeResultCanvas = isVertical ? ResultCanvas_V : ResultCanvas_H;

        // ===== Switch Telecamere =====
        if (MainCamera_V != null && MainCamera_H != null)
        {
            MainCamera_V.gameObject.SetActive(isVertical);
            MainCamera_H.gameObject.SetActive(!isVertical);
        }

        // ===== Welcome Panel ref =====
        WelcomePanel = SafeGetChild(isVertical ? WelcomeCanvas_V : WelcomeCanvas_H, 0, "WelcomePanel");

        // ===== Start Panel =====
        PlayButton = SafeGetChild(activeStartCanvas, 0, "PlayButton");
        NumberPanel = SafeGetChild(activeStartCanvas, 1, "NumberPanel");

        if (NumberPanel != null)
        {
            Transform t = NumberPanel.transform;

            InstructionText = SafeGetComponentFromChild<TMP_Text>(t, 0, "Text") ??
                              SafeFindComponentInChildren<TMP_Text>(t, "Text");

            NumberInput = SafeGetComponentFromChild<TMP_InputField>(t, 1, "InputField") ??
                          SafeFindComponentInChildren<TMP_InputField>(t, "InputField");

            ReadyButton = SafeGetComponentFromChild<Button>(t, 2, "ReadyButton") ??
                          SafeFindComponentInChildren<Button>(t, "Button");

            // Ripristino input e testo
            if (NumberInput != null) NumberInput.text = CurrentInputText;
            if (InstructionText != null) InstructionText.text = CurrentInstructionText;

            NumberPanel.SetActive(IsNumberPanelOpen);

            // Listener del bottone pronto
            if (ReadyButton != null)
            {
                ReadyButton.onClick.RemoveAllListeners();
                ReadyButton.onClick.AddListener(() =>
                {
                    StartGameAndroid instance = FindObjectOfType<StartGameAndroid>();
                    if (instance != null) instance.OnProntoClicked();
                });
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

            PlayAgainButton.gameObject.SetActive(false);
        }
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
