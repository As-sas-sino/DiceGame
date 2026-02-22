using UnityEngine;
using TMPro;
using UnityEngine.UI;
using DG.Tweening;

public class ResultController : MonoBehaviour
{
    [Header("Panels")]
    public GameObject resultPanel;   // Pannello che mostra il risultato
    public GameObject retryPanel;    // Pannello per rilanciare
    public GameObject numberPanel;   // Pannello per scegliere il numero

    [Header("Texts")]
    public TextMeshProUGUI resultTitleText;  // Titolo del risultato
    public TextMeshProUGUI resultValueText;  // Valore del dado
    public TextMeshProUGUI outcomeText;      // Testo vittoria/sconfitta
    public TextMeshProUGUI retryText;        // Testo del scelta numero del rilancio

    [Header("Input and Buttons")]
    public TMP_InputField inputField;  // Campo input per inserire il numero
    public Button retryButton;         // Bottone per ritentare
    public Button finishButton;        // Bottone termina partita
    public GameObject playButton;      // Bottone gioca iniziale
    public Button playAgainButton;     // Bottone gioca di nuovo

    [Header("Dice Position")]
    public Quaternion diceStartRotation = Quaternion.identity; // Rotazione iniziale del dado

    [Header("Terricula")]
    public TurriculaAnimation terricula; // Animazione del lancio

    private int chosenNumber; // Numero scelto dal giocatore

    // Valori validi per il dado
    private int[] validValues = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60 };

    // Variabili per le animazioni con DOTween
    private Tweener playButtonTween;
    private CanvasGroup resultCanvasGroup;

    private void Start()
    {
        // Nasconde i pannelli all'avvio
        resultPanel.SetActive(false);
        retryPanel.SetActive(false);

        // Prende o aggiunge il CanvasGroup al pannello del risultato 
        resultCanvasGroup = resultPanel.GetComponent<CanvasGroup>();
        if (resultCanvasGroup == null)
            resultCanvasGroup = resultPanel.AddComponent<CanvasGroup>();

        resultCanvasGroup.alpha = 0f; // Imposta trasparente all'inizio
    }

    // Imposta il numero scelto dal giocatore
    public void SetNumeroScelto(int number)
    {
        chosenNumber = number;
    }

    // Metodo per mostrare il risultato del lancio del dado
    public void MostraRisultato(int result)
    {
        resultPanel.SetActive(true);

        // Reset alpha della trasparenza
        resultCanvasGroup.alpha = 0f;

        // Animazione trasparenza (da 0 a 1 in 1 secondo)
        resultCanvasGroup.DOFade(1f, 1f);

        // Mostra il numero uscito
        resultValueText.text = result.ToString();

        // Caso vittoria
        if (result == chosenNumber)
        {
            outcomeText.text = "Hai Vinto!";
            outcomeText.color = new Color32(0, 180, 50, 255); // Verde
            retryPanel.SetActive(false);
            playAgainButton.gameObject.SetActive(true);
        }
        // Caso sconfitta
        else
        {
            outcomeText.text = "Ritenta, sarai più fortunato!";
            outcomeText.color = new Color32(220, 0, 100, 255); // Rosso
            retryPanel.SetActive(true);
            playAgainButton.gameObject.SetActive(false);

            // Reset input e testo pannello per ritentare
            inputField.text = "";
            retryText.text = "Scegli numero:";
        }
    }

    // Metodo per inserire un numero e ritentare il lancio
    public void OnRetryPressed()
    {
        string input = inputField.text;

        // Controlla se l'input è un numero valido
        if (int.TryParse(input, out int newNumber))
        {
            // Controlla se il numero appartiene ai valori consentiti
            bool isValid = false;
            foreach (int v in validValues)
            {
                if (newNumber == v)
                {
                    isValid = true;
                    Debug.Log($"Numero scelto: {newNumber}");
                    break;
                }
            }

            if (!isValid)
            {
                // Numero non valido → reset input e messaggio di errore
                inputField.text = "";
                retryText.text = "Scegli numero valido!";
                return;
            }

            chosenNumber = newNumber;

            // Nasconde i pannelli risultato
            resultPanel.SetActive(false);
            retryPanel.SetActive(false);

            // Trova il dado, anche se è disattivato
            DadoController dice = FindAnyObjectByType<DadoController>(FindObjectsInactive.Include);

            if (dice != null)
            {
                // Spegne il dado
                dice.gameObject.SetActive(false);

                // Reset rotazione prima del rilancio
                dice.transform.rotation = Random.rotation;

                // Rilancia il dado tramite la turricula
                terricula.LaunchWithBowl();
            }
            else
            {
                Debug.LogError("❌ Nessun DadoController trovato nella scena!");
            }
        }
        else
        {
            // Se non viene inserito un numero valido reset campi
            inputField.text = "";
            retryText.text = "Scegli numero valido!";
        }
    }

    // Metodo per terminare la partita
    public void OnTerminaPressed()
    {
        // Chiude i pannelli
        resultPanel.SetActive(false);
        retryPanel.SetActive(false);

        // Riapre il pulsante gioca con animazione
        if (playButton != null)
        {
            playButton.SetActive(true);

            // Uccide eventuali tween precedenti
            if (playButtonTween != null && playButtonTween.IsActive())
                playButtonTween.Kill();

            float originalY = playButton.transform.position.y;

            playButtonTween = playButton.transform
                .DOMoveY(originalY + 0.05f, 1f)
                .SetLoops(-1, LoopType.Yoyo);
        }

        // Trova il dado anche se è disattivato
        DadoController dice = FindAnyObjectByType<DadoController>(FindObjectsInactive.Include);

        if (dice != null)
        {
            // Reset rotazione del dado
            dice.transform.rotation = diceStartRotation;

            // Disattiva il dado
            dice.gameObject.SetActive(false);
        }
        else
        {
            Debug.LogError("❌ Nessun DadoController trovato nella scena!");
        }
    }

    // Metodo per giocare una nuova partita
    public void OnPlayAgainPressed()
    {
        // Chiude i pannelli risultato
        resultPanel.SetActive(false);
        retryPanel.SetActive(false);

        // Apre il pannello scelta numero
        numberPanel.SetActive(true);

        // Reset input e testo del pannello scelta numero
        inputField.text = "";
        retryText.text = "Scegli numero:";

        // Trova il dado anche se è disattivato
        DadoController dice = FindAnyObjectByType<DadoController>(FindObjectsInactive.Include);

        if (dice != null)
        {
            // Reset rotazione del dado
            dice.transform.rotation = diceStartRotation;

            // Disattiva completamente il dado
            dice.gameObject.SetActive(false);
        }
        else
        {
            Debug.LogError("❌ Nessun DadoController trovato nella scena!");
        }
    }
}
