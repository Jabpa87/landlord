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
    
    [Header("Group Strip Visuals")]
    [Tooltip("Enable group-strip sprite synchronization for buildable properties.")]
    public bool manageGroupStripVisuals = true;
    public Sprite groupBrown;
    public Sprite groupG1;
    public Sprite groupG2;
    public Sprite groupG3;
    public Sprite groupG4;
    public Sprite groupG5;
    public Sprite groupG6;
    public Sprite groupG7;
    public Sprite groupG8;
    public Sprite groupG9;
    public Sprite groupG10;
    public Sprite fallbackGroupSprite;
    
    private PropertyOwnershipTag[] allTags;
    private PropertyGroupStripVisual[] allGroupStrips;
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
                if (manageGroupStripVisuals) UpdateAllGroupStrips();
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
            tile.gameObject.AddComponent<PropertyOwnershipTag>();
            addedCount++;

            EnsureGroupStripVisual(tile);
        }

        if (manageGroupStripVisuals)
        {
            foreach (TileInfo tile in allTiles)
            {
                if (tile == null || tile.tileType != TileType.Property || tile.property == null) continue;
                EnsureGroupStripVisual(tile);
            }
        }

        // Cache all tags for updates
        allTags = boardTilesParent.GetComponentsInChildren<PropertyOwnershipTag>();
        if (manageGroupStripVisuals)
            allGroupStrips = boardTilesParent.GetComponentsInChildren<PropertyGroupStripVisual>(true);
        
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

    public void UpdateAllGroupStrips()
    {
        if (!manageGroupStripVisuals) return;
        if (allGroupStrips == null || allGroupStrips.Length == 0)
        {
            allGroupStrips = FindObjectsByType<PropertyGroupStripVisual>(FindObjectsSortMode.None);
        }

        foreach (PropertyGroupStripVisual strip in allGroupStrips)
        {
            if (strip != null)
                strip.ApplyGroupStripVisual(force: true);
        }
    }
    
    /// <summary>
    /// Force refresh all tags (useful after property purchases/trades).
    /// </summary>
    [ContextMenu("Refresh All Ownership Tags")]
    public void RefreshAllTags()
    {
        UpdateAllTags();
        if (manageGroupStripVisuals) UpdateAllGroupStrips();
        Debug.Log("PropertyOwnershipTagManager: Refreshed all ownership tags");
    }

    void OnApplicationFocus(bool hasFocus)
    {
        if (hasFocus && manageGroupStripVisuals) UpdateAllGroupStrips();
    }

    void OnApplicationPause(bool pauseStatus)
    {
        if (!pauseStatus && manageGroupStripVisuals) UpdateAllGroupStrips();
    }

    void EnsureGroupStripVisual(TileInfo tile)
    {
        if (!manageGroupStripVisuals || tile == null) return;
        PropertyGroupStripVisual strip = tile.GetComponent<PropertyGroupStripVisual>();
        if (strip == null)
            strip = tile.gameObject.AddComponent<PropertyGroupStripVisual>();

        strip.ApplySharedGroupSprites(
            groupBrown, groupG1, groupG2, groupG3, groupG4, groupG5, groupG6, groupG7, groupG8, groupG9, groupG10, fallbackGroupSprite
        );
        strip.ApplyGroupStripVisual(force: true);
    }
}
