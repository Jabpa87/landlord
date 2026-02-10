# Financial System Analysis & Rebalancing Plan

## Current System Analysis

### Current Values:
- **Starting Money:** ₦2,000,000
- **GO Salary:** ₦200,000 (GameSettings) / ₦2,000,000 (TurnManager - **INCONSISTENT!**)
- **Tax:** ₦100,000
- **Cheapest Property:** ₦500,000 (Kuje)
- **Most Expensive Property:** ₦6,500,000 (Wuse)
- **Property Price Range:** ₦500k - ₦6.5M (13x difference)

### Current Problems:
1. **Starting money too low** - Only 4x the cheapest property (should be ~25x)
2. **GO salary inconsistent** - Two different values in code
3. **Property prices too high** - Cheapest property is 25% of starting money
4. **Rent too low** - Base rent = price/10, which is very low
5. **Transportation rent too low** - ₦25k-₦200k vs property prices
6. **Utilities rent unpredictable** - Depends on dice roll (could be ₦4-₦60)
7. **Building costs high** - ₦150k-₦500k per house vs property prices
8. **No financial balance** - Players can't afford multiple properties

---

## Real Monopoly Financial System

### Classic Monopoly (US):
- **Starting Money:** $1,500
- **GO Salary:** $200
- **Cheapest Property:** $60 (Mediterranean Ave)
- **Most Expensive:** $400 (Boardwalk)
- **Ratio Analysis:**
  - Starting money : Cheapest property = 25:1
  - Starting money : Most expensive = 3.75:1
  - GO salary : Starting money = 1:7.5
  - GO salary : Cheapest property = 3.33:1

### Modern Monopoly (UK/International):
- **Starting Money:** £1,500
- **GO Salary:** £200
- **Property Prices:** £60 - £400
- **Same ratios as classic**

### Key Principles:
1. **Starting money should allow buying 2-3 cheap properties**
2. **GO salary should allow buying cheapest property after 3-4 passes**
3. **Rent should be 5-10% of property price (base rent)**
4. **Rent with houses should scale dramatically (5x, 15x, 45x, 80x, 125x)**
5. **Building costs should be 25-50% of property price**
6. **Transportation rent should be significant (₦25-₦200 in classic = $25-$200)**

---

## Proposed Balanced System

### Base Scale Factor:
Using **1 Naira = 1 Dollar** equivalent for simplicity:
- Classic Monopoly: $1,500 starting
- Our system: ₦1,500,000 starting (1000x scale for modern feel)

### Recommended Values:

#### **Starting Money & GO:**
- **Starting Money:** ₦1,500,000 (allows buying 2-3 cheap properties)
- **GO Salary:** ₦200,000 (consistent across all files)
- **Tax:** ₦100,000 (unchanged, reasonable)

#### **Property Prices (Rebalanced):**
Based on Monopoly ratios, scaled to Nigerian context:

**Satellite (G1-G3):** Cheapest tier
- G1: ₦60,000 - ₦80,000 (2 properties)
- G2: ₦100,000 - ₦120,000 (3 properties)
- G3: ₦140,000 - ₦180,000 (3 properties)

**Mid (G4-G8):** Middle tier
- G4: ₦180,000 - ₦220,000 (3 properties)
- G5: ₦220,000 - ₦260,000 (3 properties)
- G6: ₦260,000 - ₦300,000 (3 properties)
- G7: ₦300,000 - ₦350,000 (3 properties)
- G8: ₦350,000 - ₦400,000 (3 properties)

**Prime (G9-G10):** Most expensive
- G9: ₦350,000 - ₦400,000 (3 properties)
- G10: ₦400,000 - ₦450,000 (2 properties)

**Total Range:** ₦60,000 - ₦450,000 (7.5x difference, more balanced)

#### **Rent System:**
**Base Rent Formula:** `price / 10` (10% of property price)
- ₦60,000 property → Base rent: ₦6,000
- ₦450,000 property → Base rent: ₦45,000

**Rent Multipliers (with houses):**
- Base (0 houses): 1x
- 1 house: 5x
- 2 houses: 15x
- 3 houses: 45x
- 4 houses: 80x
- Hotel: 125x

**Example Rent Table (₦100,000 property):**
- Base: ₦10,000
- 1 house: ₦50,000
- 2 houses: ₦150,000
- 3 houses: ₦450,000
- 4 houses: ₦800,000
- Hotel: ₦1,250,000

#### **Building Costs:**
Based on property tier and price:
- **Satellite:** House = 25% of property price, Hotel = 50% of property price
- **Mid:** House = 30% of property price, Hotel = 60% of property price
- **Prime:** House = 35% of property price, Hotel = 70% of property price

**Examples:**
- ₦60,000 property: House = ₦15,000, Hotel = ₦30,000
- ₦200,000 property: House = ₦60,000, Hotel = ₦120,000
- ₦400,000 property: House = ₦140,000, Hotel = ₦280,000

#### **Transportation (Railway):**
- **Price:** ₦200,000 each (4 stations)
- **Rent:**
  - 1 owned: ₦25,000
  - 2 owned: ₦50,000
  - 3 owned: ₦100,000
  - 4 owned: ₦200,000

#### **Utilities (Electricity, Petroleum):**
- **Price:** ₦150,000 each (2 utilities)
- **Rent:** Dice roll × multiplier
  - 1 utility owned: diceRoll × 4
  - Both utilities owned: diceRoll × 10
  - Example: Roll 6, own both → ₦60 rent (might need adjustment)

**Utility Rent Adjustment:**
Since dice roll is 2-12, rent could be:
- 1 utility: ₦8 - ₦48 (too low!)
- Both utilities: ₦20 - ₦120 (still low)

**Better Utility Rent:**
- 1 utility: diceRoll × 40 = ₦80 - ₦480
- Both utilities: diceRoll × 100 = ₦200 - ₦1,200

#### **Card Values:**
Rebalance card money amounts:
- Small amounts: ₦10,000 - ₦50,000
- Medium amounts: ₦50,000 - ₦100,000
- Large amounts: ₦100,000 - ₦200,000
- Property repair: ₦25,000 per house, ₦100,000 per hotel

---

## Implementation Plan

### Step 1: Fix Inconsistencies
- Standardize GO salary to ₦200,000 everywhere
- Update starting money to ₦1,500,000

### Step 2: Rebalance Property Prices
- Reduce all property prices by ~80-90%
- Maintain relative ratios between groups
- Keep tier structure (Satellite/Mid/Prime)

### Step 3: Recalculate Rents
- Keep rent formula (price / 10 for base)
- Verify rent multipliers are correct
- Ensure rent scales properly

### Step 4: Rebalance Building Costs
- Calculate as percentage of property price
- Adjust by tier (Satellite/Mid/Prime)

### Step 5: Fix Utilities & Transportation
- Increase utility rent multipliers
- Verify transportation rent is appropriate

### Step 6: Update Card Values
- Scale card money amounts appropriately

---

## Expected Outcomes

### Financial Balance:
- Players can buy 2-3 cheap properties at start
- Players can afford to build houses after buying properties
- Rent becomes meaningful (not too low, not too high)
- Game economy flows properly
- Bankruptcy happens at appropriate times
- Trading becomes viable

### Gameplay Flow:
- Early game: Buy properties, collect rent
- Mid game: Build houses, increase rent
- Late game: Hotels, high rent, bankruptcies
- Natural progression from start to finish

---

## Files to Modify

1. **NigerianStatesData.cs** - Property prices, rent tables
2. **Player.cs** - Starting money
3. **TurnManager.cs** - GO salary
4. **TileInfo.cs** - Transportation rent, utility multipliers
5. **CardSystem.cs** - Card money amounts
6. **GameSettings.cs** - Starting money, GO salary

---

## Testing Checklist

- [ ] Starting money allows buying 2-3 cheap properties
- [ ] GO salary allows buying cheapest property after 3-4 passes
- [ ] Rent is meaningful (not too low)
- [ ] Building costs are affordable
- [ ] Utilities rent is significant
- [ ] Transportation rent is appropriate
- [ ] Card values are balanced
- [ ] Game economy flows naturally
- [ ] Bankruptcy happens at appropriate times
