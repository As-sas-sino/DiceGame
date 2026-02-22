using System.Collections;
using UnityEngine;
using Fusion;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
[RequireComponent(typeof(AudioSource))]
[RequireComponent(typeof(NetworkObject))]
public class DadoControllerMultiplayer : NetworkBehaviour
{
    // Componenti principali
    private Rigidbody rb;
    private AudioSource audioSource;
    private FusionGameState game;

    // Stato del lancio
    private bool throwStarted;
    private Vector3 originalWorldScale;

    // =========================
    // THROW FORCES
    // =========================

    [Header("Throw Forces")]
    public float minLateralForce = 4f;   // Forza minima impulso
    public float maxLateralForce = 8f;   // Forza massima impulso
    public float minTorque = 20f;        // Coppia minima
    public float maxTorque = 50f;        // Coppia massima

    // =========================
    // STOP CONTROL
    // =========================

    [Header("Stop Control")]
    public float stopVelocityThreshold = 0.04f;   // Soglia velocità lineare
    public float stopAngularThreshold = 0.04f;    // Soglia velocità angolare
    public float initialCheckDelay = 1f;          // Ritardo prima controllo stop

    // =========================
    // HIT SOUND
    // =========================

    [Header("Hit Sound")]
    [SerializeField] private float hitVelocityThreshold = 3f;  // Soglia impatto suono
    [SerializeField] private float minSoundInterval = 0.1f;    // Intervallo minimo suoni
    [SerializeField] private float pitchMin = 0.9f;            // Pitch minimo
    [SerializeField] private float pitchMax = 1.1f;            // Pitch massimo

    private bool networkReady = false;

    private float lastVelocity;
    private float lastSoundTime;

    private bool networkInitialized = false;

    // =========================
    // INIT
    // =========================

    private void Awake()
    {
        // Cache componenti
        rb = GetComponent<Rigidbody>();
        audioSource = GetComponent<AudioSource>();
        originalWorldScale = transform.lossyScale;
    }

    public override void Spawned()
    {
        // Riferimento GameState condiviso
        game = FusionBootstrap.GameStateInstance;
        networkInitialized = true;
    }

    // =========================
    // PUBLIC CALL
    // =========================

    public void LanciaDado()
    {
        if (throwStarted)
            return; // Evita doppio lancio

        if (HasStateAuthority)
        {
            // Server lancia direttamente
            StartCoroutine(LanciaDado_Internal());
        }
        else
        {
            // Client chiede al server
            RPC_RequestThrow();
        }
    }

    // =========================
    // SERVER EXECUTION
    // =========================

    [Rpc(RpcSources.All, RpcTargets.StateAuthority)]
    private void RPC_RequestThrow()
    {
        if (throwStarted)
            return;

        StartCoroutine(LanciaDado_Internal());
    }

    private IEnumerator LanciaDado_Internal()
    {
        yield return new WaitForSeconds(0.1f);

        throwStarted = true;

        // Reset fisica
        rb.isKinematic = false;
        rb.linearVelocity = Vector3.zero;
        rb.angularVelocity = Vector3.zero;

        // Rotazione iniziale casuale
        transform.rotation = Random.rotation;

        // Direzione impulso
        Vector3 dir = new Vector3(
            Random.Range(-0.3f, 0.3f),
            -1f,
            Random.Range(-0.3f, 0.3f)
        ).normalized;

        // Applica forza
        rb.AddForce(
            dir * Random.Range(minLateralForce, maxLateralForce),
            ForceMode.Impulse
        );

        // Applica rotazione
        rb.AddTorque(
            Random.insideUnitSphere * Random.Range(minTorque, maxTorque),
            ForceMode.Impulse
        );

        StartCoroutine(CheckStopped());
    }

    // =========================
    // STOP CHECK (SERVER ONLY)
    // =========================

    private IEnumerator CheckStopped()
    {
        yield return new WaitForSeconds(initialCheckDelay);

        float stoppedTime = 0f;
        float elapsedTime = 0f;
        float stopDuration = 0.5f; // Tempo minimo fermo
        float maxWaitTime = 4f;    // Timeout massimo

        while (elapsedTime < maxWaitTime)
        {
            elapsedTime += Time.fixedDeltaTime;

            bool linearStopped = rb.linearVelocity.magnitude < stopVelocityThreshold;
            bool angularStopped = rb.angularVelocity.magnitude < stopAngularThreshold;

            if (linearStopped && angularStopped)
            {
                stoppedTime += Time.fixedDeltaTime;

                if (stoppedTime >= stopDuration)
                    break;
            }
            else
            {
                stoppedTime = 0f;
            }

            yield return new WaitForFixedUpdate();
        }

        throwStarted = false;

        // Solo server conferma risultato
        if (HasStateAuthority && game != null)
        {
            byte result = (byte)CalcolaLato();
            Debug.Log($"[DICE] Result confirmed: {result}");

            game.SetDiceResult(result);
        }
    }

    // =========================
    // HIT SOUND (LOCAL)
    // =========================

    private void FixedUpdate()
    {
        if (!rb || !audioSource)
            return;

        // Salva velocità corrente
        float currentVelocity = rb.linearVelocity.magnitude;
        lastVelocity = currentVelocity;
    }

    [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    private void RPC_PlayHitSound()
    {
        if (audioSource == null)
            audioSource = GetComponent<AudioSource>();

        if (audioSource == null)
            return;

        Debug.Log("[DICE] RPC_PlayHitSound ricevuto da: " + Runner.LocalPlayer);

        PlayHitSound();
    }

    private void PlayHitSound()
    {
        if (!audioSource.clip)
            return;

        if (Time.time - lastSoundTime < minSoundInterval)
            return;

        lastSoundTime = Time.time;

        // Pitch casuale per varietà
        audioSource.pitch = Random.Range(pitchMin, pitchMax);
        audioSource.PlayOneShot(audioSource.clip);
    }

    // =========================
    // CALC TOP FACE
    // =========================

    private int CalcolaLato()
    {
        // Recupera tutte le facce
        DiceSide[] sides = GetComponentsInChildren<DiceSide>();

        DiceSide top = sides[0];

        // Trova la faccia più alta in Y
        foreach (var s in sides)
        {
            if (s.transform.position.y > top.transform.position.y)
                top = s;
        }

        return top.value;
    }

    // Mantiene scala world coerente
    public void ForceWorldScale()
    {
        Transform parent = transform.parent;

        if (parent == null)
        {
            transform.localScale = originalWorldScale;
        }
        else
        {
            Vector3 parentScale = parent.lossyScale;

            transform.localScale = new Vector3(
                originalWorldScale.x / parentScale.x,
                originalWorldScale.y / parentScale.y,
                originalWorldScale.z / parentScale.z
            );
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (!HasStateAuthority)
            return;

        if (!networkInitialized)
            return;

        float impact = collision.relativeVelocity.magnitude;

        if (impact < hitVelocityThreshold)
            return;

        // Riproduce suono su tutti i client
        RPC_PlayHitSound();
    }
}