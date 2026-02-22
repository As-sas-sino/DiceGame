using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
using System.Collections;
using System.Linq;

public class StartGameAR : MonoBehaviour
{
    [Header("Dice")]
    public DadoControllerAR dice; // Riferimento al dado da lanciare

    [Header("Result")]
    public ResultControllerAR resultController; // Riferimento al controller dei risultati

    [Header("Terricula")]
    public TurriculaAnimationAR terricula; // Riferimento alla turricula per animazioni lancio

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
        var ui = OrientationUIManagerAR.Instance;
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
        OrientationUIManagerAR.Instance.IsNumberPanelOpen = true;
        OrientationUIManagerAR.Instance.ApplyOrientation(); // Nasconde pulsante principale

        if (numberPanel != null)
            numberPanel.SetActive(true);

        if (instructionText != null)
        {
            instructionText.text = "Scegli numero:";
            OrientationUIManagerAR.Instance.CurrentInstructionText = instructionText.text;
        }

        if (numberInput != null)
        {
            OrientationUIManagerAR.Instance.CurrentInputText = numberInput.text;
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
        OrientationUIManagerAR.Instance.CurrentNumberInput = entered;
        OrientationUIManagerAR.Instance.CurrentInputText = entered;
        OrientationUIManagerAR.Instance.CurrentInstructionText = instructionText.text;

        // Controlla validità numero
        if (!int.TryParse(entered, out int number) || !validValues.Contains(number))
        {
            ShowInvalid(); // Mostra messaggio errore
            return;
        }

        // Numero valido
        Debug.Log($"Numero scelto: {number}");

        OrientationUIManagerAR.Instance.IsNumberPanelOpen = false;

        // Chiudi pannello e resetta input/testo
        if (numberPanel != null)
            numberPanel.SetActive(false);

        if (playButton != null)
        {
            playButton.gameObject.SetActive(false); // ← aggiungi questa riga
            OrientationUIManagerAR.Instance.CanShowPlayButton = false; // impedisce che riappaia
        }
        
        numberInput.text = "";
        instructionText.text = "";
        OrientationUIManagerAR.Instance.CurrentInputText = "";
        OrientationUIManagerAR.Instance.CurrentInstructionText = "";

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

        var ui = OrientationUIManagerAR.Instance;
        if (ui != null)
        {
            ui.CurrentInstructionText = instructionText.text;
            ui.CurrentInputText = "";
        }
    }

}
