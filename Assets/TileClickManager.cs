using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UIElements;
#if ENABLE_INPUT_SYSTEM
using UnityEngine.InputSystem;
#endif

/// <summary>
/// Manager script that automatically adds TileClickHandler to all tiles.
/// Attach this to a GameObject in your scene.
/// </summary>
public class TileClickManager : MonoBehaviour
{
    [Header("References")]
    [Tooltip("Reference to UIDocumentManager for showing tile details")]
    public UIDocumentManager uiManager;
    
    [Tooltip("Reference to TurnManager (optional)")]
    public TurnManager turnManager;
    
    [Header("Setup")]
    [Tooltip("Parent GameObject containing all tiles. If null, will search for 'BoardTiles'.")]
    public Transform boardTilesParent;

    [Header("Input")]
    public bool useRaycastInput = true;
    [Tooltip("When true, clicks over UI (uGUI or UI Toolkit) are not treated as tile clicks. Set true so buttons/panels work.")]
    public bool ignoreUIWhenClicking = true;
    public LayerMask tileLayerMask = ~0;

    private Camera mainCamera;
    private static int lastTileClickFrame = -1;
    
    void Start()
    {
        if (boardTilesParent == null)
        {
            // Try to find BoardTiles automatically
            GameObject boardTiles = GameObject.Find("BoardTiles");
            if (boardTiles != null)
            {
                boardTilesParent = boardTiles.transform;
                Debug.Log("TileClickManager: Found BoardTiles automatically");
            }
        }
        
        if (boardTilesParent == null)
        {
            Debug.LogError("TileClickManager: BoardTiles parent not found! Please assign it in Inspector.");
            return;
        }
        
        // Auto-find managers if not assigned
        if (uiManager == null)
        {
            uiManager = FindFirstObjectByType<UIDocumentManager>();
            if (uiManager != null)
                Debug.Log("TileClickManager: Found UIDocumentManager automatically");
        }
        
        if (turnManager == null)
        {
            turnManager = FindFirstObjectByType<TurnManager>();
        }

        mainCamera = Camera.main;
        if (mainCamera == null)
            mainCamera = FindFirstObjectByType<Camera>();

        // Delay one frame so UIDocumentManager and other refs are ready, then add/refresh tile handlers
        StartCoroutine(AddClickHandlersAfterFrame());
    }

    System.Collections.IEnumerator AddClickHandlersAfterFrame()
    {
        yield return null;
        AddClickHandlersToAllTiles();
    }
    
    void AddClickHandlersToAllTiles()
    {
        TileInfo[] allTiles = boardTilesParent.GetComponentsInChildren<TileInfo>();
        
        if (allTiles.Length == 0)
        {
            Debug.LogWarning("TileClickManager: No tiles found! Make sure BoardTilesParent is correct.");
            return;
        }
        
        int addedCount = 0;
        int refreshedCount = 0;
        
        foreach (TileInfo tile in allTiles)
        {
            TileClickHandler handler = tile.GetComponent<TileClickHandler>();
            if (handler != null)
            {
                // Refresh refs on existing handlers so they always have uiManager/turnManager
                if (uiManager != null && handler.uiManager == null)
                {
                    handler.uiManager = uiManager;
                    refreshedCount++;
                }
                if (turnManager != null && handler.turnManager == null)
                {
                    handler.turnManager = turnManager;
                }
                continue;
            }
            
            handler = tile.gameObject.AddComponent<TileClickHandler>();
            handler.uiManager = uiManager;
            handler.turnManager = turnManager;
            addedCount++;
        }
        
        Debug.Log($"TileClickManager: Added TileClickHandler to {addedCount} tiles, refreshed refs on {refreshedCount} existing.");
    }

    void Update()
    {
        if (!useRaycastInput || mainCamera == null) return;

#if ENABLE_INPUT_SYSTEM
        // Mouse
        if (Mouse.current != null && Mouse.current.leftButton.wasPressedThisFrame)
        {
            Vector2 pos = Mouse.current.position.ReadValue();
            if (ignoreUIWhenClicking && IsPointerOverUI(pos))
                return;
            HandleScreenClick(pos);
        }

        // Touch
        if (Touchscreen.current != null && Touchscreen.current.primaryTouch.press.wasPressedThisFrame)
        {
            Vector2 pos = Touchscreen.current.primaryTouch.position.ReadValue();
            if (ignoreUIWhenClicking && IsPointerOverUI(pos))
                return;
            HandleScreenClick(pos);
        }
#else
        // Old Input system fallback
        if (Input.GetMouseButtonDown(0))
        {
            Vector2 pos = Input.mousePosition;
            if (ignoreUIWhenClicking && IsPointerOverUI(pos))
                return;
            HandleScreenClick(pos);
        }

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                if (ignoreUIWhenClicking && IsPointerOverUI(touch.position))
                    return;
                HandleScreenClick(touch.position);
            }
        }
#endif
    }

    /// <summary>Returns true if the pointer is over uGUI (Canvas) or UI Toolkit. Used to avoid treating UI clicks as tile clicks.</summary>
    static bool IsPointerOverUI(Vector2 screenPosition)
    {
        if (EventSystem.current != null && EventSystem.current.IsPointerOverGameObject())
            return true;
        var documents = FindObjectsByType<UIDocument>(FindObjectsSortMode.None);
        foreach (var doc in documents)
        {
            if (doc == null || !doc.gameObject.activeInHierarchy || doc.rootVisualElement == null)
                continue;
            var panel = doc.rootVisualElement.panel;
            if (panel == null) continue;
            var picked = panel.Pick(screenPosition);
            if (picked != null)
                return true;
        }
        return false;
    }

    void HandleScreenClick(Vector2 screenPosition)
    {
        Debug.Log($"TileClickManager: Screen click at {screenPosition}");
        float zDistance = Mathf.Abs(mainCamera.transform.position.z);
        Vector3 worldPoint = mainCamera.ScreenToWorldPoint(new Vector3(screenPosition.x, screenPosition.y, zDistance));

        Collider2D hitCol = Physics2D.OverlapPoint(worldPoint, tileLayerMask);
        if (hitCol == null)
        {
            // Fallback to raycast if overlap fails
            Ray ray = mainCamera.ScreenPointToRay(screenPosition);
            RaycastHit2D hit = Physics2D.Raycast(ray.origin, ray.direction, 1000f, tileLayerMask);
            hitCol = hit.collider;
        }

        if (hitCol == null)
        {
            Debug.Log("TileClickManager: Raycast/Overlap hit nothing");
            return;
        }

        Debug.Log($"TileClickManager: Hit {hitCol.gameObject.name}");

        TileClickHandler handler = hitCol.GetComponent<TileClickHandler>();
        if (handler == null)
        {
            handler = hitCol.GetComponentInParent<TileClickHandler>();
        }

        if (handler != null)
        {
            handler.SelectTile();
            lastTileClickFrame = Time.frameCount;
        }
        else
            Debug.Log("TileClickManager: No TileClickHandler found on hit object");
    }

    public static bool WasTileClickThisFrame()
    {
        return Time.frameCount == lastTileClickFrame;
    }
}
