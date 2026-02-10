using UnityEngine;
using UnityEngine.EventSystems;

/// <summary>
/// Handles clicking on tiles to show their details.
/// Attach this to each tile GameObject or use a manager to handle all tiles.
/// </summary>
[RequireComponent(typeof(Collider2D))]
public class TileClickHandler : MonoBehaviour
{
    [Header("References")]
    [Tooltip("Reference to UIDocumentManager for showing tile details")]
    public UIDocumentManager uiManager;
    
    [Tooltip("Reference to TurnManager (optional, for getting current player info)")]
    public TurnManager turnManager;
    
    [Header("Visual Feedback")]
    [Tooltip("Enable highlight animation when tile is clicked")]
    public bool enableHighlight = true;
    
    private TileInfo tileInfo;
    private Camera mainCamera;
    private TileHighlight tileHighlight;
    private static TileClickHandler currentlySelectedTile;
    
    void Start()
    {
        tileInfo = GetComponent<TileInfo>();
        
        if (tileInfo == null)
        {
            Debug.LogWarning($"TileClickHandler on {gameObject.name}: No TileInfo component found!");
            enabled = false;
            return;
        }
        
        // Ensure there's a collider for clicking
        Collider2D col = GetComponent<Collider2D>();
        if (col == null)
        {
            // Add a BoxCollider2D if none exists
            BoxCollider2D boxCol = gameObject.AddComponent<BoxCollider2D>();
            boxCol.size = new Vector2(1f, 1f); // Adjust size as needed
            Debug.Log($"TileClickHandler: Added BoxCollider2D to {gameObject.name}");
        }
        
        // Find main camera
        mainCamera = Camera.main;
        if (mainCamera == null)
        {
            mainCamera = FindFirstObjectByType<Camera>();
        }
        
        // Auto-find UIDocumentManager if not assigned
        if (uiManager == null)
        {
            uiManager = FindFirstObjectByType<UIDocumentManager>();
        }
        
        // Auto-find TurnManager if not assigned
        if (turnManager == null)
        {
            turnManager = FindFirstObjectByType<TurnManager>();
        }
        
        // Get or add TileHighlight component for visual feedback
        if (enableHighlight)
        {
            tileHighlight = GetComponent<TileHighlight>();
            if (tileHighlight == null)
            {
                tileHighlight = gameObject.AddComponent<TileHighlight>();
            }
        }
        
        // Subscribe to panel close event to remove highlight
        if (uiManager != null)
        {
            // We'll need to check when panel closes - this will be handled in ShowTileDetails
        }
    }
    
    void OnMouseDown()
    {
        SelectTile();
    }
    
    /// <summary>
    /// Show highlight animation on this tile
    /// </summary>
    public void ShowHighlight()
    {
        if (enableHighlight && tileHighlight != null)
        {
            tileHighlight.ShowHighlight();
        }
    }
    
    /// <summary>
    /// Hide highlight animation on this tile
    /// </summary>
    public void HideHighlight()
    {
        if (enableHighlight && tileHighlight != null)
        {
            tileHighlight.HideHighlight();
        }
        
        if (currentlySelectedTile == this)
        {
            currentlySelectedTile = null;
        }
    }
    
    /// <summary>
    /// Show tile details in UI panel. Uses TileDetailsCardUI (uGUI) if present, otherwise UIDocumentManager (UI Toolkit).
    /// </summary>
    public void ShowTileDetails()
    {
        if (tileInfo == null)
        {
            Debug.LogError($"TileClickHandler: Cannot show details - TileInfo is null on {gameObject.name}!");
            return;
        }

        if (TileDetailsCardUI.Instance != null)
        {
            TileDetailsCardUI.Instance.Show(tileInfo);
            return;
        }

        if (uiManager != null)
        {
            // Open Property Manager panel with this tile focused (plan: single panel for all property actions)
            uiManager.OpenPropertyManagerPanel(tileInfo);
            return;
        }

        Debug.LogWarning("[GameMechanics] Tile click: Neither TileDetailsCardUI nor UIDocumentManager available - tile details not shown.");
    }
    
    /// <summary>
    /// Alternative: Use raycast from camera (for touch/mobile support).
    /// Call this from a manager script that handles input.
    /// </summary>
    public bool HandleRaycast(Vector2 screenPosition)
    {
        if (tileInfo == null || mainCamera == null) return false;
        
        Ray ray = mainCamera.ScreenPointToRay(screenPosition);
        RaycastHit2D hit = Physics2D.Raycast(ray.origin, ray.direction);
        
        if (hit.collider != null && hit.collider.gameObject == gameObject)
        {
            SelectTile();
            return true;
        }
        
        return false;
    }

    public void SelectTile()
    {
        Debug.Log($"=== TILE CLICKED: {gameObject.name} ===");
        
        if (tileInfo == null)
        {
            Debug.LogError($"TileClickHandler: TileInfo is null on {gameObject.name}!");
            return;
        }
        
        // Remove highlight from previously selected tile
        if (currentlySelectedTile != null && currentlySelectedTile != this)
        {
            currentlySelectedTile.HideHighlight();
        }
        
        // Show highlight on this tile
        ShowHighlight();
        currentlySelectedTile = this;
        
        Debug.Log($"TileClickHandler: Calling ShowTileDetails for {gameObject.name}...");
        ShowTileDetails();
        Debug.Log($"TileClickHandler: ShowTileDetails called successfully.");
    }
}
