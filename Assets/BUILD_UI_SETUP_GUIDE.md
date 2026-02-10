# Build House/Hotel UI Setup Guide

## ✅ Code Implementation Complete

The building system has been fully implemented in `Player.cs`:
- ✅ Full group ownership check
- ✅ Even building rule enforcement
- ✅ Build house logic (0-4 houses)
- ✅ Auto-upgrade to hotel when 4 houses (single button)
- ✅ Rent calculation based on houses/hotel

## 🎨 Unity Visual Setup Steps

### Step 1: Create Build Panel in HUD

1. **Find your HUD Canvas** (the one with `currentPlayerText`, `diceText`, `walletText`)

2. **Create Build Panel**:
   - Right-click on Canvas → UI → Panel
   - Rename it to `BuildPanel`
   - Set it to **inactive** by default (uncheck checkbox in Inspector)
   - Position it where you want (e.g., center, bottom, or side)

3. **Add Build Info Text**:
   - Right-click on `BuildPanel` → UI → Text - TextMeshPro
   - Rename to `BuildInfoText`
   - Set text to empty or placeholder
   - Adjust font size (e.g., 18-24)
   - Center align the text

4. **Add Build House Button**:
   - Right-click on `BuildPanel` → UI → Button - TextMeshPro
   - Rename to `BuildHouseButton`
   - Set button text to "BUILD HOUSE" (or placeholder)
   - Position below the info text
   - **IMPORTANT**: In the button's OnClick(), add:
     - Drag the Player GameObject
     - Select `Player.BuildHouse()`

5. **Add Close/Done Button (Optional but Recommended)**:
   - Right-click on `BuildPanel` → UI → Button - TextMeshPro
   - Rename to `CloseBuildButton`
   - Set button text to "DONE" or "CLOSE"
   - Position at bottom or corner
   - **IMPORTANT**: In the button's OnClick(), add:
     - Drag the Player GameObject
     - Select `Player.HideBuildUI()`

### Step 2: Assign References in Player Inspector

1. **Select your Player GameObject** in the scene

2. **In the Player component**, find the **"Build UI (HUD Panel)"** section

3. **Assign the references**:
   - **Build Panel**: Drag `BuildPanel` from Hierarchy
   - **Build Info Text**: Drag `BuildInfoText` (TextMeshProUGUI component)
   - **Build House Button**: Drag `BuildHouseButton` (Button component)
   - **Build House Button Text**: Drag the TextMeshProUGUI child of `BuildHouseButton` (optional, for direct text access)

### Step 3: Test the System

1. **Start the game**
2. **Buy properties** in the same group (e.g., G1: Kuje + Karshi)
3. **Land on one of your properties** after owning the full group
4. **Build Panel should appear** in HUD showing:
   - Property name and group
   - Current buildings (houses/hotel)
   - Current rent
   - Build button (enabled if you can afford and can build evenly)
5. **Click Build House** to build
6. **Build 4 houses** → Button automatically changes to "BUILD HOTEL"
7. **Click Build Hotel** → Upgrades to hotel

## 📋 How It Works

### Building Rules (Monopoly Standard):
1. **Must own full group** to build (e.g., all properties in G1)
2. **Even building rule**: You can only build on the property with the fewest houses, or if all properties are within 1 house of each other
3. **Max 4 houses** per property
4. **Hotel = 4 houses + hotel cost** (houses return to bank)
5. **One hotel per property** maximum

### Button States:
- **"BUILD HOUSE X/4"** - Shows when you can build a house (0-3 houses)
- **"BUILD HOTEL"** - Shows when you have 4 houses (ready for hotel)
- **"HOTEL BUILT"** - Shows when property already has a hotel (disabled)
- **"CAN'T BUILD (Even building rule)"** - Shows when you can't build evenly (disabled)

### Example Flow:
1. Own Kuje (G1) + Karshi (G1) → Full group owned ✓
2. Land on Kuje → Build panel appears
3. Click "BUILD HOUSE 1/4" → Builds 1 house on Kuje
4. Land on Karshi → Build panel appears
5. Click "BUILD HOUSE 1/4" → Builds 1 house on Karshi (even building)
6. Continue until both have 4 houses
7. Land on Kuje → Button shows "BUILD HOTEL"
8. Click → Builds hotel, houses return to bank

## 🐛 Troubleshooting

**Build panel doesn't show:**
- Check that `buildPanel` is assigned in Player Inspector
- Check that you own the full group (check console logs)
- Check that the panel GameObject exists and is a child of Canvas

**Build button doesn't work:**
- Check that `BuildHouseButton` OnClick() is linked to `Player.BuildHouse()`
- Check console for error messages (can't afford, can't build evenly, etc.)

**Build button always disabled:**
- Check if you own the full group (all properties in same groupId)
- Check if you have enough money
- Check if even building rule is blocking (build on property with fewest houses first)

## 🎯 Next Steps (Future Features)

- Visual house/hotel sprites on tiles
- Bank house/hotel supply tracking
- Mortgage system
- Property trading
- Auction system
