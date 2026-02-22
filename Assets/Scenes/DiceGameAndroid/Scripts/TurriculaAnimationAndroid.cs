using UnityEngine;
using DG.Tweening;
using System.Collections;

public class TurriculaAnimationAndroid : MonoBehaviour
{
    [Header("Random Position Settings")]
    [SerializeField] private float minX = 134.0f; 
    [SerializeField] private float maxX = 136.0f; 

    [Header("Tilt Settings")]
    [SerializeField] private float rightTiltAngle = 110f; // Angolo di inclinazione laterale
    [SerializeField] private float tiltDuration = 0.8f;   // Durata animazione tilt

    [Header("Full Flip Settings")]
    [SerializeField] private float fullFlipAngle = 180f;  // Angolo di rotazione completa
    [SerializeField] private float fullFlipDuration = 1.5f; // Durata animazione flip completo

    [Header("Pre-Spin Settings")]
    [SerializeField] private float shakeDuration = 0.4f;  // Durata shaking iniziale
    [SerializeField] private float shakeStrength = 8f;    // Intensità shaking
    [SerializeField] private float spinDuration = 0.6f;   // Durata animazione spin pre-lancio
    [SerializeField] private float spinAngle = 140f;      // Angolo di spin pre-lancio

    [Header("Dice Reference")]
    public DadoControllerAndroid dice;  // Riferimento al dado da lanciare
    public Transform spawnPoint;        // Punto in cui il dado sarà riposizionato prima del lancio

    [Header("Audio Settings")]
    [SerializeField] private AudioSource preSpinAudio; // Audio da riprodurre durante pre-spin

    private Vector3 initialPosition;    // Posizione iniziale della turricula
    private Vector3 initialLocalEuler;  // Rotazione iniziale della turricula

    private void Awake()
    {
        // Salva posizione e rotazione iniziale per ripristini
        initialPosition = transform.position;
        initialLocalEuler = transform.localEulerAngles;
    }

    // Metodo per lanciare il dado con la turricula
    public void LaunchWithBowl()
    {
        gameObject.SetActive(true);

        // Posizione casuale lungo X
        float randomX = Random.Range(minX, maxX);
        transform.position = new Vector3(randomX, transform.position.y, transform.position.z);

        transform.localEulerAngles = initialLocalEuler;

        // Nasconde il dado all'interno della turricula
        dice.gameObject.SetActive(false);

        // Animazione pre-spin e successivo flip
        PlayPreSpinAnimation(() =>
        {
            if (randomX < 134.6f)
                PlayRightTilt();   // Flip destro
            else if (randomX > 135.4f)
                PlayLeftTilt();    // Flip sinistro
            else
                PlayFullFlip();    // Flip completo
        });
    }

    // Animazione pre-spin prima del flip
    private void PlayPreSpinAnimation(System.Action onComplete)
    {
        transform.localEulerAngles = initialLocalEuler; // Ripristina rotazione iniziale

        float spinTime = spinDuration * 1.8f;  // Durata animazione più fluida
        float oscillationAmplitude = 12f;      // Ampiezza oscillazioni destro-sinistra
        int oscillationCount = 4;              // Numero oscillazioni

        // 🔊 Riproduce audio pre-spin
        if (preSpinAudio != null)
        {
            preSpinAudio.loop = true;
            preSpinAudio.Play();
        }

        // Sequenza DOTween per spin + oscillazioni
        Sequence seq = DOTween.Sequence();

        // Rotazione principale
        seq.Append(
            transform.DOBlendableRotateBy(new Vector3(0f, spinAngle * 1.3f, 0f), spinTime)
                .SetEase(Ease.Linear)
        );

        // Oscillazioni destro-sinistra
        seq.Join(
            transform.DOBlendableRotateBy(new Vector3(0f, 0f, oscillationAmplitude), spinTime / oscillationCount / 2f)
                .SetLoops(oscillationCount * 2, LoopType.Yoyo)
                .SetEase(Ease.InOutSine)
        );

        // Ripristina rotazione iniziale
        seq.Join(
            transform.DOLocalRotate(initialLocalEuler, 0.2f).SetDelay(spinTime)
        );

        // Fine sequenza → ferma audio e chiama callback
        seq.OnComplete(() => 
        {
            if (preSpinAudio != null)
                preSpinAudio.Stop();

            onComplete?.Invoke();
        });
    }

    // Animazione Flip destro
    private void PlayRightTilt()
    {
        Vector3 target = initialLocalEuler + new Vector3(0f, 0f, -rightTiltAngle);

        transform.DOLocalRotate(target, tiltDuration, RotateMode.Fast)
                 .SetEase(Ease.OutCubic)
                 .OnComplete(ReleaseDice); // Rilascia dado al termine
    }

    // Animazione Flip sinistro
    private void PlayLeftTilt()
    {
        Vector3 target = initialLocalEuler + new Vector3(0f, 0f, rightTiltAngle);

        transform.DOLocalRotate(target, tiltDuration, RotateMode.Fast)
                 .SetEase(Ease.OutCubic)
                 .OnComplete(ReleaseDice);
    }

    // Animazione Flip completo
    private void PlayFullFlip()
    {
        Vector3 target = initialLocalEuler + new Vector3(0f, 0f, fullFlipAngle);

        transform.DOLocalRotate(target, fullFlipDuration, RotateMode.FastBeyond360)
                 .SetEase(Ease.OutBack)
                 .OnComplete(ReleaseDice);
    }

    // Riposiziona il dado dalla turricula e lo lancia
    private void ReleaseDice()
    {
        dice.transform.position = spawnPoint.position;
        dice.transform.rotation = spawnPoint.rotation;
        dice.gameObject.SetActive(true);
        dice.LanciaDado();

        // Nasconde la turricula dopo 1 secondo
        Invoke(nameof(HideBowl), 1f);
    }

    // Nasconde la turricula
    private void HideBowl()
    {
        gameObject.SetActive(false);
    }
}
