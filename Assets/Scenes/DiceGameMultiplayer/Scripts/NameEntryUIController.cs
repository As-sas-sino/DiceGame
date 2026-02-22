using System.Collections;
using UnityEngine;
using TMPro;
using Fusion;

public class NameEntryUIController : MonoBehaviour
{
    // =========================
    // REFERENCES
    // =========================
    [Header("Flow")]
    [SerializeField] private LobbyUIController lobbyController; // opzionale

    private OrientationUIManagerMultiplayer ui;

    private const int MaxLen = 15;                         // Lunghezza massima nome
    private const string DefaultLabel = "Nome (max 15 caratteri)";

    // ======================================================
    // LIFECYCLE
    // ======================================================
    private void Awake()
    {
        ui = OrientationUIManagerMultiplayer.Instance;
    }

    private void OnEnable()
    {
        if (ui == null) ui = OrientationUIManagerMultiplayer.Instance;

        if (ui != null)
            ui.OnOrientationChanged += RebindAfterOrientation;

        RebindAfterOrientation();
        ForceClearInput();
        RefreshContinueInteractable();
    }

    private void OnDisable()
    {
        if (ui != null)
            ui.OnOrientationChanged -= RebindAfterOrientation;
    }

    // ======================================================
    // OPEN / CLOSE PANEL
    // ======================================================
    public void OpenNamePanel()
    {
        if (ui == null) ui = OrientationUIManagerMultiplayer.Instance;
        if (ui == null) return;

        ui.NameInputCached = "";
        ui.ShowNamePanel();

        RebindAfterOrientation();
        ForceClearInput();
        RefreshContinueInteractable();

        if (ui.NameInput != null)
            ui.NameInput.ActivateInputField();
    }

    public void CloseNamePanel()
    {
        if (ui == null) ui = OrientationUIManagerMultiplayer.Instance;
        if (ui == null) return;

        ui.HideNamePanel();
    }

    // ======================================================
    // ORIENTATION REBIND
    // ======================================================
    private void RebindAfterOrientation()
    {
        if (ui == null) return;

        // Label
        if (ui.NameLabelText != null)
            ui.NameLabelText.text = DefaultLabel;

        // Input
        if (ui.NameInput != null)
        {
            ui.NameInput.characterLimit = MaxLen;

            ui.NameInput.onValueChanged.RemoveAllListeners();
            ui.NameInput.onValueChanged.AddListener(OnNameChanged);

            if (ui.NameInput.text != (ui.NameInputCached ?? ""))
                ui.NameInput.SetTextWithoutNotify(ui.NameInputCached ?? "");
        }

        RefreshContinueInteractable();
    }

    // ======================================================
    // INPUT LOGIC
    // ======================================================
    private void ForceClearInput()
    {
        if (ui == null) return;

        ui.NameInputCached = "";

        if (ui.NameInput != null)
            ui.NameInput.SetTextWithoutNotify("");
    }

    private void OnNameChanged(string value)
    {
        if (ui == null || ui.NameInput == null) return;

        string sanitized = Sanitize(value);

        // Applica sanitizzazione
        if (sanitized != value)
        {
            ui.NameInput.SetTextWithoutNotify(sanitized);
            ui.NameInput.caretPosition = sanitized.Length;
        }

        ui.NameInputCached = sanitized;

        RefreshContinueInteractable();
    }

    private void RefreshContinueInteractable()
    {
        if (ui == null || ui.NameContinueButton == null) return;

        bool nameOk = !string.IsNullOrEmpty(GetSanitizedName());
        bool fusionOk = IsFusionReady();

        ui.NameContinueButton.interactable = nameOk && fusionOk;
    }

    private bool IsFusionReady()
    {
        var runner = FusionBootstrap.RunnerInstance;
        var lobby = FusionBootstrap.LobbyStateInstance;

        return (runner != null && lobby != null && runner.IsRunning);
    }

    private string GetSanitizedName()
    {
        if (ui == null || ui.NameInput == null) return "";
        return Sanitize(ui.NameInput.text);
    }

    private string Sanitize(string value)
    {
        string n = value ?? "";
        n = n.Trim();

        if (n.Length > MaxLen)
            n = n.Substring(0, MaxLen);

        return n;
    }

    // ======================================================
    // CONTINUE BUTTON
    // ======================================================
    public void OnContinue()
    {
        if (ui == null) ui = OrientationUIManagerMultiplayer.Instance;
        if (ui == null) return;

        string n = GetSanitizedName();
        if (string.IsNullOrEmpty(n)) return;

        // Chiude name panel
        ui.NameInputCached = "";
        CloseNamePanel();

        // Apre lobby
        if (lobbyController == null)
            lobbyController = FindObjectOfType<LobbyUIController>(true);

        if (lobbyController != null)
            lobbyController.OpenLobby();

        // Invia nome a Fusion
        StartCoroutine(SendNameWhenFusionReady(n));
    }

    // ======================================================
    // SEND NAME TO SERVER
    // ======================================================
    private IEnumerator SendNameWhenFusionReady(string n)
    {
        var runner = FusionBootstrap.RunnerInstance;
        var lobby = FusionBootstrap.LobbyStateInstance;

        // Attende network pronto
        while (runner == null ||
               lobby == null ||
               !runner.IsRunning ||
               lobby.Object == null ||
               !lobby.Object.IsValid)
        {
            runner = FusionBootstrap.RunnerInstance;
            lobby = FusionBootstrap.LobbyStateInstance;
            yield return null;
        }

        // RPC nome
        lobby.RPC_SetPlayerNameFor(runner.LocalPlayer, n);

        yield return null;

        // Refresh locale
        if (lobbyController == null)
            lobbyController = FindObjectOfType<LobbyUIController>(true);

        if (lobbyController != null)
            lobbyController.ForceRefreshNow();
    }
}