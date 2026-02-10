using UnityEngine;

/// <summary>
/// Manager that automatically adds PropertyOwnershipTag to all property tiles
/// and updates them when ownership changes.
/// </summary>
public class PropertyOwnershipTagManager : MonoBehaviour
{
    [Header("Settings")]
    [Tooltip("Parent GameObject containing all tiles. If null, will search for 'BoardTiles'.")]
    public Transform boardTilesParent;
    
    [Tooltip("Auto-update tags when properties change ownership")]
    public bool autoUpdate = true;
    
    [Tooltip("Update interval in seconds (0 = every frame, not recommended)")]
    public float updateInterval = 0.5f;
    
    private PropertyOwnershipTag[] allTags;
    private float lastUpdateTime;
    
    void Start()
    {
        if (boardTilesParent == null)
        {
            // Try to find BoardTiles automatically
            GameObject boardTiles = GameObject.Find("BoardTiles");
            if (boardTiles != null)
            {
                boardTilesParent = boardTiles.transform;
                Debug.Log("PropertyOwnershipTagManager: Found BoardTiles automatically");
            }
        }
        
        if (boardTilesParent == null)
        {
            Debug.LogWarning("PropertyOwnershipTagManager: BoardTiles parent not found! Please assign it in Inspector.");
            return;
        }
        
        // Add tags to all property tiles
        AddTagsToAllTiles();
    }
    
    void Update()
    {
        if (autoUpdate && updateInterval > 0f)
        {
            if (Time.time - lastUpdateTime >= updateInterval)
            {
                UpdateAllTags();
                lastUpdateTime = Time.time;
            }
        }
    }
    
    void AddTagsToAllTiles()
    {
        TileInfo[] allTiles = boardTilesParent.GetComponentsInChildren<TileInfo>();
        
        if (allTiles.Length == 0)
        {
            Debug.LogWarning("PropertyOwnershipTagManager: No tiles found! Make sure BoardTilesParent is correct.");
            return;
        }
        
        int addedCount = 0;
        int skippedCount = 0;
        
        foreach (TileInfo tile in allTiles)
        {
            // Only add to property tiles
            if (tile.tileType != TileType.Property || tile.property == null)
            {
                continue;
            }
            
            // Check if already has PropertyOwnershipTag
            if (tile.GetComponent<PropertyOwnershipTag>() != null)
            {
                skippedCount++;
                continue;
            }
            
            // Add PropertyOwnershipTag
            PropertyOwnershipTag tag = tile.gameObject.AddComponent<PropertyOwnershipTag>();
            addedCount++;
        }
        
        // Cache all tags for updates
        allTags = boardTilesParent.GetComponentsInChildren<PropertyOwnershipTag>();
        
        Debug.Log($"PropertyOwnershipTagManager: Added PropertyOwnershipTag to {addedCount} property tiles ({skippedCount} already had it)");
    }
    
    /// <summary>
    /// Updates all ownership tags (call this when property ownership changes).
    /// </summary>
    public void UpdateAllTags()
    {
        if (allTags == null || allTags.Length == 0)
        {
            allTags = FindObjectsByType<PropertyOwnershipTag>(FindObjectsSortMode.None);
        }
        
        foreach (PropertyOwnershipTag tag in allTags)
        {
            if (tag != null)
            {
                tag.UpdateOwnershipDisplay();
            }
        }
    }
    
    /// <summary>
    /// Force refresh all tags (useful after property purchases/trades).
    /// </summary>
    [ContextMenu("Refresh All Ownership Tags")]
    public void RefreshAllTags()
    {
        UpdateAllTags();
        Debug.Log("PropertyOwnershipTagManager: Refreshed all ownership tags");
    }
}
