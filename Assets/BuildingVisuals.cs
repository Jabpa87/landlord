using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// Represents which side of the board a tile is on (for rotation).
/// </summary>
public enum BoardSide
{
    Bottom,  // Bottom side (houses face up, rotation = 0°)
    Right,    // Right side (houses face left, rotation = 90°)
    Top,     // Top side (houses face down, rotation = 180°)
    Left     // Left side (houses face right, rotation = 270°)
}

/// <summary>
/// Manages visual representation of houses and hotels on property tiles.
/// Attach this to each property tile, or use the static manager for automatic updates.
/// </summary>
public class BuildingVisuals : MonoBehaviour
{
    [Header("Sprite References")]
    [Tooltip("Sprite for a single house (will be duplicated for 1-4 houses)")]
    public Sprite houseSprite;
    
    [Tooltip("Sprite for a hotel (replaces 4 houses)")]
    public Sprite hotelSprite;
    
    [Header("Layout Settings")]
    [Tooltip("Local position offset for houses (relative to tile center)")]
    public Vector3 houseOffset = new Vector3(0, 0.2f, -0.1f);
    
    [Tooltip("Local position offset for hotel (relative to tile center)")]
    public Vector3 hotelOffset = new Vector3(0, 0.2f, -0.1f);
    
    [Tooltip("Spacing between multiple houses (horizontal)")]
    public float houseSpacing = 0.15f;
    
    [Tooltip("Scale for house sprites")]
    public float houseScale = 0.3f;
    
    [Tooltip("Scale for hotel sprite")]
    public float hotelScale = 0.4f;
    
    [Tooltip("Sorting layer ID (should be above tile but below UI)")]
    public int sortingLayerID = 0;
    
    [Tooltip("Sorting order (higher = renders on top)")]
    public int sortingOrder = 10;
    
    [Header("Rotation Settings")]
    [Tooltip("If true, automatically detects board side based on tile position. If false, uses manual boardSide setting.")]
    public bool autoDetectBoardSide = true;
    
    [Tooltip("Manual board side (only used if autoDetectBoardSide is false).")]
    public BoardSide boardSide = BoardSide.Bottom;
    
    [Tooltip("Reference point for auto-detection (usually the board center). If null, uses world origin.")]
    public Transform boardCenter;
    
    [Tooltip("Manual rotation override (in degrees). If set to non-zero, this overrides board side rotation.")]
    [Range(0f, 360f)]
    public float manualRotation = 0f;
    
    private TileInfo tileInfo;
    private List<GameObject> houseObjects = new List<GameObject>();
    private GameObject hotelObject;
    
    void Awake()
    {
        tileInfo = GetComponent<TileInfo>();
        if (tileInfo == null)
        {
            Debug.LogWarning($"BuildingVisuals on {gameObject.name} has no TileInfo component!");
        }
    }
    
    /// <summary>
    /// Gets the rotation angle (in degrees) based on board side or manual rotation.
    /// </summary>
    float GetRotationAngle()
    {
        // Manual rotation override
        if (manualRotation != 0f)
        {
            return manualRotation;
        }
        
        // Auto-detect or use manual board side
        BoardSide side = autoDetectBoardSide ? DetectBoardSide() : boardSide;
        
        // Convert board side to rotation angle
        switch (side)
        {
            case BoardSide.Bottom: return 0f;    // Face up
            case BoardSide.Right:  return 90f;    // Face left
            case BoardSide.Top:    return 180f;   // Face down
            case BoardSide.Left:   return 270f;   // Face right
            default: return 0f;
        }
    }
    
    /// <summary>
    /// Auto-detects which side of the board this tile is on based on its position.
    /// </summary>
    public BoardSide DetectBoardSide()
    {
        Vector3 tilePos = transform.position;
        Vector3 centerPos = boardCenter != null ? boardCenter.position : Vector3.zero;
        
        Vector3 offset = tilePos - centerPos;
        
        // Determine which side based on largest absolute component
        float absX = Mathf.Abs(offset.x);
        float absY = Mathf.Abs(offset.y);
        
        if (absX > absY)
        {
            // Left or Right side
            return offset.x > 0 ? BoardSide.Right : BoardSide.Left;
        }
        else
        {
            // Top or Bottom side
            return offset.y > 0 ? BoardSide.Top : BoardSide.Bottom;
        }
    }
    
    void Start()
    {
        // Auto-update visuals on start
        UpdateVisuals();
    }
    
    /// <summary>
    /// Updates the visual representation based on current property state.
    /// Call this whenever houses/hotel change.
    /// Only shows buildings for Regular properties (not Utilities or Transportation).
    /// </summary>
    public void UpdateVisuals()
    {
        if (tileInfo == null || tileInfo.tileType != TileType.Property || tileInfo.property == null)
        {
            // Not a property tile, hide all buildings
            ClearAllBuildings();
            return;
        }
        
        Property prop = tileInfo.property;
        
        // Only show buildings for Regular properties
        if (prop.propertyType != PropertyType.Regular)
        {
            ClearAllBuildings();
            return;
        }
        
        Debug.Log($"[BuildingVisuals] Updating visuals for {prop.propertyName}: houses={prop.houses}, hasHotel={prop.hasHotel}, houseSprite={houseSprite != null}, hotelSprite={hotelSprite != null}");
        
        // If has hotel, show hotel and hide houses
        if (prop.hasHotel)
        {
            ShowHotel();
            HideHouses();
        }
        else if (prop.houses > 0)
        {
            ShowHouses(prop.houses);
            HideHotel();
        }
        else
        {
            // No buildings
            ClearAllBuildings();
        }
    }
    
    void ShowHouses(int count)
    {
        // Remove existing houses if count changed
        ClearHouses();
        
        if (houseSprite == null)
        {
            Debug.LogWarning($"BuildingVisuals on {gameObject.name}: houseSprite not assigned!");
            return;
        }
        
        // Create house sprites (1-4)
        int numHouses = Mathf.Clamp(count, 0, 4);
        float startX = -(numHouses - 1) * houseSpacing * 0.5f; // Center the houses
        
        Debug.Log($"[BuildingVisuals] Creating {numHouses} house sprites on {gameObject.name}");
        
        // Get rotation angle
        float rotationAngle = GetRotationAngle();
        
        for (int i = 0; i < numHouses; i++)
        {
            GameObject houseObj = new GameObject($"House_{i + 1}");
            houseObj.transform.SetParent(transform);
            houseObj.transform.localPosition = houseOffset + new Vector3(startX + i * houseSpacing, 0, 0);
            houseObj.transform.localScale = Vector3.one * houseScale;
            
            // Apply rotation
            houseObj.transform.localRotation = Quaternion.Euler(0, 0, rotationAngle);
            
            SpriteRenderer sr = houseObj.AddComponent<SpriteRenderer>();
            sr.sprite = houseSprite;
            sr.sortingLayerID = sortingLayerID;
            sr.sortingOrder = sortingOrder;
            
            Debug.Log($"[BuildingVisuals] Created house {i + 1} at localPos={houseObj.transform.localPosition}, rotation={rotationAngle}°, scale={houseScale}, sortingOrder={sortingOrder}");
            
            houseObjects.Add(houseObj);
        }
    }
    
    void ShowHotel()
    {
        // Remove hotel if already exists
        if (hotelObject != null)
        {
            #if UNITY_EDITOR
            if (!Application.isPlaying)
                DestroyImmediate(hotelObject);
            else
                Destroy(hotelObject);
            #else
            Destroy(hotelObject);
            #endif
        }
        
        if (hotelSprite == null)
        {
            Debug.LogWarning($"BuildingVisuals on {gameObject.name}: hotelSprite not assigned!");
            return;
        }
        
        // Get rotation angle
        float rotationAngle = GetRotationAngle();
        
        // Create hotel sprite
        hotelObject = new GameObject("Hotel");
        hotelObject.transform.SetParent(transform);
        hotelObject.transform.localPosition = hotelOffset;
        hotelObject.transform.localScale = Vector3.one * hotelScale;
        
        // Apply rotation
        hotelObject.transform.localRotation = Quaternion.Euler(0, 0, rotationAngle);
        
        SpriteRenderer sr = hotelObject.AddComponent<SpriteRenderer>();
        sr.sprite = hotelSprite;
        sr.sortingLayerID = sortingLayerID;
        sr.sortingOrder = sortingOrder;
        
        Debug.Log($"[BuildingVisuals] Created hotel on {gameObject.name} at localPos={hotelObject.transform.localPosition}, rotation={rotationAngle}°, scale={hotelScale}, sortingOrder={sortingOrder}");
    }
    
    void HideHouses()
    {
        ClearHouses();
    }
    
    void HideHotel()
    {
        if (hotelObject != null)
        {
            #if UNITY_EDITOR
            if (!Application.isPlaying)
                DestroyImmediate(hotelObject);
            else
                Destroy(hotelObject);
            #else
            Destroy(hotelObject);
            #endif
            hotelObject = null;
        }
    }
    
    void ClearHouses()
    {
        foreach (GameObject house in houseObjects)
        {
            if (house != null)
            {
                #if UNITY_EDITOR
                if (!Application.isPlaying)
                    DestroyImmediate(house);
                else
                    Destroy(house);
                #else
                Destroy(house);
                #endif
            }
        }
        houseObjects.Clear();
    }
    
    void ClearAllBuildings()
    {
        ClearHouses();
        HideHotel();
    }
    
    void OnDestroy()
    {
        ClearAllBuildings();
    }
}

/// <summary>
/// Static manager to automatically update building visuals across all tiles.
/// Attach this to a manager GameObject or call methods from Player.cs when buildings change.
/// </summary>
public static class BuildingVisualsManager
{
    /// <summary>
    /// Updates visuals for a specific tile (by TileInfo).
    /// </summary>
    public static void UpdateTileVisuals(TileInfo tile)
    {
        if (tile == null)
        {
            Debug.LogWarning("[BuildingVisualsManager] UpdateTileVisuals called with null tile!");
            return;
        }
        
        BuildingVisuals visuals = tile.GetComponent<BuildingVisuals>();
        if (visuals == null)
        {
            Debug.LogWarning($"[BuildingVisualsManager] Tile {tile.name} has no BuildingVisuals component!");
            return;
        }
        
        Debug.Log($"[BuildingVisualsManager] Updating visuals for tile: {tile.name}");
        visuals.UpdateVisuals();
    }
    
    /// <summary>
    /// Updates visuals for all property tiles in the scene.
    /// </summary>
    public static void UpdateAllTiles()
    {
        TileInfo[] allTiles = Object.FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property)
            {
                UpdateTileVisuals(tile);
            }
        }
    }
    
    /// <summary>
    /// Adds BuildingVisuals component to all property tiles that don't have it.
    /// </summary>
    public static void AddVisualsToAllTiles()
    {
        TileInfo[] allTiles = Object.FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        int added = 0;
        
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && tile.GetComponent<BuildingVisuals>() == null)
            {
                tile.gameObject.AddComponent<BuildingVisuals>();
                added++;
            }
        }
        
        Debug.Log($"BuildingVisualsManager: Added BuildingVisuals to {added} property tiles.");
    }
}
