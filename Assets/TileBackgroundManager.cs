using UnityEngine;

/// <summary>
/// Manager that automatically adds TileBackground to all tiles.
/// </summary>
public class TileBackgroundManager : MonoBehaviour
{
    [Header("Settings")]
    [Tooltip("Parent GameObject containing all tiles. If null, will search for 'BoardTiles'.")]
    public Transform boardTilesParent;
    
    [Tooltip("Background sprite to apply to all tiles (optional - leave null to use colored rectangle)")]
    public Sprite backgroundSprite;
    
    [Tooltip("Background color for all tiles")]
    public Color backgroundColor = new Color(0.9f, 0.9f, 0.9f, 1f);
    
    [Tooltip("Background size relative to tile (1.0 = same size, 1.1 = 10% larger)")]
    public Vector2 backgroundSize = Vector2.one;
    
    [Tooltip("Sorting order for backgrounds (should be lower than main tile)")]
    public int sortingOrder = -1;
    
    [ContextMenu("Add Background to All Tiles")]
    public void AddBackgroundToAllTiles()
    {
        if (boardTilesParent == null)
        {
            GameObject boardTiles = GameObject.Find("BoardTiles");
            if (boardTiles != null)
            {
                boardTilesParent = boardTiles.transform;
                Debug.Log("TileBackgroundManager: Found BoardTiles automatically");
            }
        }
        
        if (boardTilesParent == null)
        {
            Debug.LogError("TileBackgroundManager: BoardTiles parent not found! Please assign it in Inspector.");
            return;
        }
        
        TileInfo[] allTiles = boardTilesParent.GetComponentsInChildren<TileInfo>();
        
        if (allTiles.Length == 0)
        {
            Debug.LogWarning("TileBackgroundManager: No tiles found! Make sure BoardTilesParent is correct.");
            return;
        }
        
        int added = 0;
        int skipped = 0;
        
        foreach (TileInfo tile in allTiles)
        {
            // Check if already has TileBackground
            if (tile.GetComponent<TileBackground>() != null)
            {
                skipped++;
                continue;
            }
            
            // Add TileBackground
            TileBackground bg = tile.gameObject.AddComponent<TileBackground>();
            bg.backgroundSprite = backgroundSprite;
            bg.backgroundColor = backgroundColor;
            bg.backgroundSize = backgroundSize;
            bg.sortingOrder = sortingOrder;
            added++;
        }
        
        Debug.Log($"TileBackgroundManager: Added background to {added} tiles ({skipped} already had it)");
    }
    
    [ContextMenu("Update All Background Colors")]
    public void UpdateAllBackgroundColors()
    {
        TileBackground[] allBackgrounds = FindObjectsByType<TileBackground>(FindObjectsSortMode.None);
        
        foreach (TileBackground bg in allBackgrounds)
        {
            if (bg != null)
            {
                bg.SetBackgroundColor(backgroundColor);
            }
        }
        
        Debug.Log($"TileBackgroundManager: Updated {allBackgrounds.Length} tile backgrounds");
    }
}
