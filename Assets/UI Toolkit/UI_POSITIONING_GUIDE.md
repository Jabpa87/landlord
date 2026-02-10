# UI Positioning Guide - How to Position Elements Above/Below Board

## 🎯 Understanding the Problem

UI Toolkit elements are positioned relative to the **screen**, not the game board. To position elements above or below the board, you need to understand:

1. **Absolute Positioning** - Elements positioned relative to screen edges
2. **Z-Index/Layering** - What appears on top
3. **Percentage vs Pixels** - How to position precisely

---

## 📐 Positioning Methods

### Method 1: Absolute Positioning (Recommended)

**Absolute positioning** places elements at fixed positions relative to the screen edges.

#### Syntax in USS:
```css
.element-name {
    position: absolute;
    top: 0;        /* Distance from top edge */
    bottom: 0;     /* Distance from bottom edge */
    left: 0;       /* Distance from left edge */
    right: 0;      /* Distance from right edge */
    width: 100%;   /* Full width */
    height: 200px; /* Fixed height */
}
```

#### Example: Top HUD Bar
```css
.top-panel {
    position: absolute;
    top: 0;           /* Stick to top of screen */
    left: 0;
    right: 0;
    height: 100px;    /* Fixed height */
    z-index: 100;      /* Appears above board */
}
```

#### Example: Bottom Control Bar
```css
.bottom-panel {
    position: absolute;
    bottom: 0;        /* Stick to bottom of screen */
    left: 0;
    right: 0;
    height: 150px;    /* Fixed height */
    z-index: 100;     /* Appears above board */
}
```

---

### Method 2: Percentage Positioning

Use percentages to position elements relative to screen size.

#### Example: Center Panel
```css
.modal-panel {
    position: absolute;
    left: 50%;        /* Start at middle */
    top: 50%;         /* Start at middle */
    margin-left: -300px;  /* Shift left by half width */
    margin-top: -200px;   /* Shift up by half height */
    width: 600px;
    height: 400px;
    z-index: 1000;    /* Above everything */
}
```

#### Example: Position Above Board
```css
.above-board-panel {
    position: absolute;
    top: 10%;         /* 10% from top of screen */
    left: 50%;
    margin-left: -250px;
    width: 500px;
    z-index: 200;     /* Above board */
}
```

---

## 🎨 How to Edit Positions

### Option 1: Edit in USS File (Recommended)

1. Open `Assets/UI Toolkit/USS/main-styles.uss`
2. Find the style class you want to modify (e.g., `.top-panel`)
3. Adjust the positioning values:

```css
.top-panel {
    position: absolute;
    top: 0;              /* Change this to move up/down */
    left: 0;
    right: 0;
    height: 100px;       /* Change this for height */
    z-index: 100;        /* Higher = appears on top */
}
```

**Save the file** - changes apply automatically!

### Option 2: Edit in UI Builder (Visual)

1. Open UI Builder
2. Select the element in **Hierarchy**
3. In **Inspector** → **Layout** section:
   - **Position**: Set to `Absolute`
   - **Top**: Distance from top (0 = top edge)
   - **Bottom**: Distance from bottom (0 = bottom edge)
   - **Left/Right**: Distance from sides
4. In **Style** section:
   - **Z-Index**: Higher number = appears on top

### Option 3: Inline Styles in UXML (Quick Fix)

You can add styles directly in UXML:

```xml
<ui:VisualElement name="TopPanel" class="top-panel" style="top: 0; height: 100px; z-index: 100;">
```

---

## 📊 Positioning Reference

### Top of Screen (Above Board)
```css
.element {
    position: absolute;
    top: 0;           /* At very top */
    /* OR */
    top: 50px;        /* 50px from top */
    /* OR */
    top: 5%;          /* 5% from top */
    z-index: 100;     /* Above board */
}
```

### Bottom of Screen (Below Board)
```css
.element {
    position: absolute;
    bottom: 0;        /* At very bottom */
    /* OR */
    bottom: 50px;     /* 50px from bottom */
    /* OR */
    bottom: 5%;       /* 5% from bottom */
    z-index: 100;     /* Above board */
}
```

### Center of Screen (Over Board)
```css
.element {
    position: absolute;
    left: 50%;
    top: 50%;
    margin-left: -300px;  /* Half of width */
    margin-top: -200px;   /* Half of height */
    width: 600px;
    height: 400px;
    z-index: 1000;    /* Above everything */
}
```

### Specific Position
```css
.element {
    position: absolute;
    top: 200px;       /* Exactly 200px from top */
    left: 100px;      /* Exactly 100px from left */
    width: 400px;
    height: 300px;
    z-index: 150;
}
```

---

## 🔝 Z-Index (Layering)

**Z-Index** controls what appears on top. Higher number = appears above.

### Recommended Z-Index Values:
- **Game Board**: 0 (or no z-index)
- **HUD Elements**: 100-200
- **Modal Panels**: 1000-2000
- **Tooltips/Popups**: 3000+

### Example:
```css
/* Background/HUD */
.top-panel {
    z-index: 100;     /* Above board */
}

/* Modal Panel */
.modal-panel {
    z-index: 1000;   /* Above HUD and board */
}
```

---

## 🛠️ Common Positioning Tasks

### Task 1: Move Top HUD Higher
**Edit `main-styles.uss`:**
```css
.top-panel {
    position: absolute;
    top: 0;           /* Already at top */
    height: 80px;     /* Make it smaller to show more board */
}
```

### Task 2: Move Bottom Controls Lower
**Edit `main-styles.uss`:**
```css
.bottom-panel {
    position: absolute;
    bottom: 0;        /* Already at bottom */
    height: 120px;    /* Adjust height */
}
```

### Task 3: Position Modal Panel Above Board
**Edit `main-styles.uss`:**
```css
.modal-panel {
    position: absolute;
    left: 50%;
    top: 30%;         /* 30% from top (above board center) */
    margin-left: -300px;
    margin-top: -150px;
    z-index: 1000;    /* Above everything */
}
```

### Task 4: Position Element at Specific Screen Position
**Edit `main-styles.uss`:**
```css
.custom-element {
    position: absolute;
    top: 150px;      /* Exactly 150px from top */
    left: 50px;      /* Exactly 50px from left */
    width: 300px;
    height: 200px;
    z-index: 150;
}
```

---

## 📝 Step-by-Step: Move Element Above Board

### Example: Move Top Panel Higher

1. **Open** `Assets/UI Toolkit/USS/main-styles.uss`

2. **Find** `.top-panel` style:
```css
.top-panel {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    height: 200px;
    ...
}
```

3. **Modify** to move it higher:
```css
.top-panel {
    position: absolute;
    top: 0;           /* Keep at top */
    left: 0;
    right: 0;
    height: 100px;    /* Make smaller = shows more board below */
    z-index: 200;     /* Ensure it's above board */
    ...
}
```

4. **Save** the file

5. **Test** in Play Mode - panel should be higher!

---

## 🎯 Quick Reference: What Should Go Where

### Above Board (Top of Screen):
- ✅ Top HUD (player info, wallet)
- ✅ Notifications
- ✅ Score displays

### Below Board (Bottom of Screen):
- ✅ Bottom controls (Roll Dice, End Turn)
- ✅ Action buttons
- ✅ Status messages

### Over Board (Center):
- ✅ Modal panels (Property, Build, Jail, Card)
- ✅ Popups
- ✅ Dialogs

### Behind Board:
- ❌ Nothing! Board should be at z-index 0 or lower

---

## 🔧 Troubleshooting

### Problem: Element Won't Move Above Board
**Solution:**
1. Check `z-index` - must be higher than board
2. Check `position` - must be `absolute`
3. Check parent element - might be constraining it

### Problem: Element Moves But Cuts Off
**Solution:**
1. Reduce `height` if too tall
2. Adjust `top` value if going off-screen
3. Use percentages instead of fixed pixels

### Problem: Element Overlaps Wrong Things
**Solution:**
1. Adjust `z-index` - lower number = behind
2. Check order in Hierarchy (doesn't affect z-index but helps organize)

---

## 💡 Pro Tips

1. **Use Percentages for Responsive**: `top: 10%` works on all screen sizes
2. **Use Pixels for Precise**: `top: 100px` is exact but may not scale
3. **Test on Different Resolutions**: What works on 1080x1920 might not work on others
4. **Keep Z-Index Organized**: Use ranges (100s for HUD, 1000s for modals)
5. **Document Your Choices**: Add comments in USS explaining why you chose certain values

---

## ✅ Checklist for Positioning

- [ ] Element has `position: absolute`
- [ ] `top` or `bottom` is set (not both)
- [ ] `left` or `right` is set (or `width` is set)
- [ ] `z-index` is appropriate (higher = on top)
- [ ] `height` is set (or element has content)
- [ ] Tested in Play Mode
- [ ] Works on target resolution

---

**Now you can position any UI element exactly where you want it!** 🎨

Remember:
- **Top/Bottom** = vertical position
- **Left/Right** = horizontal position  
- **Z-Index** = what appears on top
- **Absolute** = positioned relative to screen edges
