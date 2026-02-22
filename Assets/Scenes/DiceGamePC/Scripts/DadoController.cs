using System.Collections;
using UnityEngine;

// Obbliga la presenza di Rigidbody e Collider sul GameObject
[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
public class DadoController : MonoBehaviour
{
    private Rigidbody rb;                  // RigidBody del dado
    private ResultController uiController; // Riferimento UI per mostrare il risultato

    [Header("Forces and rotation")]
    public float minLateralForce = 4f;     // Forza minima di lancio
    public float maxLateralForce = 8f;     // Forza massima di lancio
    public float minTorque = 20f;          // Forza minima di rotazione
    public float maxTorque = 50f;          // Forza massima di rotazione

    [Header("Bounces")]
    public float smallHitForce = 1f;       // Intensità dei piccoli colpetti
    public int numberOfHits = 3;           // Numero di colpetti
    public float hitInterval = 0.2f;       // Intervallo tra un colpetto e l'altro

    [Header("Control")]
    public float stopVelocityThreshold = 0.05f;    // Soglia velocità per considerare il dado fermo
    public float stopAngularThreshold = 0.05f;     // Soglia rotazione per considerare il dado fermo
    [SerializeField] private float initialCheckDelay = 1f;  // Ritardo iniziale prima dei controlli
    [SerializeField] private float stopDuration = 1.5f;     // Tempo minimo in cui deve restare fermo
    [SerializeField] private float maxWaitTime = 10f;        // Timeout massimo di sicurezza

    [Header("Initial X Range")]
    public float minX = 134f;
    public float maxX = 136f;

    [Header("Throw settings")]
    [SerializeField] private float throwRandomXRange = 0.3f; // Deviazione casuale su X
    [SerializeField] private float throwRandomZRange = 0.3f; // Deviazione casuale su Z
    [SerializeField] private float throwDownForce = -1f;     // Forza verso il basso

    [Header("Hit sound settings")]
    [SerializeField] private float hitVelocityThreshold = 3f; // Differenza di velocità per attivare il suono
    [SerializeField] private float minSoundInterval = 0.1f;   // Intervallo minimo tra i suoni
    [SerializeField] private float pitchMin = 0.9f;           // Pitch minimo suono
    [SerializeField] private float pitchMax = 1.1f;           // Pitch massimo suono

    private bool throwStarted = false;     // Blocca il lancio multiplo
    private AudioSource audioSource;       // AudioSource per il suono del dado

    // Variabili per il rilevamento dell'impatto
    private float lastVelocity = 0f;
    private float lastSoundTime = 0f;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();               // Recupera Rigidbody
        uiController = FindObjectOfType<ResultController>(); // Trova il controller UI
        audioSource = GetComponent<AudioSource>();    // Recupera AudioSource
    }

    // Chiamato per far comparire e lanciare il dado
    public void LanciaDado()
    {
        if (throwStarted) return;    // Evita doppi lanci
        throwStarted = true;

        if (!gameObject.activeSelf)
            gameObject.SetActive(true);

        // Reset fisica del dado
        rb.isKinematic = false;
        rb.linearVelocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;

        // Rotazione casuale iniziale
        transform.rotation = Random.rotation;

        // Spinta random verso il basso
        Vector3 throwDirection = new Vector3(
            Random.Range(-throwRandomXRange, throwRandomXRange),
            throwDownForce,
            Random.Range(-throwRandomZRange, throwRandomZRange)
        ).normalized;

        rb.AddForce(throwDirection * Random.Range(minLateralForce, maxLateralForce), ForceMode.Impulse);
        rb.AddTorque(Random.insideUnitSphere * Random.Range(minTorque, maxTorque), ForceMode.Impulse);

        // Avvia i colpetti e il controllo di arresto
        StartCoroutine(PiccoliColpetti());
        StartCoroutine(ControllaFermo());
    }

    // Metodi per dare dei colpetti al dado per renderlo più realistico
    private IEnumerator PiccoliColpetti()
    {
        for (int i = 0; i < numberOfHits; i++)
        {
            Vector3 hit = new Vector3(
                Random.Range(-smallHitForce, smallHitForce),
                0f,
                Random.Range(-smallHitForce, smallHitForce)
            );

            rb.AddForce(hit, ForceMode.Impulse);
            rb.AddTorque(Random.insideUnitSphere * smallHitForce, ForceMode.Impulse);
            yield return new WaitForSeconds(hitInterval);
        }
    }

    // Metodo per controllare quando si ferma il dado e dare il risultato
    private IEnumerator ControllaFermo()
    {
        // Aspetta prima di iniziare a controllare
        yield return new WaitForSeconds(initialCheckDelay);

        // Timeout di sicurezza
        float elapsedTime = 0f;

        // Aspetta finché il dado NON è ancora fermo
        while ((rb.linearVelocity.magnitude > stopVelocityThreshold ||
                rb.angularVelocity.magnitude > stopAngularThreshold)
                && elapsedTime < maxWaitTime)
        {
            elapsedTime += Time.fixedDeltaTime;
            yield return new WaitForFixedUpdate();
        }

        // Aspettiamo che il dado resti fermo per almeno stopDuration
        float stoppedTime = 0f;
        while (stoppedTime < stopDuration && elapsedTime < maxWaitTime)
        {
            if (rb.linearVelocity.magnitude < stopVelocityThreshold &&
                rb.angularVelocity.magnitude < stopAngularThreshold)
            {
                stoppedTime += Time.fixedDeltaTime;  // Sta fermo → accumula tempo
            }
            else
            {
                stoppedTime = 0f;                    // Si muove → reset timer
            }

            elapsedTime += Time.fixedDeltaTime;
            yield return new WaitForFixedUpdate();
        }

        // Se viene superato il timeout di sicurezza, si forza il risultato
        if (elapsedTime >= maxWaitTime)
        {
            Debug.LogWarning("⚠️ Timeout: dado bloccato, calcolo risultato forzato.");
        }

        int topSide = CalcolaLato();
        Debug.Log($"🎲 Dado fermo! Lato superiore: {topSide}");

        throwStarted = false;

        // Invia il risultato all'interfaccia
        if (uiController != null)
            uiController.MostraRisultato(topSide);
    }

    // Metodo per calcolare il lato superiore restituito dal lancio
    private int CalcolaLato()
    {
        DiceSide[] sides = GetComponentsInChildren<DiceSide>();
        DiceSide topSide = sides[0];

        // Confronta la posizione in Y per trovare la faccia più alta
        foreach (var side in sides)
        {
            if (side.transform.position.y > topSide.transform.position.y)
                topSide = side;
        }

        return topSide.value;
    }

    // --------- Metodi per il suono all'impatto col tavolo ---------
    private void FixedUpdate()
    {
        float currentVelocity = rb.linearVelocity.magnitude;

        // Se la variazione di velocità è elevata → possibile impatto
        if (Mathf.Abs(currentVelocity - lastVelocity) > hitVelocityThreshold)
        {
            PlayHitSound();
        }

        lastVelocity = currentVelocity;
    }

    private void PlayHitSound()
    {
        if (audioSource == null || audioSource.clip == null)
            return;

        // Evita lo spam continuo di suoni
        if (Time.time - lastSoundTime < minSoundInterval)
            return;

        lastSoundTime = Time.time;

        audioSource.pitch = Random.Range(pitchMin, pitchMax);
        audioSource.PlayOneShot(audioSource.clip);
    }
}
