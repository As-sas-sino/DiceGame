using UnityEngine;
using DG.Tweening;
using System.Collections;

public class TurriculaAnimation : MonoBehaviour
{
    [Header("Random Position Settings")]
    [SerializeField] private float minX = 134.0f;
    [SerializeField] private float maxX = 136.0f;

    [Header("Tilt Settings")]
    [SerializeField] private float rightTiltAngle = 110f;
    [SerializeField] private float tiltDuration = 0.8f;

    [Header("Full Flip Settings")]
    [SerializeField] private float fullFlipAngle = 180f;
    [SerializeField] private float fullFlipDuration = 1.5f;

    [Header("Pre-Spin Settings")]
    [SerializeField] private float shakeDuration = 0.4f;
    [SerializeField] private float shakeStrength = 8f;
    [SerializeField] private float spinDuration = 0.6f;
    [SerializeField] private float spinAngle = 140f;

    [Header("Dice Reference")]
    public DadoController dice;
    public Transform spawnPoint;

    [Header("Audio Settings")]
    [SerializeField] private AudioSource preSpinAudio;

    private Vector3 initialPosition;
    private Vector3 initialLocalEuler;

    private void Awake()
    {
        initialPosition = transform.position;
        initialLocalEuler = transform.localEulerAngles;
    }

    public void LaunchWithBowl()
    {
        gameObject.SetActive(true);

        float randomX = Random.Range(minX, maxX);
        transform.position = new Vector3(randomX, transform.position.y, transform.position.z);

        transform.localEulerAngles = initialLocalEuler;

        // Teletrasporto il dado dentro la turricula
        dice.gameObject.SetActive(false);
        

        // Pre-Spin
        PlayPreSpinAnimation(() =>
        {
            if (randomX < 134.6f)
                PlayRightTilt();
            else if (randomX > 135.4f)
                PlayLeftTilt();
            else
                PlayFullFlip();
        });
    }

    private void PlayPreSpinAnimation(System.Action onComplete)
    {
        // Ripristino rotazione
        transform.localEulerAngles = initialLocalEuler;

        float spinTime = spinDuration * 1.8f;  // preanimazione più lunga e fluida
        float oscillationAmplitude = 12f;      // gradi di inclinazione
        int oscillationCount = 4;              // numero oscillazioni destro-sinistra

         // 🔊 AVVIA SUONO
        if (preSpinAudio != null)
        {
            preSpinAudio.loop = true;
            preSpinAudio.Play();
        }

        // Sequenza principale
        Sequence seq = DOTween.Sequence();

        seq.Append(
            transform.DOBlendableRotateBy(new Vector3(0f, spinAngle * 1.3f, 0f), spinTime)
                .SetEase(Ease.Linear)
        );

        seq.Join(
            transform.DOBlendableRotateBy(new Vector3(0f, 0f, oscillationAmplitude), spinTime / oscillationCount / 2f)
                .SetLoops(oscillationCount * 2, LoopType.Yoyo)
                .SetEase(Ease.InOutSine)
        );

        // Riporta alla rotazione iniziale al termine
        seq.Join(
            transform.DOLocalRotate(initialLocalEuler, 0.2f).SetDelay(spinTime)
        );

        seq.OnComplete(() => 
        {
            // 🔇 FERMA SUONO
            if (preSpinAudio != null)
                preSpinAudio.Stop();

            onComplete?.Invoke();
        });
    }

    private void PlayRightTilt()
    {
        Vector3 target = initialLocalEuler + new Vector3(0f, 0f, -rightTiltAngle);

        transform.DOLocalRotate(target, tiltDuration, RotateMode.Fast)
                 .SetEase(Ease.OutCubic)
                 .OnComplete(ReleaseDice);
    }

    private void PlayLeftTilt()
    {
        Vector3 target = initialLocalEuler + new Vector3(0f, 0f, rightTiltAngle);

        transform.DOLocalRotate(target, tiltDuration, RotateMode.Fast)
                 .SetEase(Ease.OutCubic)
                 .OnComplete(ReleaseDice);
    }

    private void PlayFullFlip()
    {
        Vector3 target = initialLocalEuler + new Vector3(0f, 0f, fullFlipAngle);

        transform.DOLocalRotate(target, fullFlipDuration, RotateMode.FastBeyond360)
                 .SetEase(Ease.OutBack)
                 .OnComplete(ReleaseDice);
    }

    private void ReleaseDice()
    {
        dice.transform.position = spawnPoint.position;
        dice.transform.rotation = spawnPoint.rotation;
        dice.gameObject.SetActive(true);
        dice.LanciaDado();

        Invoke(nameof(HideBowl), 1f);
    }

    private void HideBowl()
    {
        gameObject.SetActive(false);
    }

}
