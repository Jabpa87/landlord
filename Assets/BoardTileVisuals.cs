using System;
using TMPro;
using UnityEngine;

/// <summary>
/// Stage A Visualizer: auto-colors SpriteRenderers by Property.tierLabel and
/// auto-creates/updates world-space TextMeshPro labels for each TileInfo.
///
/// Attach this to a parent GameObject (e.g., BoardTiles) and use the context menu.
/// </summary>
[ExecuteAlways]
public class BoardTileVisuals : MonoBehaviour
{
    [Header("Scan")]
    [Tooltip("If set, scan starts from this root. If null, uses this GameObject.")]
    public Transform root;

    [Tooltip("Include inactive tiles when scanning.")]
    public bool includeInactive = true;

    [Header("Coloring")]
    [Tooltip("If true, tints the tile SpriteRenderer based on tierLabel.")]
    public bool tintSpriteRenderer = true;

    public Color satelliteColor = new Color32(74, 144, 226, 255);   // blue
    public Color midColor = new Color32(245, 166, 35, 255);         // orange
    public Color primeColor = new Color32(123, 97, 255, 255);       // purple
    public Color defaultColor = Color.white;

    [Range(0f, 1f)]
    [Tooltip("How strong the tier tint should be (0 = no tint, 1 = full tier color).")]
    public float tintStrength = 0.25f;

    [Header("Labels (World TextMeshPro)")]
    [Tooltip("If true, creates missing TMP label objects under each tile.")]
    public bool autoCreateLabels = true;

    [Tooltip("If true, updates existing label texts every time Apply is run.")]
    public bool updateExistingLabels = true;

    public string placeLabelName = "PlaceLabelTMP";
    public string priceLabelName = "PriceLabelTMP";

    [Tooltip("Scale for label objects (world space).")]
    public Vector3 labelLocalScale = new Vector3(0.1f, 0.1f, 0.1f);

    [Tooltip("Local Y position for the place name label (relative to tile).")]
    public float placeLabelY = 0.15f;

    [Tooltip("Local Y position for the price label (relative to tile).")]
    public float priceLabelY = -0.15f;

    [Tooltip("Text color for labels.")]
    public Color labelColor = Color.black;

    [Tooltip("Optional outline for readability.")]
    public bool enableOutline = true;

    [Tooltip("Outline color for TMP labels.")]
    public Color outlineColor = Color.black;

    [Range(0f, 1f)]
    public float outlineWidth = 0.2f;

    [ContextMenu("Apply Visuals To Tiles")]
    public void ApplyVisualsToTiles()
    {
        Transform scanRoot = root != null ? root : transform;
        if (scanRoot == null)
        {
            Debug.LogError("BoardTileVisuals: No root to scan.");
            return;
        }

        TileInfo[] tiles = scanRoot.GetComponentsInChildren<TileInfo>(includeInactive);
        int updated = 0;

        foreach (TileInfo tile in tiles)
        {
            if (tile == null) continue;

            ApplyToTile(tile);
            updated++;
        }

        Debug.Log($"BoardTileVisuals: Applied visuals to {updated} tiles.");
    }

    void ApplyToTile(TileInfo tile)
    {
        SpriteRenderer sr = tile.GetComponent<SpriteRenderer>();
        if (tintSpriteRenderer && sr != null)
        {
            sr.color = GetTintedColorFor(tile, sr.color);
        }

        if (!autoCreateLabels && !updateExistingLabels) return;

        // Only label Property tiles by default (but you can still show tile type)
        if (tile.tileType != TileType.Property)
        {
            // Hide existing labels if present
            HideIfExists(tile.transform, placeLabelName);
            HideIfExists(tile.transform, priceLabelName);
            return;
        }

        if (tile.property == null)
        {
            // Show placeholder if desired
            EnsureLabel(tile, sr, placeLabelName, placeLabelY, "NO DATA");
            EnsureLabel(tile, sr, priceLabelName, priceLabelY, "");
            return;
        }

        string placeName = tile.property.propertyName ?? "";
        string price = tile.property.price > 0 ? $"₦{tile.property.price:N0}" : "";

        EnsureLabel(tile, sr, placeLabelName, placeLabelY, placeName);
        EnsureLabel(tile, sr, priceLabelName, priceLabelY, price);
    }

    Color GetTintedColorFor(TileInfo tile, Color current)
    {
        // If sprite already uses a custom PNG, we softly tint it.
        Color tier = defaultColor;
        string label = tile != null && tile.property != null ? (tile.property.tierLabel ?? "") : "";

        if (label.Equals("Satellite", StringComparison.OrdinalIgnoreCase)) tier = satelliteColor;
        else if (label.Equals("Mid", StringComparison.OrdinalIgnoreCase)) tier = midColor;
        else if (label.Equals("Prime", StringComparison.OrdinalIgnoreCase)) tier = primeColor;

        if (tintStrength <= 0f) return current;
        if (tintStrength >= 1f) return tier;

        return Color.Lerp(current, tier, tintStrength);
    }

    void EnsureLabel(TileInfo tile, SpriteRenderer sr, string childName, float localY, string text)
    {
        Transform t = tile.transform.Find(childName);

        if (t == null)
        {
            if (!autoCreateLabels) return;

            GameObject go = new GameObject(childName);
            go.transform.SetParent(tile.transform, false);
            go.transform.localPosition = new Vector3(0f, localY, -0.1f);
            go.transform.localRotation = Quaternion.identity;
            go.transform.localScale = labelLocalScale;

            TextMeshPro tmp = go.AddComponent<TextMeshPro>();
            ConfigureTmp(tmp, sr);
            tmp.text = text;
            return;
        }

        if (!updateExistingLabels) return;

        TextMeshPro tmpExisting = t.GetComponent<TextMeshPro>();
        if (tmpExisting == null)
        {
            tmpExisting = t.gameObject.AddComponent<TextMeshPro>();
            ConfigureTmp(tmpExisting, sr);
        }

        // Keep it visible and positioned
        t.gameObject.SetActive(true);
        t.localPosition = new Vector3(0f, localY, -0.1f);
        t.localScale = labelLocalScale;
        tmpExisting.text = text;

        // Update sorting if needed
        ConfigureSorting(tmpExisting, sr);
    }

    void HideIfExists(Transform parent, string childName)
    {
        Transform t = parent.Find(childName);
        if (t != null) t.gameObject.SetActive(false);
    }

    void ConfigureTmp(TextMeshPro tmp, SpriteRenderer sr)
    {
        tmp.alignment = TextAlignmentOptions.Center;
        tmp.color = labelColor;
        tmp.fontSize = 6; // with labelLocalScale this stays small
        tmp.textWrappingMode = TextWrappingModes.NoWrap;
        tmp.richText = false;

        if (enableOutline)
        {
            tmp.outlineColor = outlineColor;
            tmp.outlineWidth = outlineWidth;
        }

        ConfigureSorting(tmp, sr);
    }

    void ConfigureSorting(TextMeshPro tmp, SpriteRenderer sr)
    {
        var mr = tmp.GetComponent<MeshRenderer>();
        if (mr == null) return;

        if (sr != null)
        {
            mr.sortingLayerID = sr.sortingLayerID;
            mr.sortingOrder = sr.sortingOrder + 1;
        }
        else
        {
            mr.sortingOrder = 1;
        }
    }
}

