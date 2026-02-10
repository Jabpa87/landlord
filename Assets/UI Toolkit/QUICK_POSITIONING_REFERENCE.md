# Quick Positioning Reference - How to Move UI Elements

## 🎯 The Key: Z-Index

**Z-Index** controls what appears on top. Without it, elements stay behind the board!

### Quick Fix: Add Z-Index
```css
.your-element {
    z-index: 100;  /* Higher number = appears on top */
}
```

---

## 📍 Common Positioning Tasks

### Move Element to Top of Screen (Above Board)
```css
.element {
    position: absolute;
    top: 0;           /* At top edge */
    left: 0;
    right: 0;
    height: 100px;    /* Your desired height */
    z-index: 100;     /* MUST HAVE THIS to appear above board! */
}
```

### Move Element to Bottom of Screen (Below Board)
```css
.element {
    position: absolute;
    bottom: 0;        /* At bottom edge */
    left: 0;
    right: 0;
    height: 150px;    /* Your desired height */
    z-index: 100;     /* MUST HAVE THIS to appear above board! */
}
```

### Position Element at Specific Height
```css
.element {
    position: absolute;
    top: 50px;        /* 50 pixels from top */
    left: 0;
    right: 0;
    height: 80px;
    z-index: 100;     /* MUST HAVE THIS! */
}
```

### Position Element Using Percentage
```css
.element {
    position: absolute;
    top: 10%;         /* 10% from top of screen */
    left: 0;
    right: 0;
    height: 100px;
    z-index: 100;     /* MUST HAVE THIS! */
}
```

---

## 🛠️ How to Edit Positions

### Method 1: Edit USS File (Best for Permanent Changes)

1. Open `Assets/UI Toolkit/USS/main-styles.uss`
2. Find the style (e.g., `.top-panel`)
3. Add or modify:
   - `top: 0;` - Distance from top
   - `bottom: 0;` - Distance from bottom
   - `z-index: 100;` - **CRITICAL!** Makes it appear above board
4. Save file

**Example:**
```css
.top-panel {
    position: absolute;
    top: 0;           /* Change this to move up/down */
    height: 100px;    /* Change this for size */
    z-index: 100;     /* MUST HAVE to appear above board */
}
```

### Method 2: Edit in UI Builder (Visual)

1. Open UI Builder
2. Select element in Hierarchy
3. In Inspector → Layout:
   - **Position**: `Absolute`
   - **Top**: Set value (0 = top edge, 50 = 50px from top)
   - **Bottom**: Set value (0 = bottom edge)
4. In Inspector → Style:
   - **Z-Index**: Set to 100 or higher
5. Changes save automatically to UXML

### Method 3: Inline Style in UXML (Quick Test)

In your UXML file, add `style` attribute:

```xml
<ui:VisualElement name="TopPanel" class="top-panel" style="top: 0; z-index: 100;">
```

---

## 🔢 Z-Index Values Guide

| Z-Index | Use For |
|---------|---------|
| 0-50 | Game board, background |
| 100-200 | HUD elements (top bar, bottom bar) |
| 500-800 | Overlay elements |
| 1000-2000 | Modal panels (Property, Build, Jail, Card) |
| 3000+ | Tooltips, popups |

**Rule:** Higher number = appears on top

---

## ✅ Quick Checklist

To move an element above the board:

- [ ] `position: absolute` is set
- [ ] `top` or `bottom` is set
- [ ] **`z-index: 100` or higher** (THIS IS CRITICAL!)
- [ ] `height` is set (or element has content)
- [ ] Tested in Play Mode

---

## 🎨 Examples for Your Game

### Top HUD Bar (Above Board)
```css
.top-panel {
    position: absolute;
    top: 0;           /* At top */
    left: 0;
    right: 0;
    height: 100px;    /* Adjust as needed */
    z-index: 100;     /* Above board */
}
```

### Bottom Controls (Below Board)
```css
.bottom-panel {
    position: absolute;
    bottom: 0;        /* At bottom */
    left: 0;
    right: 0;
    height: 150px;    /* Adjust as needed */
    z-index: 100;     /* Above board */
}
```

### Modal Panel (Over Board Center)
```css
.modal-panel {
    position: absolute;
    left: 50%;
    top: 50%;
    margin-left: -300px;
    margin-top: -150px;
    z-index: 1000;    /* Above everything */
}
```

---

## 💡 Pro Tips

1. **Always add z-index** when using absolute positioning
2. **Use percentages** (`top: 10%`) for responsive design
3. **Use pixels** (`top: 50px`) for precise positioning
4. **Test in Play Mode** - UI Builder preview might differ
5. **Start with z-index: 100** for HUD, increase for modals

---

## 🐛 Troubleshooting

### "Element won't move above board"
→ Add `z-index: 100;` to the style

### "Element moves but stays behind"
→ Increase z-index value (try 200, 500, 1000)

### "Element goes off screen"
→ Reduce `height` or adjust `top`/`bottom` values

### "Element overlaps wrong things"
→ Adjust z-index (lower = behind, higher = in front)

---

**Remember: Z-Index is the key to appearing above the board!** 🎯
