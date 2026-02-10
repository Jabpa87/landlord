# How to Adjust Button Positions - Quick Guide

## 🎯 Current Layout Structure

Your UI now matches the reference layout:

```
┌─────────────────────────────────────┐
│         GAME BOARD                  │
│                                     │
└─────────────────────────────────────┘
┌──────────┬──────────────┬───────────┐
│ Player1  │              │  Player2  │
│ Player3  │  DICE +      │  Player4  │
│          │  ROLL BTN    │           │
└──────────┴──────────────┴───────────┘
┌─────────────────────────────────────┐
│ MENU│BUILD│SELL│MORT│RED│TRADE│END │
└─────────────────────────────────────┘
```

---

## 🛠️ How to Adjust Positions

### Method 1: Edit USS File (Easiest)

Open `Assets/UI Toolkit/USS/main-styles.uss` and find these sections:

#### 1. Adjust Bottom Panel (Players + Dice Area)

```css
.bottom-panel {
    bottom: 80px;    /* Change this to move up/down */
    height: 150px;   /* Change this to make taller/shorter */
}
```

**What to change:**
- `bottom: 80px;` → Increase to move panel UP (e.g., `100px`)
- `bottom: 80px;` → Decrease to move panel DOWN (e.g., `60px`)
- `height: 150px;` → Increase to make taller (e.g., `180px`)
- `height: 150px;` → Decrease to make shorter (e.g., `120px`)

#### 2. Adjust Player Side Widths

```css
.players-side {
    width: 200px;    /* Change this to make wider/narrower */
}
```

**What to change:**
- `width: 200px;` → Increase for wider player areas (e.g., `250px`)
- `width: 200px;` → Decrease for narrower areas (e.g., `150px`)

#### 3. Adjust Action Buttons Row

```css
.action-buttons-row {
    bottom: 0;       /* Always 0 (at bottom) */
    height: 70px;    /* Change this for button row height */
    gap: 10px;       /* Change this for space between buttons */
}
```

**What to change:**
- `height: 70px;` → Increase for taller buttons (e.g., `80px`)
- `gap: 10px;` → Increase for more space between buttons (e.g., `15px`)

#### 4. Adjust Individual Button Sizes

```css
.action-button-small {
    height: 45px;     /* Change this for button height */
    min-width: 100px; /* Change this for button width */
    font-size: 16px;  /* Change this for text size */
}
```

**What to change:**
- `height: 45px;` → Increase for taller buttons (e.g., `55px`)
- `min-width: 100px;` → Increase for wider buttons (e.g., `120px`)
- `font-size: 16px;` → Increase for larger text (e.g., `18px`)

---

### Method 2: Edit in UI Builder (Visual)

1. **Open UI Builder**
   - Window → UI Toolkit → UI Builder
   - Open `MainHUD.uxml`

2. **Select Element to Adjust**
   - Click element in Hierarchy pane
   - Example: Click `BottomPanel` or `ActionButtonsRow`

3. **Adjust in Inspector**
   - **Layout** section:
     - **Bottom**: Distance from bottom
     - **Height**: Element height
     - **Width**: Element width
   - **Style** section:
     - **Gap**: Space between child elements
     - **Z-Index**: Layering (100+ to appear above board)

4. **Save**
   - Changes save automatically

---

## 📐 Common Adjustments

### Make Bottom Panel Taller
**In USS file:**
```css
.bottom-panel {
    height: 180px;  /* Changed from 150px */
}
```

### Make Player Areas Wider
**In USS file:**
```css
.players-side {
    width: 250px;  /* Changed from 200px */
}
```

### Make Buttons Bigger
**In USS file:**
```css
.action-button-small {
    height: 55px;      /* Changed from 45px */
    min-width: 120px;  /* Changed from 100px */
    font-size: 18px;   /* Changed from 16px */
}
```

### Add More Space Between Buttons
**In USS file:**
```css
.action-buttons-row {
    gap: 15px;  /* Changed from 10px */
}
```

### Move Bottom Panel Higher (More Board Visible)
**In USS file:**
```css
.bottom-panel {
    bottom: 120px;  /* Changed from 80px (moves panel up) */
}
```

### Move Bottom Panel Lower (Less Board Visible)
**In USS file:**
```css
.bottom-panel {
    bottom: 60px;  /* Changed from 80px (moves panel down) */
}
```

---

## 🎨 Positioning Values Explained

| Property | What It Does | Example Values |
|----------|--------------|----------------|
| `bottom: 80px;` | Distance from bottom edge | `0` = at bottom, `100` = 100px up |
| `height: 150px;` | How tall the element is | `100` = short, `200` = tall |
| `width: 200px;` | How wide the element is | `150` = narrow, `250` = wide |
| `gap: 10px;` | Space between items | `5` = tight, `20` = spaced out |

---

## ✅ Quick Reference: What to Change

| What You Want | What to Change | Where |
|---------------|----------------|-------|
| Move panel up | `bottom` value (increase) | `.bottom-panel` |
| Move panel down | `bottom` value (decrease) | `.bottom-panel` |
| Make panel taller | `height` value (increase) | `.bottom-panel` |
| Make panel shorter | `height` value (decrease) | `.bottom-panel` |
| Wider player areas | `width` value (increase) | `.players-side` |
| Narrower player areas | `width` value (decrease) | `.players-side` |
| Bigger buttons | `height` and `min-width` (increase) | `.action-button-small` |
| More button spacing | `gap` value (increase) | `.action-buttons-row` |

---

## 🔍 Finding Elements in USS File

**Quick Search Tips:**
- Press `Ctrl+F` in your code editor
- Search for:
  - `.bottom-panel` - Main controls area
  - `.players-side` - Left/right player areas
  - `.action-buttons-row` - Button row at bottom
  - `.action-button-small` - Individual buttons
  - `.center-controls` - Dice/roll button area

---

## 💡 Pro Tips

1. **Test in Play Mode** - Always verify changes in game
2. **Change one value at a time** - Easier to see what each does
3. **Use small increments** - Change by 10-20px at a time
4. **Keep proportions** - If you make buttons bigger, increase row height
5. **Document your changes** - Add comments in USS file

---

## 🐛 Troubleshooting

### Buttons Overlap
**Fix:** Increase `gap` in `.action-buttons-row`

### Panel Covers Board
**Fix:** Increase `bottom` value in `.bottom-panel`

### Players Too Cramped
**Fix:** Increase `width` in `.players-side` and `gap` in `.player-info`

### Buttons Too Small
**Fix:** Increase `height` and `min-width` in `.action-button-small`

---

**You now have full control over button positioning!** 🎨

Just edit the USS file values and test in Play Mode!
