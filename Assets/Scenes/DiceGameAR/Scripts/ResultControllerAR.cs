using UnityEngine;
using TMPro;
using UnityEngine.UI;
using DG.Tweening;
using System.Collections;

public class ResultControllerAR : MonoBehaviour
{
    // RIFERIMENTI AI PANNELLI UI
    private GameObject resultPanel;     // Pannello che mostra il risultato del lancio
    private GameObject retryPanel;      // Pannello per il retry (numero errato)
    private GameObject numberPanel;     // Pannello per la scelta del numero

    // RIFERIMENTI AI TESTI UI
    private TextMeshProUGUI resultTitleText; // Titolo del risultato
    private TextMeshProUGUI resultValueText; // Numero uscito dal dado
    private TextMeshProUGUI outcomeText;     // Esito (vittoria / sconfitta)
    private TextMeshProUGUI retryText;       // Testo istruzioni retry

    // RIFERIMENTI AI CAMPI INPUT
    private TMP_InputField inputField;        // Input principale numero
    private TMP_InputField numberInputField; // Input usato nel retry

    // RIFERIMENTI AI PULSANTI
    private Button retryButton;        // Bottone Retry
    private Button finishButton;       // Bottone Termina partita
    private Button playAgainButton;    // Bottone Gioca Ancora
    private GameObject playButton;     // Bottone Play iniziale

    // COMPONENTI DI SUPPORTO
    private CanvasGroup resultCanvasGroup; // CanvasGroup per fade animato
    private Tweener playButtonTween;       // Tween del PlayButton

    // VARIABILI DI LOGICA
    private int chosenNumber; // Numero scelto dall’utente

    // Valori consentiti per il gioco
    private int[] validValues = { 2,3,4,5,6,7,8,9,10,20,30,40,50,60 };

    // RIFERIMENTI AL DADO / TURRICULA
    [Header("Dice")]
    public TurriculaAnimationAR terricula;          // Riferimento alla turricula
    public Quaternion diceStartRotation = Quaternion.identity; // Rotazione iniziale del dado

    // INIZIALIZZAZIONE
    private void Start()
    {
        // Recupera tutti i riferimenti UI dal manager centrale
        InitializeUIReferences();
    }

    private void InitializeUIReferences()
    {
        // Recupera il manager UI globale
        var ui = OrientationUIManagerAR.Instance;
        if (ui == null)
        {
            Debug.LogError("❌ OrientationUIManagerAR non trovato!");
            return;
        }

        // Recupera riferimenti a pannelli UI
        resultPanel = ui.ResultPanel;
        retryPanel = ui.RetryPanel;
        numberPanel = ui.NumberPanel;
        playButton = ui.PlayButton;

        // Recupera riferimenti a testi
        resultTitleText = ui.ResultTitleText;
        resultValueText = ui.ResultValueText;
        outcomeText = ui.OutcomeText;
        retryText = ui.RetryText;

        // Recupera pulsanti
        finishButton = ui.FinishButton;
        playAgainButton = ui.PlayAgainButton;
        retryButton = ui.RetryButton;

        // Recupera input
        inputField = ui.NumberInput;
        numberInputField = ui.NumberInputField;

        // Configura pannello risultato
        if (resultPanel != null)
        {
            resultPanel.SetActive(false);

            // Aggiunge CanvasGroup se mancante
            resultCanvasGroup = resultPanel.GetComponent<CanvasGroup>();
            if (resultCanvasGroup == null)
                resultCanvasGroup = resultPanel.AddComponent<CanvasGroup>();

            resultCanvasGroup.alpha = 0f;

            // Reset stati UI nel manager
            ui.IsResultPanelOpen = false;
            ui.ResultPanelAlphaDuringFade = 0f;
            ui.ResultValueTextBackup = "";
            ui.OutcomeTextBackup = "";
            ui.IsRetryPanelActive = false;
        }

        // Disattiva pannelli non necessari
        if (retryPanel != null) retryPanel.SetActive(false);
        if (playAgainButton != null) playAgainButton.gameObject.SetActive(false);
    }

    // IMPOSTAZIONE NUMERO SCELTO
    public void SetNumeroScelto(int number) => chosenNumber = number;

    // MOSTRA RISULTATO LANCIO
    public void MostraRisultato(int result)
    {
        // Avvia coroutine per mostrare risultato con delay e animazioni
        StartCoroutine(MostraRisultatoDelayed(result));
    }

    private IEnumerator MostraRisultatoDelayed(int result)
    {
        var ui = OrientationUIManagerAR.Instance;
        if (ui == null) yield break;

        // Aggiorna orientamento UI e riferimenti
        ui.ApplyOrientation();
        InitializeUIReferences();

        // Imposta stato pannello risultato
        ui.IsResultPanelOpen = true;
        ui.ResultPanelAlphaDuringFade = 0f;

        // Attiva pannello risultato
        ui.ResultPanel.SetActive(true);

        // Recupera CanvasGroup
        resultCanvasGroup = ui.ResultPanel.GetComponent<CanvasGroup>();
        if (resultCanvasGroup == null)
            resultCanvasGroup = ui.ResultPanel.AddComponent<CanvasGroup>();

        resultCanvasGroup.alpha = 0f;

        // Animazione fade-in
        DOTween.Kill(resultCanvasGroup);
        resultCanvasGroup.DOFade(1f, 1f).OnUpdate(() =>
        {
            ui.ResultPanelAlphaDuringFade = resultCanvasGroup.alpha;
        });

        yield return null;

        // Imposta valore risultato
        ui.ResultValueText.text = result.ToString();
        ui.ResultValueTextBackup = ui.ResultValueText.text;

        // =====================================================
        // CASO VITTORIA
        // =====================================================

        if (result == chosenNumber)
        {
            ui.OutcomeText.text = "Hai Vinto!";
            ui.OutcomeText.color = new Color32(0, 180, 50, 255);

            ui.OutcomeTextBackup = ui.OutcomeText.text;
            ui.OutcomeTextColorBackup = ui.OutcomeText.color;

            ui.RetryPanel.SetActive(false);
            ui.PlayAgainButton.gameObject.SetActive(true);

            ui.IsPlayAgainButtonActive = true;
            ui.IsRetryPanelActive = false;
        }
        // =====================================================
        // CASO SCONFITTA
        // =====================================================
        else
        {
            ui.OutcomeText.text = "Ritenta, sarai più fortunato!";
            ui.OutcomeText.color = new Color32(220, 0, 100, 255);

            ui.OutcomeTextBackup = ui.OutcomeText.text;
            ui.OutcomeTextColorBackup = ui.OutcomeText.color;

            ui.RetryPanel.SetActive(true);
            ui.PlayAgainButton.gameObject.SetActive(false);
            ui.IsPlayAgainButtonActive = false;

            // Testo retry
            ui.RetryText.text = "Scegli numero:";
            ui.RetryTextBackup = ui.RetryText.text;

            // Reset input retry
            ui.NumberInputField.text = "";
            ui.RetryInputBackup = ui.NumberInputField.text;

            ui.IsRetryPanelActive = true;
        }
    }

    // GESTIONE RETRY
    public void OnRetryPressed()
    {
        var ui = OrientationUIManagerAR.Instance;
        if (ui == null) return;

        // Validazione input numerico
        if (!int.TryParse(ui.NumberInputField.text, out int newNumber))
        {
            ui.NumberInputField.text = "";
            ui.RetryInputBackup = "";

            if (ui.RetryText != null)
            {
                ui.RetryText.text = "Scegli numero valido!";
                ui.RetryTextBackup = ui.RetryText.text;
            }
            return;
        }

        // Controllo numero consentito
        if (System.Array.IndexOf(validValues, newNumber) < 0)
        {
            ui.NumberInputField.text = "";
            ui.RetryInputBackup = "";

            if (ui.RetryText != null)
            {
                ui.RetryText.text = "Scegli numero valido!";
                ui.RetryTextBackup = ui.RetryText.text;
            }
            return;
        }

        // Numero valido
        chosenNumber = newNumber;

        // Backup UI
        ui.RetryTextBackup = ui.RetryText != null ? ui.RetryText.text : "";
        ui.RetryInputBackup = ui.NumberInputField.text;

        // Chiude pannelli
        if (ui.ResultPanel != null)
        {
            ui.ResultPanel.SetActive(false);
            ui.IsResultPanelOpen = false;
        }

        if (ui.RetryPanel != null)
            ui.RetryPanel.SetActive(false);

        ui.IsRetryPanelActive = false;

        // Lancia nuovamente il dado
        DadoControllerAR dice = FindAnyObjectByType<DadoControllerAR>(FindObjectsInactive.Include);
        if (dice != null)
        {
            dice.gameObject.SetActive(false);
            dice.transform.rotation = Random.rotation;
            Debug.Log("Numero scelto (retry): " + chosenNumber);
            terricula.LaunchWithBowl();
        }
    }

    // FINE PARTITA
    public void OnTerminaPressed()
    {
        var ui = OrientationUIManagerAR.Instance;
        if (ui == null) return;

        // Chiude pannelli risultato
        if (ui.ResultPanel != null)
        {
            ui.ResultPanel.SetActive(false);
            ui.IsResultPanelOpen = false;
        }

        if (ui.RetryPanel != null)
            ui.RetryPanel.SetActive(false);

        ui.IsRetryPanelActive = false;

        // Riattiva PlayButton e animazione
        GameObject[] playButtons =
        {
            ui.SafeGetChild(ui.StartCanvas_V, 0, "PlayButton"),
            ui.SafeGetChild(ui.StartCanvas_H, 0, "PlayButton")
        };

        foreach (var btn in playButtons)
        {
            if (btn != null)
            {
                ui.CanShowPlayButton = true;
                ui.ApplyOrientation();

                RectTransform rt = btn.GetComponent<RectTransform>();
                DOTween.Kill(rt);

                rt.DOLocalMoveY(rt.localPosition.y + 0.8f, 1f)
                  .SetEase(Ease.InOutSine)
                  .SetLoops(-1, LoopType.Yoyo);
            }
        }

        // Reset dado
        DadoControllerAR dice = FindAnyObjectByType<DadoControllerAR>(FindObjectsInactive.Include);
        if (dice != null)
        {
            dice.transform.rotation = diceStartRotation;
            dice.gameObject.SetActive(false);
        }
    }

    // GIOCA ANCORA
    public void OnPlayAgainPressed()
    {
        var ui = OrientationUIManagerAR.Instance;
        if (ui == null) return;

        // Chiude pannelli risultato
        if (ui.ResultPanel != null)
        {
            ui.ResultPanel.SetActive(false);
            ui.IsResultPanelOpen = false;
        }

        if (ui.RetryPanel != null)
        {
            ui.RetryPanel.SetActive(false);
            ui.IsRetryPanelActive = false;
        }

        // Attiva NumberPanel corretto in base all’orientamento
        bool isVertical = Screen.height > Screen.width;

        GameObject activeNumberPanel = isVertical
            ? ui.SafeGetChild(ui.StartCanvas_V, 1, "NumberPanel")
            : ui.SafeGetChild(ui.StartCanvas_H, 1, "NumberPanel");

        if (activeNumberPanel != null)
        {
            activeNumberPanel.SetActive(true);

            TMP_Text instrText = ui.SafeGetComponentFromChild<TMP_Text>(activeNumberPanel.transform, 0, "Text");
            TMP_InputField numInput = ui.SafeGetComponentFromChild<TMP_InputField>(activeNumberPanel.transform, 1, "InputField");
            Button readyBtn = ui.SafeGetComponentFromChild<Button>(activeNumberPanel.transform, 2, "ReadyButton");

            if (instrText != null)
            {
                instrText.text = "Scegli numero:";
                ui.CurrentInstructionText = instrText.text;
            }

            if (numInput != null)
                numInput.text = "";

            if (readyBtn != null)
            {
                readyBtn.onClick.RemoveAllListeners();
                readyBtn.onClick.AddListener(() =>
                {
                    StartGameAR instance = FindObjectOfType<StartGameAR>();
                    if (instance != null)
                        instance.OnProntoClicked();
                });
            }

            // Aggiorna riferimenti UI
            ui.NumberPanel = activeNumberPanel;
            ui.NumberInput = numInput;
            ui.InstructionText = instrText;
            ui.ReadyButton = readyBtn;
            ui.IsNumberPanelOpen = true;
        }

        // Reset dado
        DadoControllerAR dice = FindAnyObjectByType<DadoControllerAR>(FindObjectsInactive.Include);
        if (dice != null)
        {
            dice.transform.rotation = diceStartRotation;
            dice.gameObject.SetActive(false);
        }
    }
}
