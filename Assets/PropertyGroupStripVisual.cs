using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Keeps the property-group strip visual in sync with TileInfo.property.groupId.
/// This component updates only the dedicated group strip and never the ownership marker.
/// </summary>
[RequireComponent(typeof(TileInfo))]
public class PropertyGroupStripVisual : MonoBehaviour
{
    [Header("Target Strip (independent from ownership marker)")]
    [Tooltip("Dedicated uGUI Image used for the property group strip.")]
    public Image groupStripImage;
    [Tooltip("Optional SpriteRenderer strip. Used only when Image is not assigned.")]
    public SpriteRenderer groupStripSpriteRenderer;
    [Tooltip("Auto-find group strip refs by name if not assigned.")]
    public bool autoFindStripReference = true;

    [Header("Group Sprites")]
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

    [Header("Runtime Guard")]
    [Tooltip("Re-apply expected strip sprite/color if runtime logic overrides it.")]
    public bool guardAgainstRuntimeOverrides = true;
    [Tooltip("Check every N frames when guard is enabled.")]
    [Range(1, 300)]
    public int guardCheckEveryNFrames = 15;

    TileInfo _tileInfo;
    Sprite _expectedSprite;
    static readonly Color WhiteTint = Color.white;
    Dictionary<string, Sprite> _groupSpriteByKey;

    void Awake()
    {
        _tileInfo = GetComponent<TileInfo>();
        EnsureStripReference();
        ApplyGroupStripVisual(force: true);
    }

    void OnEnable()
    {
        ApplyGroupStripVisual(force: true);
    }

    void Start()
    {
        ApplyGroupStripVisual(force: true);
    }

    void LateUpdate()
    {
        if (!guardAgainstRuntimeOverrides) return;
        if (guardCheckEveryNFrames <= 1 || Time.frameCount % guardCheckEveryNFrames == 0)
        {
            RestoreIfOverridden();
        }
    }

    void OnApplicationFocus(bool hasFocus)
    {
        if (hasFocus) ApplyGroupStripVisual(force: true);
    }

    void OnApplicationPause(bool pauseStatus)
    {
        if (!pauseStatus) ApplyGroupStripVisual(force: true);
    }

    void OnValidate()
    {
        if (_tileInfo == null) _tileInfo = GetComponent<TileInfo>();
        if (autoFindStripReference) EnsureStripReference();
        BuildSpriteMap();
    }

    public void ApplyGroupStripVisual(bool force = false)
    {
        if (_tileInfo == null) _tileInfo = GetComponent<TileInfo>();
        if (_tileInfo == null) return;

        EnsureStripReference();
        BuildSpriteMap();

        Property prop = _tileInfo.property;
        if (_tileInfo.tileType != TileType.Property || prop == null || prop.propertyType != PropertyType.Regular)
        {
            return;
        }

        Sprite targetSprite = GetSpriteForGroup(prop.groupId);
        if (targetSprite == null) return;

        _expectedSprite = targetSprite;

        if (groupStripImage != null)
        {
            if (force || groupStripImage.sprite != targetSprite) groupStripImage.sprite = targetSprite;
            groupStripImage.color = WhiteTint;
            groupStripImage.enabled = true;
        }

        if (groupStripSpriteRenderer != null)
        {
            if (force || groupStripSpriteRenderer.sprite != targetSprite) groupStripSpriteRenderer.sprite = targetSprite;
            groupStripSpriteRenderer.color = WhiteTint;
            groupStripSpriteRenderer.enabled = true;
        }
    }

    void RestoreIfOverridden()
    {
        if (_expectedSprite == null) return;

        if (groupStripImage != null)
        {
            if (groupStripImage.sprite != _expectedSprite) groupStripImage.sprite = _expectedSprite;
            if (groupStripImage.color != WhiteTint) groupStripImage.color = WhiteTint;
        }

        if (groupStripSpriteRenderer != null)
        {
            if (groupStripSpriteRenderer.sprite != _expectedSprite) groupStripSpriteRenderer.sprite = _expectedSprite;
            if (groupStripSpriteRenderer.color != WhiteTint) groupStripSpriteRenderer.color = WhiteTint;
        }
    }

    void EnsureStripReference()
    {
        if (!autoFindStripReference) return;
        if (groupStripImage == null)
        {
            foreach (Image img in GetComponentsInChildren<Image>(true))
            {
                if (img == null || img.gameObject == null) continue;
                string name = img.gameObject.name.ToLowerInvariant();
                if (IsOwnershipName(name)) continue;
                if (name.Contains("group") && (name.Contains("strip") || name.Contains("bar") || name.Contains("color")))
                {
                    groupStripImage = img;
                    break;
                }
            }
        }

        if (groupStripSpriteRenderer == null)
        {
            foreach (SpriteRenderer sr in GetComponentsInChildren<SpriteRenderer>(true))
            {
                if (sr == null || sr.gameObject == null || sr.gameObject == gameObject) continue;
                string name = sr.gameObject.name.ToLowerInvariant();
                if (IsOwnershipName(name)) continue;
                if (name.Contains("group") && (name.Contains("strip") || name.Contains("bar") || name.Contains("color")))
                {
                    groupStripSpriteRenderer = sr;
                    break;
                }
            }
        }
    }

    static bool IsOwnershipName(string objectName)
    {
        return objectName.Contains("owner") || objectName.Contains("ownership") || objectName.Contains("tag");
    }

    void BuildSpriteMap()
    {
        if (_groupSpriteByKey == null)
            _groupSpriteByKey = new Dictionary<string, Sprite>(StringComparer.OrdinalIgnoreCase);
        else
            _groupSpriteByKey.Clear();

        AddGroupSprite("BROWN", groupBrown);
        AddGroupSprite("G1", groupG1);
        AddGroupSprite("G2", groupG2);
        AddGroupSprite("G3", groupG3);
        AddGroupSprite("G4", groupG4);
        AddGroupSprite("G5", groupG5);
        AddGroupSprite("G6", groupG6);
        AddGroupSprite("G7", groupG7);
        AddGroupSprite("G8", groupG8);
        AddGroupSprite("G9", groupG9);
        AddGroupSprite("G10", groupG10);
    }

    void AddGroupSprite(string key, Sprite sprite)
    {
        if (sprite == null) return;
        _groupSpriteByKey[key] = sprite;
    }

    Sprite GetSpriteForGroup(string rawGroupId)
    {
        if (string.IsNullOrWhiteSpace(rawGroupId))
            return fallbackGroupSprite;

        string groupId = NormalizeGroupId(rawGroupId);
        if (_groupSpriteByKey != null && _groupSpriteByKey.TryGetValue(groupId, out Sprite sprite) && sprite != null)
            return sprite;

        return fallbackGroupSprite;
    }

    static string NormalizeGroupId(string rawGroupId)
    {
        string v = rawGroupId.Trim().ToUpperInvariant();
        v = v.Replace(" ", "").Replace("-", "").Replace("_", "");
        if (v == "BROWN") return "BROWN";
        if (v.StartsWith("G")) return v;
        return v;
    }

    public void ApplySharedGroupSprites(
        Sprite brown, Sprite g1, Sprite g2, Sprite g3, Sprite g4, Sprite g5, Sprite g6,
        Sprite g7, Sprite g8, Sprite g9, Sprite g10, Sprite fallback)
    {
        groupBrown = brown;
        groupG1 = g1;
        groupG2 = g2;
        groupG3 = g3;
        groupG4 = g4;
        groupG5 = g5;
        groupG6 = g6;
        groupG7 = g7;
        groupG8 = g8;
        groupG9 = g9;
        groupG10 = g10;
        fallbackGroupSprite = fallback;
        BuildSpriteMap();
    }
}
