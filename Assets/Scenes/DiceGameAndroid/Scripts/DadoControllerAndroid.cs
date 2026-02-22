using System.Collections;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
public class DadoControllerAndroid : MonoBehaviour
{
    private Rigidbody rb;                       // Rigidbody del dado, usato per gestire fisica e forze

private ResultControllerAndroid uiController;   // Riferimento al controller UI che mostra il risultato finale

[Header("Forces and rotation")]
public float minLateralForce = 4f;              // Forza minima applicata al lancio del dado
public float maxLateralForce = 8f;              // Forza massima applicata al lancio del dado
public float minTorque = 20f;                   // Rotazione minima applicata al lancio
public float maxTorque = 50f;                   // Rotazione massima applicata al lancio

[Header("Bounces")]
public float smallHitForce = 1f;                // Intensità dei piccoli colpi casuali sul dado
public int numberOfHits = 3;                    // Numero di colpetti applicati dopo il lancio
public float hitInterval = 0.2f;                // Tempo tra un colpo e il successivo

[Header("Control")]
public float stopVelocityThreshold = 0.05f;            // Velocità sotto la quale il dado è considerato fermo
public float stopAngularThreshold = 0.05f;             // Rotazione sotto la quale il dado è considerato fermo
[SerializeField] private float initialCheckDelay = 1f; // Tempo prima di iniziare a controllare se il dado si è fermato
[SerializeField] private float stopDuration = 1.5f;    // Tempo per cui il dado deve restare fermo prima di validare il risultato
[SerializeField] private float maxWaitTime = 10f;      // Timeout massimo di sicurezza per forzare il risultato

[Header("Initial X Range")]
public float minX = 134f;                       // Limite minimo sull’asse X per la posizione iniziale
public float maxX = 136f;                       // Limite massimo sull’asse X per la posizione iniziale

[Header("Throw settings")]
[SerializeField] private float throwRandomXRange = 0.3f;  // Offset casuale sull’asse X per la direzione del lancio
[SerializeField] private float throwRandomZRange = 0.3f;  // Offset casuale sull’asse Z per la direzione del lancio
[SerializeField] private float throwDownForce = -1f;      // Forza verticale verso il basso applicata al lancio

[Header("Hit sound settings")]
[SerializeField] private float hitVelocityThreshold = 3f; // Differenza di velocità necessaria per considerare un impatto
[SerializeField] private float minSoundInterval = 0.1f;   // Tempo minimo tra due suoni di impatto consecutivi
[SerializeField] private float pitchMin = 0.9f;           // Pitch minimo del suono
[SerializeField] private float pitchMax = 1.1f;           // Pitch massimo del suono

private bool throwStarted = false;   // Impedisce che il dado venga lanciato più volte contemporaneamente

private AudioSource audioSource;     // Sorgente audio per il suono dell’impatto

// Sound variables
private float lastVelocity = 0f;     // Velocità del frame precedente (per rilevare l’impatto)
private float lastSoundTime = 0f;    // Ultimo momento in cui è stato riprodotto il suono

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();                           // Recupera il Rigidbody
        uiController = FindObjectOfType<ResultControllerAndroid>(); // Trova il controller UI
        audioSource = GetComponent<AudioSource>();               // Recupera l'audio
    }

    // Chiamato per far comparire e lanciare il dado
    public void LanciaDado()
    {
        if (throwStarted) return;   // Evita rilanci mentre il dado è già in movimento
        throwStarted = true;

        // Attiva il dado se era disattivato
        if (!gameObject.activeSelf)
            gameObject.SetActive(true);

        // Reset fisica del dado
        rb.isKinematic = false;
        rb.linearVelocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;

        // Imposta una rotazione iniziale casuale
        transform.rotation = Random.rotation;

        // Spinta randomizzata verso il basso e lateralmente
        Vector3 throwDirection = new Vector3(
            Random.Range(-throwRandomXRange, throwRandomXRange),
            throwDownForce,
            Random.Range(-throwRandomZRange, throwRandomZRange)
        ).normalized;

        // Aggiunge forza e rotazione
        rb.AddForce(throwDirection * Random.Range(minLateralForce, maxLateralForce), ForceMode.Impulse);
        rb.AddTorque(Random.insideUnitSphere * Random.Range(minTorque, maxTorque), ForceMode.Impulse);

        // Avvia effetti secondari e controlli
        StartCoroutine(PiccoliColpetti());
        StartCoroutine(ControllaFermo());
    }

    // Metodo per dare dei piccoli colpi al dado per renderlo più realistico
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

    // Metodo per controllare quando il dado si ferma e calcolare il risultato
    private IEnumerator ControllaFermo()
    {
        // Aspetta prima di iniziare i controlli
        yield return new WaitForSeconds(initialCheckDelay);

        float elapsedTime = 0f;   // Timeout di sicurezza

        // Attende finché il dado è ancora in movimento
        while ((rb.linearVelocity.magnitude > stopVelocityThreshold ||
                rb.angularVelocity.magnitude > stopAngularThreshold)
                && elapsedTime < maxWaitTime)
        {
            elapsedTime += Time.fixedDeltaTime;
            yield return new WaitForFixedUpdate();
        }

        // Verifica che il dado resti fermo per almeno stopDuration
        float stoppedTime = 0f;
        while (stoppedTime < stopDuration && elapsedTime < maxWaitTime)
        {
            if (rb.linearVelocity.magnitude < stopVelocityThreshold &&
                rb.angularVelocity.magnitude < stopAngularThreshold)
            {
                stoppedTime += Time.fixedDeltaTime;  // Sta fermo → aumenta timer
            }
            else
            {
                stoppedTime = 0f;                    // Si muove → reset
            }

            elapsedTime += Time.fixedDeltaTime;
            yield return new WaitForFixedUpdate();
        }

        // Se viene superato il timeout, forza comunque il risultato
        if (elapsedTime >= maxWaitTime)
        {
            Debug.LogWarning("⚠️ Timeout: dado bloccato, calcolo risultato forzato.");
        }

        int topSide = CalcolaLato();
        Debug.Log($"🎲 Dado fermo! Lato superiore: {topSide}");

        throwStarted = false;

        // Invia il risultato alla UI
        if (uiController != null)
            uiController.MostraRisultato(topSide);
    }

    // Metodo per calcolare quale lato del dado è rivolto verso l'alto
    private int CalcolaLato()
    {
        DiceSide[] sides = GetComponentsInChildren<DiceSide>();
        DiceSide topSide = sides[0];

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

        // Se la velocità cambia bruscamente → impatto
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

        // Evita spam continuo del suono
        if (Time.time - lastSoundTime < minSoundInterval)
            return;

        lastSoundTime = Time.time;

        audioSource.pitch = Random.Range(pitchMin, pitchMax);
        audioSource.PlayOneShot(audioSource.clip);
    }
}
