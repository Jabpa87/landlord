using UnityEngine;

public enum TileType
{
    Go,
    Property,
    Chance,
    CommunityChest,
    Tax,
    Jail,
    FreeParking,
    GoToJail
}

// Type of property - determines rent calculation and building rules
public enum PropertyType
{
    Regular,        // Standard properties that can have houses/hotels
    Utility,        // Utilities (Electricity, Petroleum) - rent based on dice roll
    Transportation  // Transportation (Railway) - rent based on number owned
}

public class TileInfo : MonoBehaviour
{
    public TileType tileType;
    
    // If this tile is a property, assign the property details in the Inspector
    public Property property;
}

// Simple data container describing a purchasable property on the board
[System.Serializable]
public class Property
{
    // Type of property (Regular, Utility, or Transportation)
    public PropertyType propertyType = PropertyType.Regular;
    
    // Human-readable name shown in logs / UI
    public string propertyName;
    
    // A group/set id used for "own all to build" and even-building rules (e.g., "G1", "Prime-A")
    // For utilities: use "UTILITY" group
    // For transportation: use "TRANSPORTATION" group
    public string groupId;
    
    // Optional tier/label for UI (e.g., Prime/Mid/Satellite)
    public string tierLabel;
    
    // Purchase price for the property
    public int price;

    // Rent table by development level (only used for Regular properties):
    // index 0 = base rent (no houses)
    // index 1..4 = rent with 1..4 houses
    // index 5 = rent with hotel
    public int[] rentByLevel = new int[6];
    
    // For Transportation: rent amounts based on number owned
    // [0] = rent with 1 owned, [1] = rent with 2 owned, [2] = rent with 3 owned, [3] = rent with 4 owned
    // REBALANCED: Based on Monopoly standard (₦25k, ₦50k, ₦100k, ₦200k) - appropriate for ₦200k property price
    public int[] transportationRent = new int[4] { 25000, 50000, 100000, 200000 };
    
    // For Utilities: rent multipliers based on number owned
    // If own 1 utility: rent = diceRoll * 4
    // If own both utilities: rent = diceRoll * 10
    // These multipliers are handled in CurrentRent calculation
    
    // Cost to build one house on this property (requires owning full group)
    // Only applicable for Regular properties
    public int houseCost;
    
    // Cost to upgrade to a hotel (typically requires 4 houses first)
    // Only applicable for Regular properties
    public int hotelCost;
    
    // Current development state (only applicable for Regular properties)
    [Range(0, 4)]
    public int houses = 0;
    public bool hasHotel = false;
    
    // The Player who currently owns this property (null = unowned)
    public Player owner;
    
    // Mortgage state
    public bool isMortgaged = false;
    
    // Last dice roll (used for utility rent calculation)
    // This should be set by the game when a player lands on a utility
    [System.NonSerialized]
    public int lastDiceRoll = 0;
    
    // Calculate current rent based on property type
    // Note: Mortgaged properties return 0 rent
    public int CurrentRent
    {
        get
        {
            // Mortgaged properties don't collect rent
            if (isMortgaged) return 0;
            
            if (propertyType == PropertyType.Regular)
            {
                // Regular property: use rentByLevel based on houses/hotel
                if (rentByLevel == null || rentByLevel.Length < 6)
                    return 0;
                
                if (hasHotel)
                    return rentByLevel[5];
                
                int h = Mathf.Clamp(houses, 0, 4);
                return rentByLevel[h];
            }
            else if (propertyType == PropertyType.Utility)
            {
                // Utility: rent = diceRoll * multiplier
                // REBALANCED: 40x for 1 utility, 100x for both (makes utilities meaningful)
                // Dice roll is 2-12, so rent range: ₦80-₦480 (1 utility) or ₦200-₦1,200 (both)
                if (lastDiceRoll == 0) return 0; // No dice roll yet
                
                int utilitiesOwned = CountUtilitiesOwned();
                int multiplier = utilitiesOwned == 1 ? 40 : 100; // 40x if 1 owned, 100x if both owned
                return lastDiceRoll * multiplier;
            }
            else if (propertyType == PropertyType.Transportation)
            {
                // Transportation: rent based on number of transportation properties owned
                int transportOwned = CountTransportationOwned();
                if (transportationRent == null || transportationRent.Length == 0)
                {
                    // Default values if not set
                    int[] defaultRent = new int[] { 25000, 50000, 100000, 200000 };
                    int index = Mathf.Clamp(transportOwned - 1, 0, defaultRent.Length - 1);
                    return defaultRent[index];
                }
                int index2 = Mathf.Clamp(transportOwned - 1, 0, transportationRent.Length - 1);
                return transportationRent[index2];
            }
            
            return 0;
        }
    }
    
    // Count how many utilities the owner of this property owns
    private int CountUtilitiesOwned()
    {
        if (owner == null) return 0;
        
        int count = 0;
        TileInfo[] allTiles = Object.FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.propertyType == PropertyType.Utility &&
                tile.property.owner == owner)
            {
                count++;
            }
        }
        return count;
    }
    
    // Count how many transportation properties the owner of this property owns
    private int CountTransportationOwned()
    {
        if (owner == null) return 0;
        
        int count = 0;
        TileInfo[] allTiles = Object.FindObjectsByType<TileInfo>(FindObjectsSortMode.None);
        foreach (TileInfo tile in allTiles)
        {
            if (tile.tileType == TileType.Property && 
                tile.property != null && 
                tile.property.propertyType == PropertyType.Transportation &&
                tile.property.owner == owner)
            {
                count++;
            }
        }
        return count;
    }
}
