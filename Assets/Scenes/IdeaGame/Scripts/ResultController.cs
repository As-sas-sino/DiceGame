using UnityEngine;
using TMPro;
using UnityEngine.UI;
using DG.Tweening;

public class ResultController : MonoBehaviour
{
    [Header("Panels")]
    public GameObject resultPanel;
    public GameObject retryPanel;
    public GameObject numberPanel;

    [Header("Texts")]
    public TextMeshProUGUI resultTitleText;
    public TextMeshProUGUI resultValueText;
    public TextMeshProUGUI outcomeText;
    public TextMeshProUGUI retryText;

    [Header("Input and Buttons")]
    public TMP_InputField inputField;
    public Button retryButton;
    public Button finishButton;
    public GameObject playButton;
    public Button playAgainButton;

    [Header("Dice Position")]
    //public Vector3 diceStartPosition = new Vector3(135f, 68f, 155f);
    public Quaternion diceStartRotation = Quaternion.identity;

    [Header("Terricula")]
    public TurriculaAnimation terricula;

    private int chosenNumber;

    // Valori validi per il dado
    private int[] validValues = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60 };

    //variabili per animazioni DOTween
    private Tweener playButtonTween;
    private CanvasGroup resultCanvasGroup;

    private void Start()
    {
        resultPanel.SetActive(false);
        retryPanel.SetActive(false);

         // Prende o aggiunge il CanvasGroup al pannello del risultato
        resultCanvasGroup = resultPanel.GetComponent<CanvasGroup>();
        if (resultCanvasGroup == null)
            resultCanvasGroup = resultPanel.AddComponent<CanvasGroup>();

        resultCanvasGroup.alpha = 0f;
    }

    public void SetNumeroScelto(int number)
    {
        chosenNumber = number;
    }

    //Metodo per mostrare il risultato dal lancio del dado
    public void MostraRisultato(int result)
    {
        resultPanel.SetActive(true);
        // RESET ALPHA prima del fade
        resultCanvasGroup.alpha = 0f;

        // ANIMAZIONE FADE-IN  (da 0 a 1 in 1 secondo)
        resultCanvasGroup.DOFade(1f, 1f);

        resultValueText.text = result.ToString();

        if (result == chosenNumber)
        {
            outcomeText.text = "Hai Vinto!";
            outcomeText.color = new Color32(0, 180, 50, 255);
            retryPanel.SetActive(false);
            playAgainButton.gameObject.SetActive(true);
        }
        else
        {
            outcomeText.text = "Ritenta, sarai più fortunato!";
            outcomeText.color = new Color32(220, 0, 100, 255);
            retryPanel.SetActive(true);
            playAgainButton.gameObject.SetActive(false);
            inputField.text = "";
            retryText.text = "Scegli numero:";
        }
    }

    //Metodo per inserire un numero e ritentare il lancio
    private void OnRetryPressed()
    {
        string input = inputField.text;

        if (int.TryParse(input, out int newNumber))
        {
            //Controlla se il numero è valido
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
                //Numero non valido -> svuota input e mostra messaggio
                inputField.text = "";
                retryText.text = "Scegli numero valido!";
                return;
            }

            chosenNumber = newNumber;

            //Nascondi i pannelli di risultato
            resultPanel.SetActive(false);
            retryPanel.SetActive(false);

            //Trova il dado, anche se disattivato
            DadoController dice = FindAnyObjectByType<DadoController>(FindObjectsInactive.Include);

            if (dice != null)
            {
                //Spegni il dado
                dice.gameObject.SetActive(false);

                //Resetta posizione e rotazione prima del rilancio
                //dice.transform.position = diceStartPosition;
                dice.transform.rotation = Random.rotation;

                //Attiva il dado e rilancia direttamente
                terricula.LaunchWithBowl();  // <<< RILANCIO DELLA TURRICULA
            }
            else
            {
                Debug.LogError("❌ Nessun DadoController trovato nella scena!");
            }
        }
        else
        {
            //Non non viene inserito un numero
            inputField.text = "";
            retryText.text = "Scegli numero valido!";
        }
    }

    //Metodo per terminare la partita
    public void OnTerminaPressed()
    {
        //Chiudi pannelli
        resultPanel.SetActive(false);
        retryPanel.SetActive(false);

        //Riapri il pulsante play
         if (playButton != null)
        {
            playButton.SetActive(true);

            // Avvia l'animazione su/giù
            // Prima uccidiamo eventuali tween precedenti
            if (playButtonTween != null && playButtonTween.IsActive())
                playButtonTween.Kill();

            // Otteniamo la posizione iniziale
            float originalY = playButton.transform.position.y;

            playButtonTween = playButton.transform
                .DOMoveY(originalY + 0.05f, 1f)
                .SetLoops(-1, LoopType.Yoyo);
        }

        //Trova il dado anche se è disattivato
        DadoController dice = FindAnyObjectByType<DadoController>(FindObjectsInactive.Include);

        if (dice != null)
        {
            //Forza reset posizione e rotazione del dado
            //dice.transform.position = diceStartPosition;
            dice.transform.rotation = diceStartRotation;

            //Disattiva il dado
            dice.gameObject.SetActive(false);
        }
        else
        {
            Debug.LogError("❌ Nessun DadoController trovato nella scena!");
        }
    }


    //Metodo per giocare una nuova partita
    public void OnPlayAgainPressed()
    {
        //Chiudi pannelli risultato
        resultPanel.SetActive(false);
        retryPanel.SetActive(false);

        //Apri il pannello scelta numero
        numberPanel.SetActive(true);

        //Svuota il campo input
        inputField.text = "";
        retryText.text = "Scegli numero:";

        //Trova il dado anche se è disattivato
        DadoController dice = FindAnyObjectByType<DadoController>(FindObjectsInactive.Include);

        if (dice != null)
        {
            //Ripristina posizione originale del dado
            //dice.transform.position = diceStartPosition;
            dice.transform.rotation = diceStartRotation;

            //Disattiva il dado completamente
            dice.gameObject.SetActive(false);
        }
        else
        {
            Debug.LogError("❌ Nessun DadoController trovato nella scena!");
        }
    }
}
