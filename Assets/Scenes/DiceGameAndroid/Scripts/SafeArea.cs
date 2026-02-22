using UnityEngine;

[RequireComponent(typeof(RectTransform))]
public class SafeArea : MonoBehaviour
{
    // ===== Riferimenti e stato =====
    RectTransform panel;            // Il pannello UI da adattare alla safe area
    Rect currentSafe;               // Ultima safe area registrata
    Vector2Int currentRes;          // Ultima risoluzione registrata
    ScreenOrientation currentOrientation; // Ultima orientazione registrata

    // ===== Inizializzazione =====
    void Awake()
    {
        // Recupera il RectTransform del pannello
        panel = GetComponent<RectTransform>();
        Refresh(); // Applica subito la safe area
    }

    // ===== Aggiornamento ogni frame =====
    void Update()
    {
        // Controlla se ci sono cambiamenti di safe area, risoluzione o orientamento
        if (Screen.safeArea != currentSafe ||
            Screen.width != currentRes.x ||
            Screen.height != currentRes.y ||
            Screen.orientation != currentOrientation)
        {
            Refresh(); // Aggiorna il pannello
        }
    }

    // ===== Applica Safe Area =====
    void Refresh()
    {
        Rect safe = Screen.safeArea; // Ottiene la safe area corrente

        // Salva valori correnti
        currentSafe = safe;
        currentRes = new Vector2Int(Screen.width, Screen.height);
        currentOrientation = Screen.orientation;

        // ===== Normalizzazione coordinate =====
        Vector2 anchorMin = safe.position;
        Vector2 anchorMax = safe.position + safe.size;

        anchorMin.x /= Screen.width;
        anchorMin.y /= Screen.height;
        anchorMax.x /= Screen.width;
        anchorMax.y /= Screen.height;

        // ===== Correzione landscape per device particolari =====
        // Alcuni telefoni/tablet (Galaxy, Xiaomi, ecc.) hanno offset o Y invertita
        if (Screen.width > Screen.height) // Modalità landscape
        {
            // Notch a sinistra
            if (safe.x > 0 && safe.y == 0)
            {
                anchorMin.x = safe.x / Screen.width;
            }

            // Notch a destra
            if (safe.x + safe.width < Screen.width)
            {
                anchorMax.x = (safe.x + safe.width) / Screen.width;
            }
        }

        // Applica i valori normalizzati al pannello UI
        panel.anchorMin = anchorMin;
        panel.anchorMax = anchorMax;
    }
}
