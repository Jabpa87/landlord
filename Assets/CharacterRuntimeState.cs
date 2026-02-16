using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public enum EffectUsageState
{
    Unused,
    Active,
    Used,
    Locked
}

[Serializable]
public enum PerkTimingPreference
{
    Auto,
    Early,
    Mid,
    Late
}

[Serializable]
public class CharacterRuntimeState
{
    public int turnsUntilPension = -1;
    public int turnsUntilHotelUnlock = -1;
    public EffectUsageState legalShieldState = EffectUsageState.Unused;
    public EffectUsageState creditTrustState = EffectUsageState.Unused;
    public EffectUsageState bidPenaltyState = EffectUsageState.Unused;
    public float boardPurchasedRatio;
    public string gamePhase = "Early";
}

[Serializable]
public class CharacterBehaviorStatusItem
{
    public string effectKey;
    public string title;
    public string description;
    public string state;
    public string counter;
    public bool isPerk;
    public string iconHint;
}
