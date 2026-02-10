# Button Positioning Guide - Reference Layout

## 🎯 Target Layout (Like Reference Image)

```
┌─────────────────────────────────────────┐
│         GAME BOARD AREA                 │
│                                         │
│              (Board)                    │
│                                         │
└─────────────────────────────────────────┘
┌──────────┬──────────────┬──────────────┐
│ Player1  │              │   Player2    │
│ Player3  │   DICE +     │   Player4    │
│          │   ROLL BTN   │              │
└──────────┴──────────────┴──────────────┘
┌─────────────────────────────────────────┐
│ MENU │ BUILD │ SELL │ MORT │ RED │ TRADE│
└─────────────────────────────────────────┘
```

---

## 📐 Layout Structure

### Bottom Panel (Main Controls Area)
- **Left Side**: Player 1 & Player 3 info
- **Center**: Dice display + Roll Dice button
- **Right Side**: Player 2 & Player 4 info

### Action Buttons Row (Bottom)
- Horizontal row of action buttons
- MENU, BUILD, SELL, MORTGAGE, REDEEM, TRADE, END TURN

---

## 🛠️ How to Adjust Positions

### Method 1: Edit USS File

Open `Assets/UI Toolkit/USS/main-styles.uss` and modify:

#### Adjust Bottom Panel Height
```css
.bottom-panel {
    bottom: 80px;    /* Distance from bottom (space for buttons) */
    height: 150px;   /* Height of panel */
}
```

#### Adjust Player Side Width
```css
.players-side {
    width: 200px;    /* Width of left/right player areas */
}
```

#### Adjust Action Buttons Row
```css
.action-buttons-row {
    bottom: 0;       /* At very bottom */
    height: 70px;    /* Height of button row */
    gap: 10px;       /* Space between buttons */
}
```

#### Adjust Button Sizes
```css
.action-button-small {
    height: 45px;    /* Button height */
    min-width: 100px; /* Minimum button width */
}
```

---

### Method 2: Edit in UI Builder

1. **Select Bottom Panel**
   - Inspector → Layout
   - **Bottom**: 80px (distance from bottom)
   - **Height**: 150px

2. **Select Players Side**
   - Inspector → Layout
   - **Width**: 200px

3. **Select Action Buttons Row**
   - Inspector → Layout
   - **Bottom**: 0
   - **Height**: 70px
   - **Gap**: 10px (in Style section)

4. **Select Individual Buttons**
   - Inspector → Layout
   - **Height**: 45px
   - **Min Width**: 100px

---

## 🎨 Positioning Values Reference

### Bottom Panel
| Property | Value | What It Does |
|----------|-------|--------------|
| `bottom: 80px;` | Distance from bottom | Space for action buttons |
| `height: 150px;` | Panel height | How tall the panel is |
| `justify-content: space-between;` | Spreads items | Players on sides, dice in center |

### Players Side
| Property | Value | What It Does |
|----------|-------|--------------|
| `width: 200px;` | Side width | How wide player areas are |
| `gap: 15px;` | Space between players | Vertical spacing |

### Action Buttons Row
| Property | Value | What It Does |
|----------|-------|--------------|
| `bottom: 0;` | At bottom | Sticks to bottom edge |
| `height: 70px;` | Row height | How tall button row is |
| `gap: 10px;` | Button spacing | Space between buttons |

---

## 🔧 Common Adjustments

### Make Bottom Panel Taller
```css
.bottom-panel {
    height: 180px;  /* Increase from 150px */
    bottom: 80px;    /* Keep same */
}
```

### Make Player Areas Wider
```css
.players-side {
    width: 250px;  /* Increase from 200px */
}
```

### Make Buttons Larger
```css
.action-button-small {
    height: 55px;     /* Increase from 45px */
    min-width: 120px; /* Increase from 100px */
    font-size: 18px;  /* Increase text size */
}
```

### Add More Space Between Buttons
```css
.action-buttons-row {
    gap: 15px;  /* Increase from 10px */
}
```

### Move Bottom Panel Higher
```css
.bottom-panel {
    bottom: 100px;  /* Increase from 80px (moves up) */
}
```

---

## 📱 Responsive Adjustments

### For Different Screen Sizes

**Smaller Screens:**
```css
.players-side {
    width: 150px;  /* Narrower */
}

.action-button-small {
    min-width: 80px;  /* Smaller buttons */
    font-size: 14px;
}
```

**Larger Screens:**
```css
.players-side {
    width: 250px;  /* Wider */
}

.action-button-small {
    min-width: 120px;  /* Larger buttons */
    font-size: 18px;
}
```

---

## ✅ Quick Checklist

- [ ] Bottom panel positioned above action buttons
- [ ] Players on left and right sides
- [ ] Dice/controls in center
- [ ] Action buttons in horizontal row at bottom
- [ ] All elements have `z-index: 100+` to appear above board
- [ ] Tested in Play Mode

---

## 🎯 Current Setup

Your UI now has:
- ✅ **Top Panel**: Current player info (optional)
- ✅ **Bottom Panel**: Players on sides, dice in center
- ✅ **Action Buttons Row**: Horizontal row at bottom

**To match reference exactly:**
1. Adjust `width` of `.players-side` (currently 200px)
2. Adjust `height` of `.bottom-panel` (currently 150px)
3. Adjust `height` of `.action-buttons-row` (currently 70px)
4. Adjust button `min-width` (currently 100px)

---

**You can now adjust all positions using the USS file or UI Builder!** 🎨
