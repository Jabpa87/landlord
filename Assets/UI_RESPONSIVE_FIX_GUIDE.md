# UI Responsive Fix Guide

## Problem
UI elements are spilling off screen, especially on different device sizes.

## Quick Fixes Applied

### 1. Canvas Scaler Settings
- **Match Width Or Height**: Changed from `0.5` to `1` (Match Height)
- This prioritizes height matching for portrait mode, which is better for mobile games
- **Reference Resolution**: `1080 x 1920` (portrait)

### 2. HUDPanel Fixed
- Changed from fixed width (986px) to **stretch horizontally**
- Now anchors from left edge to right edge
- Will adapt to any screen width

## How to Fix Other UI Elements

### Method 1: Using UIFixAnchors Script (Recommended)

1. **Select the UI element** that's spilling off screen in Hierarchy
2. **Add Component** → Search for `UIFixAnchors`
3. **Choose a Preset**:
   - **BottomStretch**: For bottom panels/buttons (stretches horizontally)
   - **TopStretch**: For top panels (stretches horizontally)
   - **StretchBoth**: For full-screen backgrounds
   - **BottomCenter**: For centered bottom elements
   - **TopCenter**: For centered top elements
4. **Check "Fix On Start"** if you want it to apply automatically
5. **Right-click component** → **Apply Preset** to apply immediately

### Method 2: Manual Fix in Inspector

1. **Select the UI element** in Hierarchy
2. In **RectTransform** component, click the **anchor preset** button (top-left of RectTransform)
3. **Hold Shift + Alt** and click:
   - **Left + Right** for horizontal stretch
   - **Top + Bottom** for vertical stretch
   - **All four** for full stretch
4. **Adjust margins** (Left, Right, Top, Bottom) if needed

### Common Fixes by Element Type

#### Bottom Panel (HUDPanel) ✅ FIXED
- **Anchor**: Left (0) to Right (1), Bottom (0)
- **Height**: Fixed or flexible based on content

#### Buttons (Roll, End Turn, etc.)
- If in a row: Use **Horizontal Layout Group** on parent
- Individual buttons: Use **BottomCenter** or **BottomStretch** preset
- **Size**: Use flexible width or fixed with proper margins

#### Top Panel (Player Info)
- **Anchor**: **TopStretch** (stretches horizontally)
- Or **TopLeft** / **TopRight** for corner elements

#### Text Elements
- Usually fine with **point anchors** (center, corners)
- If text is cut off: Check **TextMeshPro** → **Overflow** settings
- Use **Horizontal Overflow: Wrap** or **Truncate**

#### Popup Panels (Property, Build, Jail)
- **Anchor**: **MiddleCenter** (centered on screen)
- **Size**: Fixed with proper max size limits
- Add **Content Size Fitter** if content varies

## Testing on Different Devices

### In Unity Editor:
1. **Game View** → Aspect Ratio dropdown
2. Test different resolutions:
   - **iPhone SE** (640x1136)
   - **iPhone 12/13** (390x844)
   - **iPhone 12/13 Pro Max** (428x926)
   - **Samsung Galaxy S21** (360x800)

### Common Issues:

#### Elements Still Overflowing:
- Check if parent has **Layout Group** that's constraining size
- Verify **Canvas Scaler** is set correctly
- Check if element has **Content Size Fitter** with wrong settings

#### Elements Too Small on Large Screens:
- Increase **Reference Resolution** in Canvas Scaler
- Or adjust **Match Width Or Height** value (try 0.3-0.7)

#### Elements Cut Off at Edges:
- Add **padding/margins** in Layout Groups
- Use **Safe Area** component for notched devices

## Best Practices

1. **Use Layout Groups** for dynamic content:
   - **Horizontal Layout Group**: For button rows
   - **Vertical Layout Group**: For stacked elements
   - **Grid Layout Group**: For grids

2. **Anchor to Edges**, not center:
   - Bottom panel → Anchor to bottom edge
   - Top panel → Anchor to top edge
   - Side panels → Anchor to side edges

3. **Use Percentages**, not fixed pixels:
   - Width: 50% of screen instead of 540px
   - Margins: 2% instead of 20px

4. **Test Early and Often**:
   - Test on smallest target device first
   - Check both portrait and landscape if needed

## Quick Checklist

- [ ] Canvas Scaler: Match = 1 (for portrait)
- [ ] HUDPanel: Stretches horizontally ✅
- [ ] Buttons: Properly anchored (not fixed width)
- [ ] Text: Overflow settings correct
- [ ] Panels: Use Layout Groups where needed
- [ ] Tested on multiple device sizes
- [ ] No elements spilling off screen

## Need More Help?

If specific elements are still causing issues:
1. Select the element
2. Check its **RectTransform** values
3. Note the **Anchor Min/Max** and **Size Delta**
4. Share these values for targeted help
