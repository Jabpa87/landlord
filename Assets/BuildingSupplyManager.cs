using UnityEngine;

/// <summary>
/// Manages the limited supply of houses and hotels (32 houses, 12 hotels total).
/// Prevents building if supply is exhausted.
/// </summary>
public class BuildingSupplyManager : MonoBehaviour
{
    [Header("Supply Limits")]
    [Tooltip("Total number of houses available in the game")]
    public int totalHouseSupply = 32;
    
    [Tooltip("Total number of hotels available in the game")]
    public int totalHotelSupply = 12;
    
    [Header("Current Supply")]
    [Tooltip("Current number of houses available (decreases when built, increases when sold)")]
    public int availableHouses = 32;
    
    [Tooltip("Current number of hotels available (decreases when built, increases when sold)")]
    public int availableHotels = 12;
    
    [Header("UI")]
    [Tooltip("Reference to UIDocumentManager for supply display")]
    public UIDocumentManager uiManager;
    
    private static BuildingSupplyManager instance;
    
    public static BuildingSupplyManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindFirstObjectByType<BuildingSupplyManager>();
            }
            return instance;
        }
    }
    
    void Awake()
    {
        // Ensure singleton
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Debug.LogWarning("Multiple BuildingSupplyManager instances found! Destroying duplicate.");
            Destroy(gameObject);
            return;
        }
        
        // Initialize supply
        availableHouses = totalHouseSupply;
        availableHotels = totalHotelSupply;
    }
    
    void Start()
    {
        // Count existing buildings on board
        CountExistingBuildings();
        
        // Auto-find UI manager if not assigned
        if (uiManager == null)
        {
            uiManager = FindFirstObjectByType<UIDocumentManager>();
        }
    }
    
    /// <summary>
    /// Count existing buildings on the board and update available supply.
    /// </summary>
    void CountExistingBuildings()
    {
        int housesOnBoard = 0;
        int hotelsOnBoard = 0;
        
        TileInfo[] allTiles = FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && tile.property != null)
            {
                if (tile.property.hasHotel)
                {
                    hotelsOnBoard++;
                }
                else
                {
                    housesOnBoard += tile.property.houses;
                }
            }
        }
        
        availableHouses = totalHouseSupply - housesOnBoard;
        availableHotels = totalHotelSupply - hotelsOnBoard;
        
        Debug.Log($"BuildingSupplyManager: Found {housesOnBoard} houses and {hotelsOnBoard} hotels on board.");
        Debug.Log($"BuildingSupplyManager: Available supply - Houses: {availableHouses}/{totalHouseSupply}, Hotels: {availableHotels}/{totalHotelSupply}");
    }
    
    /// <summary>
    /// Check if a house can be built (supply available).
    /// </summary>
    public bool CanBuildHouse()
    {
        return availableHouses > 0;
    }
    
    /// <summary>
    /// Check if a hotel can be built (supply available).
    /// </summary>
    public bool CanBuildHotel()
    {
        return availableHotels > 0;
    }
    
    /// <summary>
    /// Build a house (decrease supply).
    /// </summary>
    public bool BuildHouse()
    {
        if (availableHouses <= 0)
        {
            Debug.LogWarning("BuildingSupplyManager: Cannot build house - supply exhausted!");
            return false;
        }
        
        availableHouses--;
        UpdateSupplyUI();
        Debug.Log($"BuildingSupplyManager: Built house. Remaining: {availableHouses}/{totalHouseSupply}");
        return true;
    }
    
    /// <summary>
    /// Build a hotel (decrease hotel supply, return 4 houses to supply).
    /// </summary>
    public bool BuildHotel()
    {
        if (availableHotels <= 0)
        {
            Debug.LogWarning("BuildingSupplyManager: Cannot build hotel - supply exhausted!");
            return false;
        }
        
        availableHotels--;
        availableHouses += 4; // Houses return to bank when hotel is built
        UpdateSupplyUI();
        Debug.Log($"BuildingSupplyManager: Built hotel. Remaining: {availableHotels}/{totalHotelSupply}, Houses returned: 4 (Total available: {availableHouses})");
        return true;
    }
    
    /// <summary>
    /// Sell a house (return to supply).
    /// </summary>
    public void SellHouse()
    {
        availableHouses++;
        UpdateSupplyUI();
        Debug.Log($"BuildingSupplyManager: Sold house. Available: {availableHouses}/{totalHouseSupply}");
    }
    
    /// <summary>
    /// Sell a hotel (return hotel to supply, return 4 houses to supply).
    /// </summary>
    public void SellHotel()
    {
        availableHotels++;
        availableHouses += 4; // Get 4 houses back when selling hotel
        UpdateSupplyUI();
        Debug.Log($"BuildingSupplyManager: Sold hotel. Available: {availableHotels}/{totalHotelSupply}, Houses returned: 4 (Total available: {availableHouses})");
    }
    
    /// <summary>
    /// Update supply display in UI (if UI element exists).
    /// </summary>
    void UpdateSupplyUI()
    {
        if (uiManager != null && uiManager.BuildingSupplyText != null)
        {
            uiManager.BuildingSupplyText.Text = $"Houses: {availableHouses}/{totalHouseSupply} | Hotels: {availableHotels}/{totalHotelSupply}";
        }
    }
    
    /// <summary>
    /// Get current supply status as string.
    /// </summary>
    public string GetSupplyStatus()
    {
        return $"Houses: {availableHouses}/{totalHouseSupply} | Hotels: {availableHotels}/{totalHotelSupply}";
    }
}
