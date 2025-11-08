using BarcodeScanner;
using BarcodeScanner.Scanner;
using System.Collections;
using Unity.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class QRReader : MonoBehaviour
{
    public Button scanToggle;

    private Scanner BarcodeScanner;
    Texture2D tex = null;

    #region camera pixels
    [SerializeField]
    [Tooltip("The ARCameraManager which will produce frame events.")]
    ARCameraManager m_CameraManager;

    /// <summary>
    /// Get or set the <c>ARCameraManager</c>.
    /// </summary>
    public ARCameraManager CameraManager
    {
        get { return m_CameraManager; }
        set { m_CameraManager = value; }
    }

    private bool scanning;

    /*private void Awake()
    {
        scanToggle.GetComponentInChildren<Text>().text = "Scan QR code";
        scanToggle.onClick.RemoveAllListeners();
        scanToggle.onClick.AddListener(() => { enabled = true; });
        scanToggle.gameObject.SetActive(true);
    }*/

    void OnEnable()
    {
        scanning = false;
        if (m_CameraManager != null)
        {
            m_CameraManager.frameReceived += OnCameraFrameReceived;
        }

        //Debug.Log("starting scanner");
        /*ScannerSettings settings = new ScannerSettings
        {
            width = m_CameraManager.currentConfiguration.Value.width,
            height = m_CameraManager.currentConfiguration.Value.height
        };
        BarcodeScanner = new Scanner(settings);
        StartScanning();*/
/*#if UNITY_IOS
        ScannerSettings settings = new ScannerSettings
        {
            width = 512,
            height = 512
        };
        BarcodeScanner = new Scanner(settings);
        StartScanning();
#else*/
        StartCoroutine(WaitForCameraConfig());
//#endif

    }

    IEnumerator WaitForCameraConfig()
    {
        Debug.Log("waiting camera config");
        while (m_CameraManager.currentConfiguration == null)
        {
            yield return null;
        }
        ScannerSettings settings = new ScannerSettings
        {
            width = m_CameraManager.currentConfiguration.Value.width,
            height = m_CameraManager.currentConfiguration.Value.height
        };

        BarcodeScanner = new Scanner(settings);
        Debug.Log("starting scanner");
        StartScanning();
    }

    void OnDisable()
    {
        scanning = false;
        if (m_CameraManager != null)
        {
            m_CameraManager.frameReceived -= OnCameraFrameReceived;
        }
        BarcodeScanner.Stop();
        scanToggle.gameObject.SetActive(false);
        Debug.Log("qr disabled");
    }

    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
{
    if (!scanning || BarcodeScanner == null)
        return;

    if (!CameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
        return;

    StartCoroutine(ProcessImage(image));
}

IEnumerator ProcessImage(XRCpuImage image)
{
    var conversionParams = new XRCpuImage.ConversionParams
    {
        inputRect = new RectInt(0, 0, image.width, image.height),
        outputDimensions = new Vector2Int(image.width / 2, image.height / 2),
        outputFormat = TextureFormat.RGB24,
        transformation = XRCpuImage.Transformation.MirrorY
    };

    // Create the async conversion request
    var request = image.ConvertAsync(conversionParams);

    while (!request.status.IsDone())
        yield return null;

    if (request.status != XRCpuImage.AsyncConversionStatus.Ready)
    {
        Debug.LogErrorFormat("Image conversion failed with status {0}", request.status);
        request.Dispose();
        image.Dispose();
        yield break;
    }

    var rawData = request.GetData<byte>();

    if (tex == null)
    {
        tex = new Texture2D(
            conversionParams.outputDimensions.x,
            conversionParams.outputDimensions.y,
            conversionParams.outputFormat,
            false);
    }

    tex.LoadRawTextureData(rawData);
    tex.Apply();

    BarcodeScanner.pixels = tex.GetPixels32(0);
    BarcodeScanner.Settings.height = tex.height;
    BarcodeScanner.Settings.width = tex.width;
    BarcodeScanner.Update();

    request.Dispose();
    image.Dispose();
}


    public void ClickStop()
    {
        if (BarcodeScanner == null)
        {
            //Log.Warning("No valid camera - Click Stop");
            return;
        }

        // Stop Scanning
        Debug.Log("stopping scanner");
        scanning = false;
        BarcodeScanner.Stop();
        scanToggle.GetComponentInChildren<Text>().text = "Scan QR code";
        scanToggle.onClick.RemoveAllListeners();
        scanToggle.onClick.AddListener(StartScanning);
    }

    public void StartScanning()
    {
        if (BarcodeScanner == null)
        {
            //Log.Warning("No valid camera - Click Start");
            Debug.Log("Scanner is null");
            return;
        }

        scanning = true;

        // Start Scanning
        Debug.Log("Scanning");
        BarcodeScanner.Scan((barCodeType, barCodeValue) => {
            scanning = false;
            BarcodeScanner.Stop();
            StopAllCoroutines();
            Debug.Log("Found: " + barCodeType + " / " + barCodeValue);
            //urlField.text = barCodeValue;
            GetComponent<ISessionManager>().StartSession(barCodeValue);
            // Feedback
            //Audio.Play();

#if UNITY_ANDROID || UNITY_IOS
            Handheld.Vibrate();
#endif
            /*scanToggle.GetComponentInChildren<Text>().text = "Scan QR code";
            scanToggle.onClick.RemoveAllListeners();
            scanToggle.onClick.AddListener(StartScanning);*/
        });
        /*scanToggle.GetComponentInChildren<Text>().text = "Stop Scanning";
        scanToggle.onClick.RemoveAllListeners();
        scanToggle.onClick.AddListener(ClickStop);*/
    }

#endregion


}
