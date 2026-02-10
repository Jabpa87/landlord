# Dice and Build Panel Visibility Fix

## 🔍 Problem
- Dice become inactive when game loads
- Build panel becomes inactive when game loads
- Need to manually activate them during gameplay

## ✅ Solution

### For Dice (DiceRoller Component)

1. **Select DiceRoller GameObject** in Hierarchy
2. In **Dice Roller** component, check these settings:
   - ✅ **Keep Dice Visible At Start** - This keeps dice visible when game loads
   - ✅ **Keep Dice Visible After Roll** - This keeps dice visible after animation
3. **Verify DiceRollPanel is ACTIVE** in Hierarchy (checkbox checked)

### For Build Panel (This is CORRECT behavior)

The build panel **should be inactive** at game start - this is correct! It only shows when:
- Player lands on their own property
- Player owns the full property group
- Player can build houses/hotels

**You don't need to activate it manually** - it will show automatically when needed.

---

## 🎯 Quick Setup Steps

### Step 1: Configure DiceRoller

1. Select **DiceRoller** GameObject
2. In Inspector, find **Dice Roller** component
3. Set these values:
   - **Keep Dice Visible At Start**: ✅ Checked
   - **Keep Dice Visible After Roll**: ✅ Checked
   - **Dice Roll Panel**: Assign your DiceRollPanel
   - **Dice 1 Faces**: Assign all 6 face images
   - **Dice 2 Faces**: Assign all 6 face images

### Step 2: Verify Hierarchy

Make sure in Hierarchy:
- ✅ **Canvas** is active
- ✅ **DiceRollPanel** is active (or will be activated by script)
- ✅ **Dice1Container** is active
- ✅ **Dice2Container** is active
- ✅ At least one face per die is active (Dice1Face1, Dice2Face1)

### Step 3: Test

1. **Play the game**
2. **Dice should be visible** immediately
3. **Click Roll Button** - animation should play
4. **Dice should stay visible** after animation

---

## 🐛 If Dice Still Invisible

### Check 1: Panel Active State
- Select **DiceRollPanel** in Hierarchy
- Ensure checkbox at top is **checked** (active)

### Check 2: Container Active State
- Expand **DiceRollPanel** in Hierarchy
- Check **Dice1Container** and **Dice2Container** are active

### Check 3: Face Images Active
- Expand each container
- Ensure at least **one face image is active** per die
- Only ONE face per die should be active at a time

### Check 4: Sprites Assigned
- Select each face image (Dice1Face1, Dice1Face2, etc.)
- In **Image** component, verify **Source Image** has a sprite

### Check 5: DiceRoller Settings
- Select **DiceRoller** GameObject
- Verify **Keep Dice Visible At Start** is checked ✅
- Verify **Keep Dice Visible After Roll** is checked ✅

---

## 📋 Build Panel Behavior (Normal)

The build panel being inactive at start is **CORRECT**. It will automatically:

- ✅ Show when player lands on owned property
- ✅ Show when player can build houses
- ✅ Hide when player clicks "Done" or ends turn
- ✅ Hide when player skips building

**You don't need to activate it manually** - the Player script handles this automatically.

---

## 🔧 Force Dice Visible (Debug Method)

If dice are still invisible, you can call this method:

1. **Select DiceRoller** GameObject
2. In Inspector, find **Dice Roller** component
3. Right-click component → **Force Dice Visible** (if available in context menu)
4. Or add this to a button/script:
   ```csharp
   DiceRoller diceRoller = FindObjectOfType<DiceRoller>();
   if (diceRoller != null)
   {
       diceRoller.ForceDiceVisible();
   }
   ```

---

## ✅ Expected Behavior

### At Game Start:
- ✅ Dice are visible (showing face 1)
- ✅ Build panel is hidden (correct)
- ✅ Property panel is hidden (correct)
- ✅ Jail panel is hidden (correct)

### During Gameplay:
- ✅ Dice animate when rolling
- ✅ Dice stay visible after roll
- ✅ Build panel shows when needed
- ✅ Property panel shows when landing on property
- ✅ Panels hide automatically when done

---

## 🎨 Recommended Setup

For best visual experience:

1. **Keep dice always visible** in a corner or bottom of screen
2. **Use semi-transparent background** for dice panel (optional)
3. **Position dice** where they don't obstruct gameplay
4. **Keep panels inactive** until needed (they'll show automatically)

---

## 📝 Checklist

- [ ] DiceRoller has "Keep Dice Visible At Start" checked
- [ ] DiceRoller has "Keep Dice Visible After Roll" checked
- [ ] DiceRollPanel is assigned in DiceRoller
- [ ] All dice faces are assigned (6 per die)
- [ ] DiceRollPanel is active in Hierarchy
- [ ] Dice containers are active
- [ ] At least one face per die is active
- [ ] All face images have sprites assigned
- [ ] Tested in play mode - dice are visible

---

**The build panel being inactive is normal - it will show automatically when needed!**
