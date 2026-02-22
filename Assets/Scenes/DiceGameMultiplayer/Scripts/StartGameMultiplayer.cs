using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;
using System.Collections;
using Fusion;

public class StartGameMultiplayer : MonoBehaviour
{
    // =========================
    // CONFIG
    // =========================
    [Header("Result (optional legacy)")]
    public ResultControllerMultiplayer resultController;

    // Valori numerici validi
    private readonly int[] validValues =
        { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60 };

    private TMP_Text instructionText;
    private TMP_InputField numberInput;
    private Button readyButton;

    // ======================================================
    // LIFECYCLE
    // ======================================================
    private void OnEnable()
    {
        RefreshUIRefs(); // Ricollega riferimenti UI
    }

    // ======================================================
    // UI REFERENCES
    // ======================================================
    public void RefreshUIRefs()
    {
        var ui = OrientationUIManagerMultiplayer.Instance;
        if (ui == null) return;

        instructionText = ui.InstructionText;
        numberInput     = ui.NumberInput;
        readyButton     = ui.ReadyButton;

        // Binding bottone
        if (readyButton != null)
        {
            readyButton.onClick.RemoveAllListeners();
            readyButton.onClick.AddListener(OnProntoClicked);
        }
    }

    // ======================================================
    // OPEN PANEL
    // ======================================================
    public void OpenChooseNumberPanel()
    {
        RefreshUIRefs();

        var ui = OrientationUIManagerMultiplayer.Instance;
        if (ui == null) return;

        // Non modifica IsNumberPanelOpen (gestito altrove)
        if (string.IsNullOrEmpty(ui.CurrentInstructionText))
            ui.CurrentInstructionText = "Scegli numero:";
    }

    // ======================================================
    // READY CLICK
    // ======================================================
    private void OnProntoClicked()
    {
        RefreshUIRefs();

        var ui = OrientationUIManagerMultiplayer.Instance;
        if (ui == null) return;

        if (numberInput == null || instructionText == null)
            return;

        string entered = numberInput.text;

        // Salva stato UI corrente
        ui.CurrentInputText = entered;
        ui.CurrentInstructionText = instructionText.text;

        // Validazione numero
        if (!int.TryParse(entered, out int number) ||
            !validValues.Contains(number))
        {
            numberInput.text = "";
            instructionText.text = "scegli numero valido!";

            ui.CurrentInputText = "";
            ui.CurrentInstructionText = instructionText.text;
            ui.ApplyOrientation();
            return;
        }

        // Invia numero al server
        StartCoroutine(SendNumberWhenFusionReady((byte)number));

        // Reset input locale
        numberInput.text = "";
        ui.CurrentInputText = "";
    }

    // ======================================================
    // SEND NUMBER → SERVER
    // ======================================================
    private IEnumerator SendNumberWhenFusionReady(byte number)
    {
        var runner = FusionBootstrap.RunnerInstance;
        var game   = FusionBootstrap.GameStateInstance;

        // Attende network pronto
        while (runner == null ||
               game == null ||
               !runner.IsRunning ||
               game.Object == null ||
               !game.Object.IsValid)
        {
            runner = FusionBootstrap.RunnerInstance;
            game   = FusionBootstrap.GameStateInstance;
            yield return null;
        }

        // RPC invio numero scelto
        game.RPC_SubmitChosenNumber(runner.LocalPlayer, number);
    }
}