using UnityEngine;
using DG.Tweening;
using System.Collections;

public class TurriculaAnimationAR : MonoBehaviour
{
    [Header("Random Position Settings")]
    [SerializeField] private float minX = -0.34f; //Posizione massima e minima asso x del tavolo
    [SerializeField] private float maxX = 0.34f; 

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
    public DadoControllerAR dice;  // Riferimento al dado da lanciare
    public Transform spawnPoint;   // Punto in cui il dado sarà riposizionato prima del lancio

    [Header("Audio Settings")]
    [SerializeField] private AudioSource preSpinAudio; // Audio da riprodurre durante pre-spin

    private Vector3 initialPosition;    // Posizione iniziale della turricula (world)
    private Vector3 initialLocalEuler;  // Rotazione iniziale della turricula

    // ➕ AGGIUNTA: riferimenti LOCALI per reset stabile in AR
    private Vector3 initialLocalPosition;
    private Quaternion initialLocalRotation;

    private void Awake()
    {
        // Salva posizione e rotazione iniziale per ripristini
        initialPosition = transform.position;
        initialLocalEuler = transform.localEulerAngles;

        // ➕ AGGIUNTA: salvataggio locale (fondamentale in AR)
        initialLocalPosition = transform.localPosition;
        initialLocalRotation = transform.localRotation;
    }

    // Metodo per lanciare il dado con la turricula
    public void LaunchWithBowl(Transform tableAnchor = null)
    {
        gameObject.SetActive(true);

        // 🔧 MODIFICA: reset TOTALE prima di ogni lancio
        DOTween.Kill(transform);
        transform.localPosition = initialLocalPosition;
        transform.localRotation = initialLocalRotation;

        // 🔧 MODIFICA: offset SOLO in local space (niente world space)
        float randomX = Random.Range(minX, maxX);
        transform.localPosition = initialLocalPosition + new Vector3(randomX, 0f, 0f);

        // Nasconde il dado all'interno della turricula
        dice.gameObject.SetActive(false);

        // Animazione pre-spin e successivo flip
        PlayPreSpinAnimation(() =>
        {
            // Flip deciso in base all'offset locale
            if (randomX < -0.18f)
                PlayRightTilt();   // Flip destro
            else if (randomX > 0.18f)
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
        // 🔧 MODIFICA: parent corretto e reset locale
        dice.transform.SetParent(spawnPoint, false);
        dice.transform.localPosition = Vector3.zero;
        dice.transform.localRotation = Quaternion.identity;

        dice.gameObject.SetActive(true);
        dice.LanciaDado();

        Invoke(nameof(HideBowl), 1f);
    }

    // Nasconde la turricula
    private void HideBowl()
    {
        // 🔧 MODIFICA: reset prima di disattivare (evita drift accumulato)
        DOTween.Kill(transform);
        transform.localPosition = initialLocalPosition;
        transform.localRotation = initialLocalRotation;

        gameObject.SetActive(false);
    }
}
