using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

public class StartGame : MonoBehaviour
{
    [Header("UI References")]
    public Button playButton;          // Pulsante iniziale "Gioca"
    public GameObject numberPanel;     // Pannello per la scelta del numero
    public TMP_Text instructionText;  // Testo scelta numero
    public TMP_InputField numberInput;// Campo input numero
    public Button readyButton;        // Pulsante "Pronto a giocare"

    [Header("Dice")]
    public DadoController dice;       // Riferimento al dado

    [Header("Result")]
    public ResultController resultController; // Riferimento risultato

    [Header("Terricula")]
    public TurriculaAnimation terricula; // Animazione di lancio


    // Valori validi per il dado
    private int[] validValues = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60 };

    private Tweener buttonTween; // Tween animazione del pulsante Gioca

    void Start()
    {
        // Mostra il pulsante Play e nasconde il pannello inserire numeri all'avvio
        playButton.gameObject.SetActive(true);
        numberPanel.SetActive(false);

        // Fai oscillare il pulsante Gioca su e giù
        buttonTween = playButton.transform
        .DOMoveY(playButton.transform.position.y + 0.05f, 1f) // movimento verso l’alto
        .SetLoops(-1, LoopType.Yoyo); // animazione continua
    }
    
    // Metodo chiamato quando viene premuto il pulsante "Gioca"
    public void OnGiocaClicked()
    {
        // Ferma l'animazione del pulsante Gioca
        if (buttonTween != null && buttonTween.IsActive())
        {
            buttonTween.Kill();

            // Riporta il pulsante alla posizione originale
            playButton.transform.position = new Vector3(
                playButton.transform.position.x, 
                playButton.transform.position.y - 0.05f,
                playButton.transform.position.z
            );
        }

        // Nasconde il pulsante Gioca e mostra il pannello inserire numeri
        playButton.gameObject.SetActive(false);
        numberPanel.SetActive(true);

        // Reset del testo inserisci numero all'apertura del pannello
        if (instructionText != null)
            instructionText.text = "Scegli numero";
    }

    // Metodo per confermare il numero scelto per il primo lancio
    public void OnProntoClicked()
    {
        string enteredNumber = numberInput.text;

        // Controlla se l'input è un numero
        if (int.TryParse(enteredNumber, out int number))
        {
            // Controllo se il numero è tra quelli validi
            bool isValid = false;
            foreach (int v in validValues)
            {
                if (number == v)
                {
                    isValid = true;
                    break;
                }
            }

            // Se il numero è valido
            if (isValid)
            {
                Debug.Log($"Numero scelto: {number}");

                // Nasconde il pannello inserire numeri
                numberPanel.SetActive(false);

                // Imposta il numero nel pannello risultato
                resultController.SetNumeroScelto(number);

                if (dice != null)
                {
                    // Avvia il lancio del dado
                    terricula.LaunchWithBowl();

                    // Reset testo e input di inserire numero
                    instructionText.text = "scegli numero:";
                    numberInput.text = "";
                }
            }
            else
            {
                // Numero non valido
                numberInput.text = ""; 
                instructionText.text = "scegli numero valido!";
            }
        }
        else
        {
            // Caso in cui non viene inserito un numero
            numberInput.text = ""; 
            instructionText.text = "scegli numero valido!";
        }
    }
}
