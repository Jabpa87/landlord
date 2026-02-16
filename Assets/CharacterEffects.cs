using System;
using System.Collections.Generic;
using UnityEngine;

public static class CharacterEffectKeys
{
    public const string SkipRent = "skip_rent";
    public const string RentShield = "rent_shield";
    public const string GoBonusCard = "go_bonus_card";
    public const string MortgageBoost = "mortgage_boost";
    public const string BuildDiscount = "build_discount";
    public const string AuctionEdge = "auction_edge";
    public const string BailDiscount = "bail_discount";

    public const string StarterUtility = "starter_utility";
    public const string StarterSatellites = "starter_satellites";
    public const string PensionBonus = "pension_bonus";
    public const string CivilLegalShield = "civil_legal_shield";

    public const string TechRentDiscountOnSatellite = "tech_rent_discount_satellite";
    public const string PrimeBuildDiscount = "prime_build_discount";
    public const string SatelliteBuildDiscount = "satellite_build_discount";
    public const string MarketTradeBonus = "market_trade_bonus";
    public const string MarketTradeMortgagedAllowed = "market_trade_mortgaged_allowed";

    public const string LifestyleDrainOnGo = "lifestyle_drain_on_go";
    public const string SlowGrowth = "slow_growth";
    public const string LimitedLeverage = "limited_leverage";
    public const string CreditTrustOneTime = "credit_trust_one_time";
    public const string NoSafetyNet = "no_safety_net";
    public const string TaxPenaltyMarketQueen = "tax_penalty_market_queen";
    public const string TaxPenaltyMaitama = "tax_penalty_maitama";
    public const string BidPenaltyOnFailedAuction = "bid_penalty_failed_auction";
    public const string FreshGradMinBidIncrease = "fresh_grad_min_bid_increase";
    public const string CivilTradeDelay = "civil_trade_delay";
}

[Serializable]
public class CharacterEffectProfile
{
    [SerializeField] private List<string> perkKeys = new List<string>();
    [SerializeField] private List<string> faultKeys = new List<string>();

    public IReadOnlyList<string> PerkKeys => perkKeys;
    public IReadOnlyList<string> FaultKeys => faultKeys;

    public bool HasPerk(string key) => !string.IsNullOrEmpty(key) && perkKeys.Contains(key);
    public bool HasFault(string key) => !string.IsNullOrEmpty(key) && faultKeys.Contains(key);
    public bool HasEffect(string key) => HasPerk(key) || HasFault(key);

    public void AddPerk(string key)
    {
        if (string.IsNullOrWhiteSpace(key)) return;
        if (!perkKeys.Contains(key)) perkKeys.Add(key);
    }

    public void AddFault(string key)
    {
        if (string.IsNullOrWhiteSpace(key)) return;
        if (!faultKeys.Contains(key)) faultKeys.Add(key);
    }
}

public static class CharacterEffectCatalog
{
    public static string GetEffectDisplayName(string key)
    {
        switch (key)
        {
            case CharacterEffectKeys.SkipRent: return "Skip Rent";
            case CharacterEffectKeys.RentShield: return "Rent Shield";
            case CharacterEffectKeys.GoBonusCard: return "GO Bonus";
            case CharacterEffectKeys.MortgageBoost: return "Mortgage Boost";
            case CharacterEffectKeys.BuildDiscount: return "Build Discount";
            case CharacterEffectKeys.AuctionEdge: return "Auction Edge";
            case CharacterEffectKeys.BailDiscount: return "Bail Discount";
            case CharacterEffectKeys.StarterUtility: return "Starter Utility";
            case CharacterEffectKeys.StarterSatellites: return "Starter Satellites";
            case CharacterEffectKeys.PensionBonus: return "Pension Bonus";
            case CharacterEffectKeys.CivilLegalShield: return "Legal Shield";
            case CharacterEffectKeys.TechRentDiscountOnSatellite: return "Satellite Rent Discount";
            case CharacterEffectKeys.PrimeBuildDiscount: return "Prime Build Discount";
            case CharacterEffectKeys.SatelliteBuildDiscount: return "Satellite Build Discount";
            case CharacterEffectKeys.MarketTradeBonus: return "Trade Bonus";
            case CharacterEffectKeys.MarketTradeMortgagedAllowed: return "Trade Mortgaged Properties";
            case CharacterEffectKeys.LifestyleDrainOnGo: return "Lifestyle Drain";
            case CharacterEffectKeys.SlowGrowth: return "Slow Growth";
            case CharacterEffectKeys.LimitedLeverage: return "Limited Leverage";
            case CharacterEffectKeys.CreditTrustOneTime: return "Credit Trust";
            case CharacterEffectKeys.NoSafetyNet: return "No Safety Net";
            case CharacterEffectKeys.TaxPenaltyMarketQueen: return "Tax Surcharge";
            case CharacterEffectKeys.TaxPenaltyMaitama: return "Luxury Tax";
            case CharacterEffectKeys.BidPenaltyOnFailedAuction: return "Failed Bid Penalty";
            case CharacterEffectKeys.FreshGradMinBidIncrease: return "Higher Opening Bid";
            case CharacterEffectKeys.CivilTradeDelay: return "Trade Delay";
            default:
                return key;
        }
    }

    public static CharacterEffectProfile BuildProfile(Character character)
    {
        var profile = new CharacterEffectProfile();
        if (character == null) return profile;

        AddConfiguredKeys(character.perkEffectKeys, profile.AddPerk);
        AddConfiguredKeys(character.faultEffectKeys, profile.AddFault);

        // Fallback compatibility mapping for existing character assets.
        if (profile.PerkKeys.Count == 0 && profile.FaultKeys.Count == 0)
            ApplyFallbackByCharacterName(character.characterName, profile);

        // Secondary fallback from textual perk/fault names.
        MapTextToEffects(character.perk1 != null ? character.perk1.name : null, profile.AddPerk);
        MapTextToEffects(character.perk2 != null ? character.perk2.name : null, profile.AddPerk);
        MapTextToEffects(character.cast1 != null ? character.cast1.name : null, profile.AddFault);
        MapTextToEffects(character.cast2 != null ? character.cast2.name : null, profile.AddFault);

        return profile;
    }

    static void AddConfiguredKeys(string[] keys, Action<string> add)
    {
        if (keys == null || add == null) return;
        foreach (string raw in keys)
        {
            if (string.IsNullOrWhiteSpace(raw)) continue;
            add(raw.Trim().ToLowerInvariant());
        }
    }

    static void ApplyFallbackByCharacterName(string characterName, CharacterEffectProfile profile)
    {
        string n = (characterName ?? "").Trim();
        switch (n)
        {
            case "Garki Hustler":
            case "Street Hustler":
                profile.AddPerk(CharacterEffectKeys.SkipRent);
                profile.AddPerk(CharacterEffectKeys.SatelliteBuildDiscount);
                profile.AddFault(CharacterEffectKeys.NoSafetyNet);
                profile.AddFault(CharacterEffectKeys.CreditTrustOneTime); // Keeps existing mortgage/redeem quirks.
                break;
            case "Fresh Grad":
                profile.AddPerk(CharacterEffectKeys.GoBonusCard);
                profile.AddPerk(CharacterEffectKeys.GoBonusCard);
                profile.AddPerk(CharacterEffectKeys.CreditTrustOneTime);
                profile.AddPerk(CharacterEffectKeys.FreshGradMinBidIncrease);
                profile.AddFault(CharacterEffectKeys.LimitedLeverage);
                break;
            case "Maitama Prince":
            case "The Prince":
                profile.AddPerk(CharacterEffectKeys.MortgageBoost);
                profile.AddPerk(CharacterEffectKeys.PrimeBuildDiscount);
                profile.AddPerk(CharacterEffectKeys.StarterSatellites);
                profile.AddFault(CharacterEffectKeys.LifestyleDrainOnGo);
                profile.AddFault(CharacterEffectKeys.TaxPenaltyMaitama);
                break;
            case "Tech Prot\u00e9g\u00e9":
            case "Tech Protege":
                profile.AddPerk(CharacterEffectKeys.BuildDiscount);
                profile.AddPerk(CharacterEffectKeys.BailDiscount);
                profile.AddFault(CharacterEffectKeys.BidPenaltyOnFailedAuction);
                profile.AddFault(CharacterEffectKeys.TechRentDiscountOnSatellite);
                profile.AddPerk(CharacterEffectKeys.StarterUtility);
                break;
            case "Market Queen":
                profile.AddPerk(CharacterEffectKeys.AuctionEdge);
                profile.AddPerk(CharacterEffectKeys.MarketTradeBonus);
                profile.AddPerk(CharacterEffectKeys.MarketTradeMortgagedAllowed);
                profile.AddFault(CharacterEffectKeys.TaxPenaltyMarketQueen);
                break;
            case "Civil Servant":
                profile.AddPerk(CharacterEffectKeys.RentShield);
                profile.AddPerk(CharacterEffectKeys.PensionBonus);
                profile.AddPerk(CharacterEffectKeys.CivilLegalShield);
                profile.AddFault(CharacterEffectKeys.SlowGrowth);
                profile.AddFault(CharacterEffectKeys.CivilTradeDelay);
                break;
            case "Omobabalowo":
                profile.AddPerk(CharacterEffectKeys.BailDiscount);
                profile.AddFault(CharacterEffectKeys.TaxPenaltyMarketQueen);
                break;
        }
    }

    static void MapTextToEffects(string text, Action<string> add)
    {
        if (string.IsNullOrWhiteSpace(text) || add == null) return;
        string t = text.ToLowerInvariant();
        if (t.Contains("skip rent")) add(CharacterEffectKeys.SkipRent);
        if (t.Contains("rent shield")) add(CharacterEffectKeys.RentShield);
        if (t.Contains("go bonus")) add(CharacterEffectKeys.GoBonusCard);
        if (t.Contains("mortgage boost")) add(CharacterEffectKeys.MortgageBoost);
        if (t.Contains("build discount")) add(CharacterEffectKeys.BuildDiscount);
        if (t.Contains("auction edge")) add(CharacterEffectKeys.AuctionEdge);
        if (t.Contains("bail")) add(CharacterEffectKeys.BailDiscount);
        if (t.Contains("slow growth")) add(CharacterEffectKeys.SlowGrowth);
        if (t.Contains("no safety")) add(CharacterEffectKeys.NoSafetyNet);
        if (t.Contains("tax")) add(CharacterEffectKeys.TaxPenaltyMarketQueen);
    }
}
