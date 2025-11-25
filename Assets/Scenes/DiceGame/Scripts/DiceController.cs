using Google.XR.ARCoreExtensions.Samples.CloudAnchors;
using System.Collections;
using UnityEngine;

public class DiceController : MonoBehaviour
{

    public GameObject diceObject;

    private Vector3 direction, rotation;
    //private float accelerationForce;

    private void Start()
    {
#if !UNITY_EDITOR
        CloudAnchorsController.instance.SessionOrigin.MakeContentAppearAt(transform, LaunchDice.instance.Turricola.GetNextSpawnPosition());
#endif

        if (!CloudAnchorsController.instance.IsHost())
            LaunchDice.instance.Turricola.AddDice(this);
    }

    public void Activate()
{
    diceObject.SetActive(true);

    Rigidbody rb = diceObject.GetComponent<Rigidbody>();
    rb.isKinematic = false;
    rb.useGravity = true;

    // Reset movimenti precedenti
    rb.linearVelocity = Vector3.zero;
    rb.angularVelocity = Vector3.zero;

    // Direzione del lancio: un po' diagonale verso il basso
    Vector3 throwDirection = new Vector3(
        Random.Range(-0.5f, 0.5f),  // leggera spinta laterale casuale
        -1f,                        // verso il basso
        Random.Range(-0.5f, 0.5f)   // leggera spinta frontale casuale
    ).normalized;

    // Aggiunge la spinta verso il tavolo
    rb.AddForce(throwDirection * Random.Range(6f, 10f), ForceMode.Impulse);

    // Aggiunge una coppia per farlo ruotare
    rb.AddTorque(Random.insideUnitSphere * Random.Range(10f, 20f), ForceMode.Impulse);
}




    public void DiceLaunched()
    {
        StartCoroutine(WaitUntilMoving());
    }

    private IEnumerator WaitUntilMoving()
    {
#if false
        var oldPosition = transform.position;
        var oldRotation = transform.rotation;

        yield return new WaitForFixedUpdate();

        while (oldPosition != transform.position || oldRotation != transform.rotation)
        {
            //Debug.Log("still moving");
            oldPosition = transform.position;
            oldRotation = transform.rotation;
            yield return new WaitForFixedUpdate();

            /*if (!GetComponentInChildren<Renderer>().isVisible)
            {
                Debug.Log("destroying");
                LaunchDice.instance.DiceValue(-1);
                Destroy(gameObject);
            }*/
        }
#endif
        
        
        
        yield return new WaitForSeconds(3.5f);
        
        LaunchDice.instance.DiceValue(GetValue());
        //GetComponent<Rigidbody>().isKinematic = true;
        transform.SetParent(CloudAnchorsController.instance.Anchor.transform);
        //transform.SetParent(diceLauncher.GetTableObject().transform);

    }

    private int GetValue()
    {
        var sides = transform.GetComponentsInChildren<DiceSide>();
        var higherSide = sides[0];

        foreach (var side in sides)
        {
            if (side.transform.position.y > higherSide.transform.position.y)
                higherSide = side;
        }

        return higherSide.value;
    }
}
