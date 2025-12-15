using UnityEngine;
using TMPro;
using UnityEngine.UI;
using DG.Tweening;
using System.Collections;

public class ResultControllerAndroid : MonoBehaviour
{
    // ===== Riferimenti pannelli =====
    private GameObject resultPanel;     // Pannello dei risultati
    private GameObject retryPanel;      // Pannello retry
    private GameObject numberPanel;     // Pannello numero da scegliere

    // ===== Riferimenti testi =====
    private TextMeshProUGUI resultTitleText;   // Titolo risultato
    private TextMeshProUGUI resultValueText;   // Valore numerico del risultato
    private TextMeshProUGUI outcomeText;       // Testo esito (vittoria/sconfitta)
    private TextMeshProUGUI retryText;         // Testo retry

    // ===== Riferimenti campi input =====
    private TMP_InputField inputField;         // Input principale
    private TMP_InputField numberInputField;   // Input retry

    // ===== Riferimenti pulsanti =====
    private Button retryButton;        // Bottone Retry
    private Button finishButton;       // Bottone Termina
    private Button playAgainButton;    // Bottone Gioca Ancora
    private GameObject playButton;     // Bottone Play (per riattivazione)

    // ===== Componenti di supporto =====
    private CanvasGroup resultCanvasGroup; // CanvasGroup per animazione
    private Tweener playButtonTween;       // Tween animazione play button

    // ===== Variabili logica =====
    private int chosenNumber;                   // Numero scelto dall'utente
    private int[] validValues = { 2,3,4,5,6,7,8,9,10,20,30,40,50,60 }; // Numeri validi per il gioco

    [Header("Dice")]
    public TurriculaAnimationAndroid terricula; // Riferimento alla turricula per lanci
    public Quaternion diceStartRotation = Quaternion.identity; // Rotazione iniziale dado

    // ===== Inizializzazione =====
    private void Start()
    {
        InitializeUIReferences(); // Recupera tutti i riferimenti UI attivi
    }

    private void InitializeUIReferences()
    {
        var ui = OrientationUIManager.Instance;
        if (ui == null)
        {
            Debug.LogError("❌ OrientationUIManager non trovato!");
            return;
        }

        // Salva riferimenti locali a pannelli, testi e pulsanti
        resultPanel = ui.ResultPanel;
        retryPanel = ui.RetryPanel;
        numberPanel = ui.NumberPanel;
        playButton = ui.PlayButton;
        resultTitleText = ui.ResultTitleText;
        resultValueText = ui.ResultValueText;
        outcomeText = ui.OutcomeText;
        finishButton = ui.FinishButton;
        playAgainButton = ui.PlayAgainButton;
        retryText = ui.RetryText;
        inputField = ui.NumberInput;
        numberInputField = ui.NumberInputField;
        retryButton = ui.RetryButton;

        // Configura pannello risultati
        if (resultPanel != null)
        {
            resultPanel.SetActive(false);
            resultCanvasGroup = resultPanel.GetComponent<CanvasGroup>();
            if (resultCanvasGroup == null) resultCanvasGroup = resultPanel.AddComponent<CanvasGroup>();
            resultCanvasGroup.alpha = 0f;

            // Reset stato UI
            ui.IsResultPanelOpen = false;
            ui.ResultPanelAlphaDuringFade = 0f;
            ui.ResultValueTextBackup = "";
            ui.OutcomeTextBackup = "";
            ui.IsRetryPanelActive = false;
        }

        if (retryPanel != null) retryPanel.SetActive(false);
        if (playAgainButton != null) playAgainButton.gameObject.SetActive(false);
    }

    // Imposta il numero scelto dall'utente
    public void SetNumeroScelto(int number) => chosenNumber = number;

    // Mostra risultato del lancio
    public void MostraRisultato(int result)
    {
        StartCoroutine(MostraRisultatoDelayed(result));
    }

    private IEnumerator MostraRisultatoDelayed(int result)
    {
        var ui = OrientationUIManager.Instance;
        if (ui == null) yield break;

        // Aggiorna orientamento e riferimenti UI
        ui.ApplyOrientation();
        InitializeUIReferences();

        // Imposta stato per animazione
        ui.IsResultPanelOpen = true;
        ui.ResultPanelAlphaDuringFade = 0f;

        // Attiva pannello risultati
        ui.ResultPanel.SetActive(true);
        resultCanvasGroup = ui.ResultPanel.GetComponent<CanvasGroup>();
        if (resultCanvasGroup == null) resultCanvasGroup = ui.ResultPanel.AddComponent<CanvasGroup>();
        resultCanvasGroup.alpha = 0f;

        // animazione del pannello
        DOTween.Kill(resultCanvasGroup);
        resultCanvasGroup.DOFade(1f, 1f).OnUpdate(() =>
        {
            ui.ResultPanelAlphaDuringFade = resultCanvasGroup.alpha;
        });

        yield return null;

        // Aggiorna testi
        ui.ResultValueText.text = result.ToString();
        ui.ResultValueTextBackup = ui.ResultValueText.text;

        if (result == chosenNumber)
        {
            // Caso vincita
            ui.OutcomeText.text = "Hai Vinto!";
            ui.OutcomeText.color = new Color32(0, 180, 50, 255);
            ui.OutcomeTextBackup = ui.OutcomeText.text;
            ui.OutcomeTextColorBackup = ui.OutcomeText.color;
            ui.RetryPanel.SetActive(false);
            ui.PlayAgainButton.gameObject.SetActive(true);
            ui.IsRetryPanelActive = false;
        }
        else
        {
            // Caso sconfitta
            ui.OutcomeText.text = "Ritenta, sarai più fortunato!";
            ui.OutcomeText.color = new Color32(220, 0, 100, 255);
            ui.OutcomeTextBackup = ui.OutcomeText.text;
            ui.OutcomeTextColorBackup = ui.OutcomeText.color;
            ui.RetryPanel.SetActive(true);
            ui.PlayAgainButton.gameObject.SetActive(false);
            ui.NumberInputField.text = "";
            ui.RetryText.text = "Scegli numero:";
            ui.IsRetryPanelActive = true;
        }
    }

    // ===== Gestione Retry =====
    public void OnRetryPressed()
    {
        var ui = OrientationUIManager.Instance;
        if (ui == null) return;

        // Controlla validità input
        if (!int.TryParse(ui.NumberInputField.text, out int newNumber))
        {
            ui.NumberInputField.text = "";
            if (ui.RetryText != null) ui.RetryText.text = "Scegli numero valido!";
            return;
        }

        if (System.Array.IndexOf(validValues, newNumber) < 0)
        {
            ui.NumberInputField.text = "";
            if (ui.RetryText != null) ui.RetryText.text = "Scegli numero valido!";
            return;
        }

        chosenNumber = newNumber;

        // Chiude pannelli
        if (ui.ResultPanel != null)
        {
            ui.ResultPanel.SetActive(false);
            ui.IsResultPanelOpen = false;
        }
        if (ui.RetryPanel != null) ui.RetryPanel.SetActive(false);
        ui.IsRetryPanelActive = false;

        // Lancia dado
        DadoControllerAndroid dice = FindAnyObjectByType<DadoControllerAndroid>(FindObjectsInactive.Include);
        if (dice != null)
        {
            dice.gameObject.SetActive(false);
            dice.transform.rotation = Random.rotation;
            Debug.Log("Numero scelto: " + chosenNumber);
            terricula.LaunchWithBowl();
        }
    }

    // ===== Gestione fine partita =====
    public void OnTerminaPressed()
    {
        var ui = OrientationUIManager.Instance;
        if (ui == null) return;

        // Chiude tutti i pannelli
        if (ui.ResultPanel != null)
        {
            ui.ResultPanel.SetActive(false);
            ui.IsResultPanelOpen = false;
        }
        if (ui.RetryPanel != null) ui.RetryPanel.SetActive(false);
        ui.IsRetryPanelActive = false;

        // Riattiva PlayButton su entrambi i canvas e anima
        GameObject[] playButtons = {
            ui.SafeGetChild(ui.StartCanvas_V, 0, "PlayButton"),
            ui.SafeGetChild(ui.StartCanvas_H, 0, "PlayButton")
        };

        foreach (var btn in playButtons)
        {
            if (btn != null)
            {
                btn.SetActive(true);
                RectTransform rt = btn.GetComponent<RectTransform>();
                DOTween.Kill(rt);
                rt.DOLocalMoveY(rt.localPosition.y + 0.8f, 1f)
                    .SetEase(Ease.InOutSine)
                    .SetLoops(-1, LoopType.Yoyo);
            }
        }

        // Reset Dado
        DadoControllerAndroid dice = FindAnyObjectByType<DadoControllerAndroid>(FindObjectsInactive.Include);
        if (dice != null)
        {
            dice.transform.rotation = diceStartRotation;
            dice.gameObject.SetActive(false);
        }
    }

    // ===== Gioca ancora =====
    public void OnPlayAgainPressed()
    {
        var ui = OrientationUIManager.Instance;
        if (ui == null) return;

        // Chiudi pannelli risultato
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

        // Attiva NumberPanel sul canvas attivo
        bool isVertical = Screen.height > Screen.width;
        GameObject activeNumberPanel = isVertical ?
            ui.SafeGetChild(ui.StartCanvas_V, 1, "NumberPanel") :
            ui.SafeGetChild(ui.StartCanvas_H, 1, "NumberPanel");

        if (activeNumberPanel != null)
        {
            activeNumberPanel.SetActive(true);

            TMP_Text instrText = ui.SafeGetComponentFromChild<TMP_Text>(activeNumberPanel.transform, 0, "Text");
            TMP_InputField numInput = ui.SafeGetComponentFromChild<TMP_InputField>(activeNumberPanel.transform, 1, "InputField");
            Button readyBtn = ui.SafeGetComponentFromChild<Button>(activeNumberPanel.transform, 2, "ReadyButton");

            if (instrText != null) instrText.text = "Scegli numero:";
            if (numInput != null) numInput.text = "";

            if (readyBtn != null)
            {
                readyBtn.onClick.RemoveAllListeners();
                readyBtn.onClick.AddListener(() =>
                {
                    StartGameAndroid instance = FindObjectOfType<StartGameAndroid>();
                    if (instance != null) instance.OnProntoClicked();
                });
            }

            // Aggiorna riferimenti interni UI
            ui.NumberPanel = activeNumberPanel;
            ui.NumberInput = numInput;
            ui.InstructionText = instrText;
            ui.ReadyButton = readyBtn;
            ui.IsNumberPanelOpen = true;
        }

        // Reset Dado
        DadoControllerAndroid dice = FindAnyObjectByType<DadoControllerAndroid>(FindObjectsInactive.Include);
        if (dice != null)
        {
            dice.transform.rotation = diceStartRotation;
            dice.gameObject.SetActive(false);
        }
    }
}
