using UnityEngine;

public enum PerkCardType
{
    SkipRent,
    RentShield,
    GoBonus,
    MortgageBoost,
    AuctionEdge,
    BailDiscount,
    BuildDiscount
}

[System.Serializable]
public class PerkCardInstance
{
    public PerkCardType type;
    public string name;
    public string description;
    public string sideJoke;
    public int usesRemaining;
    public int maxUses;
    public float percentValue;
    public int fixedValue;

    public bool CanUse => usesRemaining > 0;

    public void ConsumeUse()
    {
        if (usesRemaining > 0)
            usesRemaining--;
    }
}

public static class PerkCardCatalog
{
    public static PerkCardInstance CreateForCharacter(Character character, PerkCardTuning tuning)
    {
        if (character == null) return null;
        var profile = CharacterEffectCatalog.BuildProfile(character);
        if (profile == null) return null;

        if (profile.HasPerk(CharacterEffectKeys.SkipRent))
        {
            return new PerkCardInstance
            {
                type = PerkCardType.SkipRent,
                name = "Skip Rent",
                description = "Once per game, skip paying rent when landing on an owned property.",
                sideJoke = "Osula skips rent. Shadow of the street, always finds a way.",
                maxUses = 1,
                usesRemaining = 1
            };
        }

        if (profile.HasPerk(CharacterEffectKeys.GoBonusCard))
        {
            return new PerkCardInstance
            {
                type = PerkCardType.GoBonus,
                name = "GO Bonus",
                description = $"Activate to collect +{Mathf.RoundToInt(tuning.goBonusPercent * 100)}% of GO salary. {tuning.goBonusUses} uses.",
                sideJoke = "NYSC allowance hits different on payday.",
                maxUses = tuning.goBonusUses,
                usesRemaining = tuning.goBonusUses,
                percentValue = tuning.goBonusPercent
            };
        }

        if (profile.HasPerk(CharacterEffectKeys.MortgageBoost))
        {
            return new PerkCardInstance
            {
                type = PerkCardType.MortgageBoost,
                name = "Mortgage Boost",
                description = $"Once per game, mortgage a property for +{Mathf.RoundToInt(tuning.mortgageBoostPercent * 100)}% extra value.",
                sideJoke = "Daddy's credit line still works.",
                maxUses = 1,
                usesRemaining = 1,
                percentValue = tuning.mortgageBoostPercent
            };
        }

        if (profile.HasPerk(CharacterEffectKeys.BuildDiscount))
        {
            return new PerkCardInstance
            {
                type = PerkCardType.BuildDiscount,
                name = "Build Discount",
                description = $"Once per game, build at {Mathf.RoundToInt(tuning.buildDiscountPercent * 100)}% discount.",
                sideJoke = "Code discounts, brick by brick.",
                maxUses = 1,
                usesRemaining = 1,
                percentValue = tuning.buildDiscountPercent
            };
        }

        if (profile.HasPerk(CharacterEffectKeys.AuctionEdge))
        {
            return new PerkCardInstance
            {
                type = PerkCardType.AuctionEdge,
                name = "Auction Edge",
                description = "Your first bid can match the minimum without extra increment.",
                sideJoke = "She buys low and smiles.",
                maxUses = 1,
                usesRemaining = 1
            };
        }

        if (profile.HasPerk(CharacterEffectKeys.RentShield))
        {
            return new PerkCardInstance
            {
                type = PerkCardType.RentShield,
                name = "Rent Shield",
                description = $"Once per game, reduce rent by {Mathf.RoundToInt(tuning.rentShieldPercent * 100)}%.",
                sideJoke = "Paperwork delays the landlord.",
                maxUses = 1,
                usesRemaining = 1,
                percentValue = tuning.rentShieldPercent
            };
        }

        if (profile.HasPerk(CharacterEffectKeys.BailDiscount))
        {
            return new PerkCardInstance
            {
                type = PerkCardType.BailDiscount,
                name = "Bail Discount",
                description = $"Once per game, pay ₦{tuning.bailDiscountAmount:N0} to leave jail.",
                sideJoke = "Rich boy pays bail like Uber fare.",
                maxUses = 1,
                usesRemaining = 1,
                fixedValue = tuning.bailDiscountAmount
            };
        }

        return null;
    }

    public static PerkCardInstance CreateForCharacter(string characterName, PerkCardTuning tuning)
    {
        if (string.IsNullOrEmpty(characterName)) return null;
        return CreateForCharacter(new Character { characterName = characterName }, tuning);
    }
}

public struct PerkCardTuning
{
    public float goBonusPercent;
    public int goBonusUses;
    public float mortgageBoostPercent;
    public float rentShieldPercent;
    public float buildDiscountPercent;
    public int bailDiscountAmount;
}
