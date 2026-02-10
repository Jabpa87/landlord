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

    public Sprite GetSprite(CardPanelMode mode)
    {
        switch (mode)
        {
            case CardPanelMode.Chance: return chanceCard != null ? chanceCard : defaultCard;
            case CardPanelMode.CommunityChest: return communityChestCard != null ? communityChestCard : defaultCard;
            case CardPanelMode.GetOutOfJailFree: return getOutOfJailCard != null ? getOutOfJailCard : defaultCard;
            case CardPanelMode.Perk: return defaultCard;
            default: return defaultCard;
        }
    }

    public Sprite GetSprite(PerkCardType type)
    {
        switch (type)
        {
            case PerkCardType.SkipRent: return skipRent != null ? skipRent : defaultCard;
            case PerkCardType.GoBonus: return goBonus != null ? goBonus : defaultCard;
            case PerkCardType.MortgageBoost: return mortgageBoost != null ? mortgageBoost : defaultCard;
            case PerkCardType.BuildDiscount: return buildDiscount != null ? buildDiscount : defaultCard;
            case PerkCardType.RentShield: return rentShield != null ? rentShield : defaultCard;
            case PerkCardType.BailDiscount: return bailDiscount != null ? bailDiscount : defaultCard;
            case PerkCardType.AuctionEdge: return auctionEdge != null ? auctionEdge : defaultCard;
            default: return defaultCard;
        }
    }
}
