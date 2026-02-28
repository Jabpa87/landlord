using UnityEngine;

/// <summary>
/// Display mode for the single dynamic card panel (Chance, Community Chest, Perk, Get Out of Jail Free).
/// </summary>
public enum CardPanelMode
{
    Chance,
    CommunityChest,
    Perk,
    GetOutOfJailFree
}

/// <summary>
/// ScriptableObject that maps CardPanelMode and PerkCardType to sprites from Assets/Sprites/Cards/.
/// Create via Assets > Create > Card Icon Catalog and assign the card sprites in the Inspector.
/// </summary>
[CreateAssetMenu(fileName = "CardIconCatalog", menuName = "Game/Card Icon Catalog", order = 1)]
public class CardIconCatalog : ScriptableObject
{
    [Header("Deck / special cards")]
    [SerializeField] Sprite chanceCard;
    [SerializeField] Sprite communityChestCard;
    [SerializeField] Sprite getOutOfJailCard;

    [Header("Perk cards")]
    [SerializeField] Sprite skipRent;
    [SerializeField] Sprite goBonus;
    [SerializeField] Sprite mortgageBoost;
    [SerializeField] Sprite buildDiscount;
    [SerializeField] Sprite rentShield;
    [SerializeField] Sprite bailDiscount;
    [SerializeField] Sprite auctionEdge;

    [Header("Fallback when no sprite assigned")]
    [SerializeField] Sprite defaultCard;

    Sprite ResolveFallback()
    {
        if (defaultCard != null) return defaultCard;
        return PlayerVisualManager.GetOrCreateFallbackTokenSprite();
    }

    public Sprite GetSprite(CardPanelMode mode)
    {
        Sprite fallback = ResolveFallback();
        switch (mode)
        {
            case CardPanelMode.Chance: return chanceCard != null ? chanceCard : fallback;
            case CardPanelMode.CommunityChest: return communityChestCard != null ? communityChestCard : fallback;
            case CardPanelMode.GetOutOfJailFree: return getOutOfJailCard != null ? getOutOfJailCard : fallback;
            case CardPanelMode.Perk: return fallback;
            default: return fallback;
        }
    }

    public Sprite GetSprite(PerkCardType type)
    {
        Sprite fallback = ResolveFallback();
        switch (type)
        {
            case PerkCardType.SkipRent: return skipRent != null ? skipRent : fallback;
            case PerkCardType.GoBonus: return goBonus != null ? goBonus : fallback;
            case PerkCardType.MortgageBoost: return mortgageBoost != null ? mortgageBoost : fallback;
            case PerkCardType.BuildDiscount: return buildDiscount != null ? buildDiscount : fallback;
            case PerkCardType.RentShield: return rentShield != null ? rentShield : fallback;
            case PerkCardType.BailDiscount: return bailDiscount != null ? bailDiscount : fallback;
            case PerkCardType.AuctionEdge: return auctionEdge != null ? auctionEdge : fallback;
            default: return fallback;
        }
    }
}
