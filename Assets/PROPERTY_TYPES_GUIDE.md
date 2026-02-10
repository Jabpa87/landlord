# Property Types Guide

## Overview

The game now supports three types of properties:

1. **Regular Properties** - Standard properties that can have houses and hotels built on them
2. **Utilities** - Electricity and Petroleum (water utility) - rent is based on dice roll × multiplier
3. **Transportation** - Railway properties - rent is based on how many transportation properties you own

## Property Type System

### PropertyType Enum

All properties now have a `propertyType` field that can be set to:
- `PropertyType.Regular` - Standard properties (default)
- `PropertyType.Utility` - Utilities (Electricity, Petroleum)
- `PropertyType.Transportation` - Transportation (Railway)

## Setting Up Properties

### Regular Properties

Regular properties work as before:
- Can build houses (1-4) and hotels
- Rent is based on `rentByLevel` array
- Must own full group to build
- Follows even building rules

**Example Setup:**
```csharp
Property regularProp = new Property
{
    propertyType = PropertyType.Regular,  // Can omit, this is default
    propertyName = "Kuje",
    groupId = "G1",
    tierLabel = "Satellite",
    price = 500000,
    rentByLevel = new int[] { 50000, 100000, 200000, 400000, 800000, 1000000 },
    houseCost = 150000,
    hotelCost = 300000
};
```

### Utilities

Utilities have special rent calculation:
- **Cannot build houses or hotels**
- Rent = `diceRoll × multiplier`
  - If you own **1 utility**: rent = diceRoll × 4
  - If you own **both utilities**: rent = diceRoll × 10
- Use `groupId = "UTILITY"` for both utilities

**Example Setup:**
```csharp
Property electricity = new Property
{
    propertyType = PropertyType.Utility,
    propertyName = "Electricity",
    groupId = "UTILITY",  // Both utilities should use same group
    tierLabel = "Utility",
    price = 150000,  // Set your price
    // rentByLevel is not used for utilities
    // houseCost and hotelCost are not applicable
};

Property petroleum = new Property
{
    propertyType = PropertyType.Utility,
    propertyName = "Petroleum",  // Water utility renamed to Petroleum
    groupId = "UTILITY",  // Same group as Electricity
    tierLabel = "Utility",
    price = 150000,
};
```

**Rent Calculation:**
- When a player lands on a utility, the dice roll is stored
- Rent is calculated as: `diceRoll × (4 if 1 utility owned, 10 if both owned)`
- Example: Dice roll = 6, player owns both utilities → Rent = 6 × 10 = ₦60

### Transportation

Transportation properties have fixed rent based on ownership:
- **Cannot build houses or hotels**
- Rent increases with number of transportation properties owned
- Use `groupId = "TRANSPORTATION"` for all transportation properties

**Example Setup:**
```csharp
Property railway1 = new Property
{
    propertyType = PropertyType.Transportation,
    propertyName = "Railway Station 1",
    groupId = "TRANSPORTATION",  // All transportation use same group
    tierLabel = "Transportation",
    price = 200000,  // Set your price
    // Default rent values (can be customized):
    transportationRent = new int[] { 25000, 50000, 100000, 200000 }
    // [0] = rent with 1 owned
    // [1] = rent with 2 owned
    // [2] = rent with 3 owned
    // [3] = rent with 4 owned
};
```

**Rent Calculation:**
- Rent is based on `transportationRent` array
- If player owns 1 transportation: rent = `transportationRent[0]` (₦25,000)
- If player owns 2 transportation: rent = `transportationRent[1]` (₦50,000)
- If player owns 3 transportation: rent = `transportationRent[2]` (₦100,000)
- If player owns 4 transportation: rent = `transportationRent[3]` (₦200,000)

## Configuring Properties in Unity Inspector

1. **Select a property tile** in the scene
2. **Find the TileInfo component**
3. **Expand the Property section**
4. **Set Property Type:**
   - For regular properties: `Regular` (default)
   - For utilities: `Utility`
   - For transportation: `Transportation`
5. **Set Group ID:**
   - Regular properties: Use their group (e.g., "G1", "G2")
   - Utilities: Use `"UTILITY"` for both
   - Transportation: Use `"TRANSPORTATION"` for all
6. **Fill in property details:**
   - Property Name
   - Price
   - For Regular: Set `rentByLevel`, `houseCost`, `hotelCost`
   - For Transportation: Set `transportationRent` array

## Important Notes

### Building Restrictions

- **Only Regular properties** can have houses and hotels
- Utilities and Transportation **cannot be developed**
- The build UI will not appear for utilities or transportation
- `CanBuildHouse()` and `CanBuildHotel()` automatically return `false` for non-regular properties

### Rent Display

When landing on a property owned by another player:
- **Regular properties**: Shows rent amount
- **Utilities**: Shows rent with dice roll info (e.g., "Dice: 6 × 10")
- **Transportation**: Shows rent with ownership count (e.g., "2 owned")

### BuildingVisuals

- `BuildingVisuals` component will only show houses/hotels for Regular properties
- Utilities and Transportation will not display building sprites (even if accidentally set)

## Example: Complete Setup

### Electricity Utility
```
Property Type: Utility
Property Name: Electricity
Group ID: UTILITY
Price: ₦150,000
```

### Petroleum Utility (Water)
```
Property Type: Utility
Property Name: Petroleum
Group ID: UTILITY
Price: ₦150,000
```

### Railway Station 1
```
Property Type: Transportation
Property Name: Railway Station 1
Group ID: TRANSPORTATION
Price: ₦200,000
Transportation Rent: [25000, 50000, 100000, 200000]
```

### Railway Station 2
```
Property Type: Transportation
Property Name: Railway Station 2
Group ID: TRANSPORTATION
Price: ₦200,000
Transportation Rent: [25000, 50000, 100000, 200000]
```

## Testing

1. **Test Utilities:**
   - Buy Electricity
   - Land on Petroleum (owned by another player) → Pay rent = diceRoll × 4
   - Buy Petroleum
   - Land on Electricity (owned by another player) → Pay rent = diceRoll × 10

2. **Test Transportation:**
   - Buy Railway Station 1
   - Land on Railway Station 2 (owned by another player) → Pay ₦25,000
   - Buy Railway Station 2
   - Land on Railway Station 1 (owned by another player) → Pay ₦50,000

3. **Test Building Restrictions:**
   - Try to build on a utility → Should not show build UI
   - Try to build on transportation → Should not show build UI
   - Build on regular property → Should work normally

## Troubleshooting

**Utility rent is ₦0:**
- Check that `lastDiceRoll` is being set (should be set automatically when landing)
- Verify the property type is set to `Utility`

**Transportation rent is wrong:**
- Check `transportationRent` array has 4 values
- Verify the property type is set to `Transportation`
- Check that `groupId` is "TRANSPORTATION" for all transportation properties

**Build UI appears on utilities/transportation:**
- Make sure `propertyType` is set correctly in Inspector
- The code should prevent this, but double-check the property type

**Houses appear on utilities/transportation:**
- `BuildingVisuals` should prevent this automatically
- Check that `propertyType` is set correctly
