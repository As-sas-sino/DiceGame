using System.Collections;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
public class DadoController : MonoBehaviour
{
    private Rigidbody rb;
    private ResultController uiController;

    [Header("Forces and rotation")]
    public float minLateralForce = 4f;
    public float maxLateralForce = 8f;
    public float minTorque = 20f;
    public float maxTorque = 50f;

    [Header("Bounces")]
    public float smallHitForce = 1f;
    public int numberOfHits = 3;
    public float hitInterval = 0.2f;

    [Header("Control")]
    public float stopVelocityThreshold = 0.05f;
    public float stopAngularThreshold = 0.05f;
    [SerializeField] private float initialCheckDelay = 1f;
    [SerializeField] private float stopDuration = 1.5f;
    [SerializeField] private float maxWaitTime = 10f;

    [Header("Initial X Range")]
    public float minX = 134f;
    public float maxX = 136f;

    [Header("Throw settings")]
    [SerializeField] private float throwRandomXRange = 0.3f;
    [SerializeField] private float throwRandomZRange = 0.3f;
    [SerializeField] private float throwDownForce = -1f;

    [Header("Hit sound settings")]
    [SerializeField] private float hitVelocityThreshold = 3f;
    [SerializeField] private float minSoundInterval = 0.1f;
    [SerializeField] private float pitchMin = 0.9f;
    [SerializeField] private float pitchMax = 1.1f;

    private bool throwStarted = false;
    private AudioSource audioSource;

    // Sound variables
    private float lastVelocity = 0f;
    private float lastSoundTime = 0f;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
        uiController = FindObjectOfType<ResultController>();
        audioSource = GetComponent<AudioSource>();
    }

    //Chiamato per far comparire e lanciare il dado
    public void LanciaDado()
    {
        if (throwStarted) return;
        throwStarted = true;

        if (!gameObject.activeSelf)
            gameObject.SetActive(true);

        //Reset fisica del dado
        rb.isKinematic = false;
        rb.linearVelocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;

       transform.rotation = Random.rotation;

        //spinta random verso il basso
        Vector3 throwDirection = new Vector3(
            Random.Range(-throwRandomXRange, throwRandomXRange),
            throwDownForce,
            Random.Range(-throwRandomZRange, throwRandomZRange)
        ).normalized;

        rb.AddForce(throwDirection * Random.Range(minLateralForce, maxLateralForce), ForceMode.Impulse);
        rb.AddTorque(Random.insideUnitSphere * Random.Range(minTorque, maxTorque), ForceMode.Impulse);

        StartCoroutine(PiccoliColpetti());
        StartCoroutine(ControllaFermo());
    }

    //metodi per dare dei colpetti al dado per renderlo più realistico
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

    //metodo per controllare quando si ferma il dado e dare il risultato
    private IEnumerator ControllaFermo()
    {
        //Aspetta prima di iniziare a controllare
        yield return new WaitForSeconds(initialCheckDelay);

        //Timeout di sicurezza
        float elapsedTime = 0f;

        //Aspetta finché il dado NON è ancora fermo
        while ((rb.linearVelocity.magnitude > stopVelocityThreshold ||
                rb.angularVelocity.magnitude > stopAngularThreshold)
                && elapsedTime < maxWaitTime)
        {
            elapsedTime += Time.fixedDeltaTime;
            yield return new WaitForFixedUpdate();
        }

        //Aspettiamo che il dado resti fermo per almeno stopDuration
        float stoppedTime = 0f;
        while (stoppedTime < stopDuration && elapsedTime < maxWaitTime)
        {
            if (rb.linearVelocity.magnitude < stopVelocityThreshold &&
                rb.angularVelocity.magnitude < stopAngularThreshold)
            {
                stoppedTime += Time.fixedDeltaTime;  // sta fermo → aumenta
            }
            else
            {
                stoppedTime = 0f;                    // si muove → reset
            }

            elapsedTime += Time.fixedDeltaTime;
            yield return new WaitForFixedUpdate();
        }

        //Se viene superato il timeout di sicurezza, si forza il risultato
        if (elapsedTime >= maxWaitTime)
        {
            Debug.LogWarning("⚠️ Timeout: dado bloccato, calcolo risultato forzato.");
        }

        int topSide = CalcolaLato();
        Debug.Log($"🎲 Dado fermo! Lato superiore: {topSide}");

        throwStarted = false;

        if (uiController != null)
            uiController.MostraRisultato(topSide);
    }

    //Metodo per calcolare il lato superiore restituito dal lancio
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

        // se la velocità cala di colpo → impatto
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

        // evita spam di suoni
        if (Time.time - lastSoundTime < minSoundInterval)
            return;

        lastSoundTime = Time.time;

        audioSource.pitch = Random.Range(pitchMin, pitchMax);
        audioSource.PlayOneShot(audioSource.clip);
    }
}
