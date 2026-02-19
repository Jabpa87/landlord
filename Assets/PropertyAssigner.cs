using UnityEngine;
using System.Collections.Generic;
using System.Text.RegularExpressions;
#if UNITY_EDITOR
using UnityEditor;
#endif

// Assigns Abuja property data to tiles. Uses tile name to separate Regular (buildable) / Utility / Transportation.
// Regular: properties that accept buildings. Transport: name contains "transport" or "railroad". Utility: name contains "utility".
// Data from Abuja_Monopoly_Finance_Table_with_Utilities_and_Transport.csv (22 regular + 4 transport + 2 utility).
public class PropertyAssigner : MonoBehaviour
{
    enum TileCategory { Regular, Transport, Utility }

    static TileCategory GetTileCategory(TileInfo tile)
    {
        if (tile == null) return TileCategory.Regular;
        string name = (tile.gameObject.name ?? "").ToLowerInvariant();
        if (name.Contains("utility")) return TileCategory.Utility;
        if (name.Contains("transport") || name.Contains("railroad")) return TileCategory.Transport;
        return TileCategory.Regular;
    }

    [ContextMenu("Assign Regular Properties Only")]
    public void AssignRegularPropertiesOnly()
    {
        var regularTiles = GetPropertyTilesByCategory(TileCategory.Regular);
        var regularData = GetRegularData();
        int SortByTileNumber(TileInfo a, TileInfo b) =>
            ExtractTileNumber(a.gameObject.name).CompareTo(ExtractTileNumber(b.gameObject.name));
        regularTiles.Sort(SortByTileNumber);

        int assigned = 0;
        for (int i = 0; i < regularTiles.Count && i < regularData.Count; i++)
        {
            TileInfo tile = regularTiles[i];
            PropertyData d = regularData[i];
            Property p = new Property
            {
                propertyType = PropertyType.Regular,
                propertyName = d.placeName,
                groupId = d.groupId,
                tierLabel = d.tierLabel ?? "",
                price = d.price,
                rentByLevel = d.rentByLevel ?? new int[6],
                houseCost = d.houseCost,
                hotelCost = d.hotelCost,
                houses = 0,
                hasHotel = false,
                owner = null
            };
            AssignToTile(tile, p);
            Debug.Log($"✓ [Regular] {tile.gameObject.name}: {d.placeName} [{d.groupId}] ₦{d.price:N0}");
            assigned++;
        }
        Debug.Log($"=== Assign Regular Only Complete === {assigned} tiles assigned.");
        RefreshBoardTileVisuals();
        SaveAssets();
    }

    [ContextMenu("Assign Transportation Only")]
    public void AssignTransportationOnly()
    {
        var transportTiles = GetPropertyTilesByCategory(TileCategory.Transport);
        var transportData = GetTransportData();
        int SortByTileNumber(TileInfo a, TileInfo b) =>
            ExtractTileNumber(a.gameObject.name).CompareTo(ExtractTileNumber(b.gameObject.name));
        transportTiles.Sort(SortByTileNumber);

        int assigned = 0;
        for (int i = 0; i < transportTiles.Count && i < transportData.Count; i++)
        {
            TileInfo tile = transportTiles[i];
            PropertyData d = transportData[i];
            int[] rent = (d.transportationRent != null && d.transportationRent.Length >= 4)
                ? d.transportationRent
                : new int[] { 34000, 170000, 340000, 680000 };
            Property p = new Property
            {
                propertyType = PropertyType.Transportation,
                propertyName = d.placeName,
                groupId = "TRANSPORTATION",
                tierLabel = "",
                price = d.price,
                transportationRent = rent,
                rentByLevel = new int[6],
                houseCost = 0,
                hotelCost = 0,
                houses = 0,
                hasHotel = false,
                owner = null
            };
            AssignToTile(tile, p);
            Debug.Log($"✓ [Transport] {tile.gameObject.name}: {d.placeName} ₦{d.price:N0}");
            assigned++;
        }
        Debug.Log($"=== Assign Transportation Only Complete === {assigned} tiles assigned.");
        RefreshBoardTileVisuals();
        SaveAssets();
    }

    [ContextMenu("Assign Utility Only")]
    public void AssignUtilityOnly()
    {
        var utilityTiles = GetPropertyTilesByCategory(TileCategory.Utility);
        var utilityData = GetUtilityData();
        int SortByTileNumber(TileInfo a, TileInfo b) =>
            ExtractTileNumber(a.gameObject.name).CompareTo(ExtractTileNumber(b.gameObject.name));
        utilityTiles.Sort(SortByTileNumber);

        int assigned = 0;
        for (int i = 0; i < utilityTiles.Count && i < utilityData.Count; i++)
        {
            TileInfo tile = utilityTiles[i];
            PropertyData d = utilityData[i];
            Property p = new Property
            {
                propertyType = PropertyType.Utility,
                propertyName = d.placeName,
                groupId = "UTILITY",
                tierLabel = "",
                price = d.price,
                rentByLevel = new int[6],
                houseCost = 0,
                hotelCost = 0,
                houses = 0,
                hasHotel = false,
                owner = null
            };
            AssignToTile(tile, p);
            Debug.Log($"✓ [Utility] {tile.gameObject.name}: {d.placeName} ₦{d.price:N0}");
            assigned++;
        }
        Debug.Log($"=== Assign Utility Only Complete === {assigned} tiles assigned.");
        RefreshBoardTileVisuals();
        SaveAssets();
    }

    [ContextMenu("Assign All (Regular + Transport + Utility)")]
    public void AssignStatesToProperties()
    {
        AssignRegularPropertiesOnly();
        AssignTransportationOnly();
        AssignUtilityOnly();
        Debug.Log("=== Assign All Complete ===");
    }

    List<TileInfo> GetPropertyTilesByCategory(TileCategory category)
    {
        var list = new List<TileInfo>();
        foreach (TileInfo tile in FindObjectsByType<TileInfo>(FindObjectsSortMode.None))
        {
            if (tile.tileType == TileType.Property && GetTileCategory(tile) == category)
                list.Add(tile);
        }
        return list;
    }

    static List<PropertyData> GetRegularData()
    {
        var list = new List<PropertyData>();
        foreach (var d in NigerianStatesData.GetStatesData())
            if (d.dataKind == NigerianStatesData.DataKindRegular) list.Add(d);
        return list;
    }

    static List<PropertyData> GetTransportData()
    {
        var list = new List<PropertyData>();
        foreach (var d in NigerianStatesData.GetStatesData())
            if (d.dataKind == NigerianStatesData.DataKindTransport) list.Add(d);
        return list;
    }

    static List<PropertyData> GetUtilityData()
    {
        var list = new List<PropertyData>();
        foreach (var d in NigerianStatesData.GetStatesData())
            if (d.dataKind == NigerianStatesData.DataKindUtility) list.Add(d);
        return list;
    }

    void AssignToTile(TileInfo tile, Property p)
    {
#if UNITY_EDITOR
        Undo.RecordObject(tile, "Assign Property Data");
        EditorUtility.SetDirty(tile);
#endif
        tile.property = p;
    }

    void RefreshBoardTileVisuals()
    {
        BoardTileVisuals boardVisuals = FindFirstObjectByType<BoardTileVisuals>();
        if (boardVisuals != null)
        {
            boardVisuals.ApplyVisualsToTiles();
            Debug.Log("BoardTileVisuals: Refreshed tile labels.");
        }

        PropertyOwnershipTagManager ownershipManager = FindFirstObjectByType<PropertyOwnershipTagManager>();
        if (ownershipManager != null)
        {
            ownershipManager.RefreshAllTags();
        }
    }

    void SaveAssets()
    {
#if UNITY_EDITOR
        AssetDatabase.SaveAssets();
#endif
    }

    private int ExtractTileNumber(string tileName)
    {
        var match = Regex.Match(tileName ?? "", @"Tile[_\s]*(\d+)", RegexOptions.IgnoreCase);
        if (match.Success && int.TryParse(match.Groups[1].Value, out int number))
            return number;
        match = Regex.Match(tileName ?? "", @"(\d+)");
        if (match.Success && int.TryParse(match.Groups[1].Value, out int fallback))
            return fallback;
        return 999;
    }

    [ContextMenu("Clear All Properties")]
    public void ClearAllProperties()
    {
        int cleared = 0;
        foreach (TileInfo tile in FindObjectsByType<TileInfo>(FindObjectsSortMode.None))
        {
            if (tile.tileType == TileType.Property && tile.property != null)
            {
#if UNITY_EDITOR
                Undo.RecordObject(tile, "Clear Property Data");
                EditorUtility.SetDirty(tile);
#endif
                tile.property = null;
                cleared++;
            }
        }
        Debug.Log($"Cleared {cleared} property assignments.");
        SaveAssets();
    }

    [ContextMenu("Validate Property Assignments")]
    public void ValidatePropertyAssignments()
    {
        int propertyTiles = 0;
        int valid = 0;
        int missing = 0;
        int invalid = 0;

        foreach (TileInfo tile in FindObjectsByType<TileInfo>(FindObjectsSortMode.None))
        {
            if (tile == null || tile.tileType != TileType.Property)
                continue;

            propertyTiles++;
            if (tile.property == null)
            {
                missing++;
                Debug.LogWarning($"[Property Validation] Missing property data on tile '{tile.gameObject.name}'.");
                continue;
            }

            bool nameOk = !string.IsNullOrWhiteSpace(tile.property.propertyName);
            bool priceOk = tile.property.price > 0;
            if (!nameOk || !priceOk)
            {
                invalid++;
                Debug.LogWarning($"[Property Validation] Invalid property on tile '{tile.gameObject.name}': " +
                                 $"name='{tile.property.propertyName}', price={tile.property.price}.");
                continue;
            }

            valid++;
        }

        Debug.Log($"[Property Validation] tiles={propertyTiles}, valid={valid}, missing={missing}, invalid={invalid}.");
        if (missing > 0 || invalid > 0)
            Debug.LogWarning("[Property Validation] Found assignment issues. Run 'Assign All (Regular + Transport + Utility)' and re-check.");
    }
}
