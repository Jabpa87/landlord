# Dice Animation Quick Reference

## 🎯 Quick Setup Steps

1. **Create 6 dice face sprites** (1-6 dots) → Import as Sprites
2. **Create DiceRollPanel** (UI Panel, inactive by default)
3. **Create 2 dice containers** (Dice1Container, Dice2Container)
4. **Create 12 face images** (6 per die, only first face active)
5. **Create DiceRoller GameObject** → Add DiceRoller script
6. **Assign faces to arrays** (in order 1-6)
7. **Connect to TurnManager** → Assign DiceRoller

---

## 📋 Component Settings

### DiceRoller Component
- **Roll Duration**: `2` seconds
- **Face Change Speed**: `10` faces/sec
- **Use Bounce Animation**: ✅
- **Bounce Scale**: `1.2`

### Arrays (Size: 6)
- **Dice 1 Faces**: [Face1, Face2, Face3, Face4, Face5, Face6]
- **Dice 2 Faces**: [Face1, Face2, Face3, Face4, Face5, Face6]

---

## 🔧 TurnManager Integration

**Dice Animation Section:**
- **Dice Roller**: Assign DiceRoller GameObject

**That's it!** The system automatically uses animation if DiceRoller is assigned.

---

## 🎨 Creating Dice Face Sprites

### Option 1: Simple Dots
- Create 200x200px images
- White/colored circles on transparent background
- 1-6 dots arranged in standard dice pattern

### Option 2: Use Online Resources
- Search "dice face sprite" or "dice face PNG"
- Download free assets
- Ensure they're consistent in style

### Option 3: Use Text/Number
- Create Image with TextMeshPro child
- Show numbers 1-6 instead of dots
- Simpler but less visual

---

## ⚡ Common Issues

| Problem | Solution |
|---------|----------|
| No animation | Check DiceRoller assigned in TurnManager |
| Faces don't show | Verify sprites assigned, check active states |
| Too fast/slow | Adjust Roll Duration and Face Change Speed |
| No bounce | Enable "Use Bounce Animation" |

---

## 📐 Recommended Sizes

- **Dice Panel**: 400x200 (for 2 dice side by side)
- **Dice Container**: 150x150 each
- **Dice Face Sprites**: 200x200 pixels (or larger)

---

## 🎵 Optional: Sound Effects

1. Add 2 AudioSource components to DiceRoller
2. Assign audio clips
3. Drag to Roll Start Sound and Roll End Sound fields

---

**Full guide: See DICE_ANIMATION_SETUP_GUIDE.md**
