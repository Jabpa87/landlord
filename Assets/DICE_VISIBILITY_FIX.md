# Dice Visibility Fix - Dice Becoming Invisible

## 🔍 Problem
Dice become invisible after rolling or when playing the game.

## ✅ Quick Fixes

### Fix 1: Keep Dice Visible After Roll (Recommended)

1. **Select DiceRoller GameObject** in Hierarchy
2. In **Dice Roller** component, find **Keep Dice Visible After Roll**
3. **Check the checkbox** ✅
4. This will keep the dice visible after the roll animation completes

### Fix 2: Ensure Dice Panel Stays Active

1. **Select DiceRollPanel** in Hierarchy
2. **Check that it's ACTIVE** (checkbox at top of Inspector should be checked)
3. If it's inactive, the dice inside won't be visible

### Fix 3: Check Dice Face Images Are Active

1. **Expand DiceRollPanel** in Hierarchy
2. **Check each dice container** (Dice1Container, Dice2Container)
3. **Verify at least one face per die is ACTIVE:**
   - For Dice 1: One of Dice1Face1 through Dice1Face6 should be active
   - For Dice 2: One of Dice2Face1 through Dice2Face6 should be active
4. **Only ONE face per die should be active** at a time

### Fix 4: Verify Parent Containers Are Active

Make sure all parent objects are active:
- ✅ Canvas (must be active)
- ✅ DiceRollPanel (should be active)
- ✅ Dice1Container (should be active)
- ✅ Dice2Container (should be active)
- ✅ At least one face image per die (should be active)

### Fix 5: Check Sprite Assignments

1. **Select each dice face image** (Dice1Face1, Dice1Face2, etc.)
2. In **Image** component, verify:
   - ✅ **Source Image** has a sprite assigned
   - ✅ Sprite is not null
   - ✅ Image component is enabled

### Fix 6: Use Separate Display Container (Advanced)

If you want dice to appear in a different location after rolling:

1. **Create a new Panel** for displaying dice:
   - Right-click Canvas → UI → Panel
   - Rename to `DiceDisplayContainer`
   - Position where you want dice to always be visible
   - Set to **ACTIVE**

2. **In DiceRoller component:**
   - Assign `DiceDisplayContainer` to **Dice Display Container** field
   - Check **Keep Dice Visible After Roll** ✅

3. **Move dice containers** to DiceDisplayContainer:
   - Drag `Dice1Container` and `Dice2Container` into `DiceDisplayContainer`
   - Or keep them in DiceRollPanel and they'll stay visible

---

## 🐛 Common Issues

### Issue: Panel Hides After Animation
**Solution**: Check "Keep Dice Visible After Roll" in DiceRoller component

### Issue: All Faces Are Inactive
**Solution**: Activate at least one face per die (Dice1Face1 and Dice2Face1)

### Issue: Sprites Not Assigned
**Solution**: Assign sprites to each face image's Image component

### Issue: Parent Container Inactive
**Solution**: Activate all parent containers (Canvas, Panel, Containers)

### Issue: Dice Outside Canvas
**Solution**: Ensure all dice elements are children of Canvas

---

## ✅ Verification Checklist

- [ ] DiceRollPanel is ACTIVE
- [ ] Dice1Container is ACTIVE
- [ ] Dice2Container is ACTIVE
- [ ] At least one face per die is ACTIVE
- [ ] All face images have sprites assigned
- [ ] "Keep Dice Visible After Roll" is checked in DiceRoller
- [ ] All parent GameObjects are active
- [ ] Dice elements are children of Canvas

---

## 🎯 Recommended Setup

For best results:

1. **Keep DiceRollPanel ACTIVE** at all times
2. **Check "Keep Dice Visible After Roll"** in DiceRoller
3. **Make panel background semi-transparent** or remove background image
4. **Position panel** where you want dice to always be visible

---

## 🔧 Debug Steps

1. **Play the game**
2. **Check Console** for any warnings from DiceRoller
3. **In Hierarchy**, verify dice elements are active during play
4. **Select a dice face image** and check if it's visible in Scene view
5. **Check RectTransform** - ensure dice aren't positioned off-screen

---

## 💡 Alternative: Always Visible Dice

If you want dice to always be visible (not just during roll):

1. **Don't use DiceRollPanel** for hiding
2. **Keep dice in a permanent HUD location**
3. **Only animate the faces**, not the visibility
4. **Set DiceRollPanel to null** in DiceRoller (dice will stay visible)

---

**If dice are still invisible after trying these fixes, check the Console for error messages and verify all references are assigned correctly.**
