using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
using System.Collections;
using System.Linq;

public class StartGameAndroid : MonoBehaviour
{
    [Header("Dice")]
    public DadoControllerAndroid dice; // Riferimento al dado da lanciare

    [Header("Result")]
    public ResultControllerAndroid resultController; // Riferimento al controller dei risultati

    [Header("Terricula")]
    public TurriculaAnimationAndroid terricula; // Riferimento alla turricula per animazioni lancio

    // Numeri validi per il gioco
    private readonly int[] validValues = 
        { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60 };

    // ===== Riferimenti UI dinamici =====
    private Button playButton;         // Pulsante "Gioca"
    private GameObject numberPanel;    // Pannello di inserimento numero
    private TMP_Text instructionText;  // Testo inserire numero
    private TMP_InputField numberInput;// Campo input numero
    private Button readyButton;        // Pulsante "Pronto"

    // ---------------------------------------------------------
    // Aggiorna i riferimenti UI ogni volta che cambia orientamento
    // ---------------------------------------------------------
    private void UpdateUIRefs()
    {
        var ui = OrientationUIManager.Instance;
        if (ui == null) return;

        playButton      = ui.PlayButton?.GetComponent<Button>();
        numberPanel     = ui.NumberPanel;
        instructionText = ui.InstructionText;
        numberInput     = ui.NumberInput;
        readyButton     = ui.ReadyButton;

        // Associa listener al pulsante "Pronto"
        if (readyButton != null)
        {
            readyButton.onClick.RemoveAllListeners();
            readyButton.onClick.AddListener(OnProntoClicked);
        }
    }

    // ---------------------------------------------------------
    // CLICK SU "GIOCA" → apre pannello di scelta numero
    // ---------------------------------------------------------
    public void OnGiocaClicked()
    {
        UpdateUIRefs(); // Aggiorna riferimenti UI dinamici

        // Mostra NumberPanel e aggiorna stato globale
        OrientationUIManager.Instance.IsNumberPanelOpen = true;
        OrientationUIManager.Instance.HidePlayButton(); // Nasconde pulsante principale

        if (numberPanel != null)
            numberPanel.SetActive(true);

        if (instructionText != null)
        {
            instructionText.text = "Scegli numero:"; // Messaggio istruzioni
            OrientationUIManager.Instance.CurrentInstructionText = instructionText.text; // salva stato globale
        }

        if (numberInput != null)
        {
            OrientationUIManager.Instance.CurrentInputText = numberInput.text; // salva stato globale
        }
    }

    // ---------------------------------------------------------
    // CLICK SU "PRONTO" → conferma numero e lancia dado
    // ---------------------------------------------------------
    public void OnProntoClicked()
    {
        UpdateUIRefs(); // Aggiorna riferimenti UI

        if (numberInput == null || instructionText == null)
            return;

        string entered = numberInput.text;

        // Aggiorna stato globale
        OrientationUIManager.Instance.CurrentNumberInput = entered;
        OrientationUIManager.Instance.CurrentInputText = entered;
        OrientationUIManager.Instance.CurrentInstructionText = instructionText.text;

        // Controlla validità numero
        if (!int.TryParse(entered, out int number) || !validValues.Contains(number))
        {
            ShowInvalid(); // Mostra messaggio errore
            return;
        }

        // Numero valido
        Debug.Log($"Numero scelto: {number}");

        OrientationUIManager.Instance.IsNumberPanelOpen = false;

        // Chiudi pannello e resetta input/testo
        numberPanel.SetActive(false);
        numberInput.text = "";
        instructionText.text = "";
        OrientationUIManager.Instance.CurrentInputText = "";
        OrientationUIManager.Instance.CurrentInstructionText = "";

        // Salva numero scelto nel controller dei risultati
        resultController.SetNumeroScelto(number);

        // Lancia la turricula con il dado
        if (dice != null)
        {
            terricula.LaunchWithBowl();
        }
    }

    // ---------------------------------------------------------
    // Mostra messaggio di numero non valido
    // ---------------------------------------------------------
    private void ShowInvalid()
    {
        numberInput.text = "";
        instructionText.text = "scegli numero valido!";
    }
}
