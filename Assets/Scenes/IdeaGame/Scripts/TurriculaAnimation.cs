using UnityEngine;
using DG.Tweening;
using System.Collections;

public class TurriculaAnimation : MonoBehaviour
{
    [Header("Random Position Settings")]
    [SerializeField] private float minX = 134.0f; 
    [SerializeField] private float maxX = 136.0f; 

    [Header("Tilt Settings")]
    [SerializeField] private float rightTiltAngle = 110f; // Angolo inclinazione destra
    [SerializeField] private float tiltDuration = 0.8f;  // Durata inclinazione

    [Header("Full Flip Settings")]
    [SerializeField] private float fullFlipAngle = 180f;   // Rotazione completa
    [SerializeField] private float fullFlipDuration = 1.5f;// Durata rotazione completa

    [Header("Pre-Spin Settings")]
    [SerializeField] private float spinDuration = 0.6f;  // Durata rotazione iniziale
    [SerializeField] private float spinAngle = 140f;     // Angolo rotazione iniziale

    [Header("Dice Reference")]
    public DadoController dice;   // Riferimento al dado
    public Transform spawnPoint; // Punto di rilascio del dado

    [Header("Audio Settings")]
    [SerializeField] private AudioSource preSpinAudio; // Suono pre-rotazione

    private Vector3 initialPosition;     // Posizione iniziale della turricula
    private Vector3 initialLocalEuler;   // Rotazione iniziale della turricula

    private void Awake()
    {
        // Salvataggio posizione e rotazione iniziale
        initialPosition = transform.position;
        initialLocalEuler = transform.localEulerAngles;
    }

    // Metodo principale per far partire l'animazione della turricula
    public void LaunchWithBowl()
    {
        gameObject.SetActive(true);

        // Posizionamento casuale lungo l'asse X
        float randomX = Random.Range(minX, maxX);
        transform.position = new Vector3(randomX, transform.position.y, transform.position.z);

        // Reset rotazione
        transform.localEulerAngles = initialLocalEuler;

        // Nasconde temporaneamente il dado
        dice.gameObject.SetActive(false);

        // Pre-animazione prima del rilascio
        PlayPreSpinAnimation(() =>
        {
            // In base alla posizione X decide che animazione fare
            if (randomX < 134.6f)
                PlayRightTilt();
            else if (randomX > 135.4f)
                PlayLeftTilt();
            else
                PlayFullFlip();
        });
    }

    // Animazione di pre-rotazione con oscillazione
    private void PlayPreSpinAnimation(System.Action onComplete)
    {
        // Ripristina rotazione iniziale
        transform.localEulerAngles = initialLocalEuler;

        float spinTime = spinDuration * 1.8f;  // durata pre-spin più lunga
        float oscillationAmplitude = 12f;      // ampiezza oscillazione
        int oscillationCount = 4;              // numero oscillazioni

        // 🔊 Avvia il suono del pre-spin
        if (preSpinAudio != null)
        {
            preSpinAudio.loop = true;
            preSpinAudio.Play();
        }

        // Sequenza Tween principale
        Sequence seq = DOTween.Sequence();

        // Rotazione continua sullo Y
        seq.Append(
            transform.DOBlendableRotateBy(new Vector3(0f, spinAngle * 1.3f, 0f), spinTime)
                .SetEase(Ease.Linear)
        );

        // Oscillazione destra-sinistra sull'asse Z
        seq.Join(
            transform.DOBlendableRotateBy(new Vector3(0f, 0f, oscillationAmplitude), spinTime / oscillationCount / 2f)
                .SetLoops(oscillationCount * 2, LoopType.Yoyo)
                .SetEase(Ease.InOutSine)
        );

        // Ritorna alla rotazione iniziale alla fine
        seq.Join(
            transform.DOLocalRotate(initialLocalEuler, 0.2f).SetDelay(spinTime)
        );

        // Quando termina l'animazione
        seq.OnComplete(() => 
        {
            // 🔇 Ferma il suono
            if (preSpinAudio != null)
                preSpinAudio.Stop();

            // Esegue l'animazione successiva
            onComplete?.Invoke();
        });
    }

    // Inclinazione verso destra
    private void PlayRightTilt()
    {
        Vector3 target = initialLocalEuler + new Vector3(0f, 0f, -rightTiltAngle);

        transform.DOLocalRotate(target, tiltDuration, RotateMode.Fast)
                 .SetEase(Ease.OutCubic)
                 .OnComplete(ReleaseDice);
    }

    // Inclinazione verso sinistra
    private void PlayLeftTilt()
    {
        Vector3 target = initialLocalEuler + new Vector3(0f, 0f, rightTiltAngle);

        transform.DOLocalRotate(target, tiltDuration, RotateMode.Fast)
                 .SetEase(Ease.OutCubic)
                 .OnComplete(ReleaseDice);
    }

    // Rotazione completa
    private void PlayFullFlip()
    {
        Vector3 target = initialLocalEuler + new Vector3(0f, 0f, fullFlipAngle);

        transform.DOLocalRotate(target, fullFlipDuration, RotateMode.FastBeyond360)
                 .SetEase(Ease.OutBack)
                 .OnComplete(ReleaseDice);
    }

    // Rilascio del dado
    private void ReleaseDice()
    {
        // Posiziona il dado nel punto di rilascio
        dice.transform.position = spawnPoint.position;
        dice.transform.rotation = spawnPoint.rotation;

        // Attiva il dado e avvia il lancio
        dice.gameObject.SetActive(true);
        dice.LanciaDado();

        // Nasconde la turricula dopo 1 secondo
        Invoke(nameof(HideBowl), 1f);
    }

    // Spegne completamente la turricula
    private void HideBowl()
    {
        gameObject.SetActive(false);
    }
}
