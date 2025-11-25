using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

public class StartGame : MonoBehaviour
{
    [Header("UI References")]
    public Button playButton;
    public GameObject numberPanel;
    public TMP_Text instructionText;
    public TMP_InputField numberInput;
    public Button readyButton; 

    [Header("Dice")]
    public DadoController dice;

    [Header("Result")]
    public ResultController resultController;

    [Header("Terricula")]
    public TurriculaAnimation terricula;


    // Valori validi per il dado
    private int[] validValues = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60 };

    private Tweener buttonTween;

    void Start()
    {
        playButton.gameObject.SetActive(true);
        numberPanel.SetActive(false);

        // Fai oscillare il pulsante su e giù
        buttonTween = playButton.transform
        .DOMoveY(playButton.transform.position.y + 0.05f, 1f) // muovi di 10 unità in 0.5s
        .SetLoops(-1, LoopType.Yoyo);
    }
    
    // Metodo per far partire il gioco
    public void OnGiocaClicked()
    {
        // Ferma l'animazione del pulsante
        if (buttonTween != null && buttonTween.IsActive())
        {
            buttonTween.Kill();
            playButton.transform.position = new Vector3(
                playButton.transform.position.x, 
                playButton.transform.position.y - 0.05f, // rimetti a posizione centrale
                playButton.transform.position.z
            );
        }

        playButton.gameObject.SetActive(false);
        numberPanel.SetActive(true);

        // Reset testo all’apertura del pannello
        if (instructionText != null)
            instructionText.text = "Scegli numero";
    }

    // Metodo per scegliere il numero per il primo lancio
    public void OnProntoClicked()
    {
        string enteredNumber = numberInput.text;

        if (int.TryParse(enteredNumber, out int number))
        {
            // Controllo se il numero è valido
            bool isValid = false;
            foreach (int v in validValues)
            {
                if (number == v)
                {
                    isValid = true;
                    break;
                }
            }

            if (isValid)
            {
                Debug.Log($"Numero scelto: {number}");
                numberPanel.SetActive(false);

                resultController.SetNumeroScelto(number);

                if (dice != null)
                {
                    terricula.LaunchWithBowl();
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
            // Non viene inserito un numero
            numberInput.text = ""; 
            instructionText.text = "scegli numero valido!";
        }
    }
}
