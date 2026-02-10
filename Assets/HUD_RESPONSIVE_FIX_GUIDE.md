# HUD Responsive Layout Fix Guide

## Issues Fixed

1. **UI Overlap Problem**: Fixed overlapping UI elements that were covering the game board
2. **Responsive Design**: Made UI elements use percentage-based sizing instead of fixed pixels
3. **News Feed Styling**: Updated news feed to match game's UI standard (dark grey panels)
4. **Layout Order**: Proper stacking from bottom: News Feed → Action Buttons → Bottom Panel → Top Panel

## Changes Made

### 1. MainHUD.uxml
- **Removed fixed width/height** (`width: 1080px; height: 1920px;`) - now uses 100% sizing
- **Removed inline styles** that were overriding responsive CSS
- **Added SafeAreaSpacer** to prevent overlap

### 2. main-styles.uss

#### Top Panel
- Changed from fixed `height: 180px` to `height: 12%` with min/max constraints
- Uses percentage-based sizing for responsive behavior

#### Bottom Panel  
- Positioned at `bottom: 260px` (above action buttons and news feed)
- Changed to percentage-based height: `height: 12%` with constraints
- Responsive padding

#### Action Buttons Row
- Positioned at `bottom: 200px` (above news feed, below bottom panel)
- Responsive height: `height: 60px` with min/max constraints
- Buttons use `flex-grow: 1` for equal distribution
- Responsive font sizes

#### News Feed Section
- Positioned at `bottom: 0px` (very bottom of screen)
- **Updated styling to match game UI standard**:
  - Background: `rgb(33, 43, 55)` (dark grey, matches other panels)
  - Border: `rgb(20, 28, 36)` (matches game standard)
  - Title: White text (instead of gold)
  - Items: Darker background `rgba(0, 0, 0, 0.3)` (matches player info panels)
  - Username: Green `#4CAF50` (matches wallet text color)

#### Player Info
- Made responsive with percentage widths
- Smaller avatars and fonts for mobile
- Flexible sizing

### 3. ResponsiveHUDManager.cs (NEW)
- Automatically adjusts UI element positions based on screen size
- Prevents overlap with game board
- Updates layout every 0.5 seconds (or on screen size change)

## Layout Structure (Bottom to Top)

```
┌─────────────────────────────┐
│     Top Panel (12% height)  │ ← Top of screen
├─────────────────────────────┤
│                             │
│      GAME BOARD AREA        │ ← Safe area (no UI overlap)
│                             │
├─────────────────────────────┤
│   Bottom Panel (12% height) │ ← Player info, dice, controls
├─────────────────────────────┤
│  Action Buttons (60px)      │ ← MENU, BUILD, SELL, etc.
├─────────────────────────────┤
│   News Feed (200px)         │ ← Live feed at very bottom
└─────────────────────────────┘
```

## Setup Instructions

### Step 1: Add ResponsiveHUDManager (Optional but Recommended)

1. **In Unity**, find or create a GameObject in your GameScene
2. **Add Component** → `ResponsiveHUDManager`
3. **Assign Main HUD Document** (or leave null - it will auto-find)
4. **Adjust settings** if needed:
   - Top Panel Height Percent: 12%
   - Bottom Panel Height Percent: 12%
   - Action Buttons Height: 60px
   - News Feed Height: 200px

### Step 2: Test on Different Screen Sizes

1. **In Unity Editor**:
   - Game view → Aspect Ratio dropdown
   - Test: 16:9, 18:9, 21:9, etc.
   - Verify UI doesn't overlap board

2. **On Mobile Device**:
   - Build and install on phone
   - Test in both portrait and landscape
   - Verify all UI elements are visible and don't overlap

### Step 3: Adjust if Needed

If UI still overlaps on your device:

1. **Open `ResponsiveHUDManager.cs`** in Inspector
2. **Adjust percentages**:
   - Reduce `topPanelHeightPercent` if top overlaps
   - Reduce `bottomPanelHeightPercent` if bottom overlaps
   - Adjust `newsFeedHeight` if feed is too large

Or manually adjust in `main-styles.uss`:
- Change `bottom: 260px` values for different positioning
- Adjust `height: 12%` percentages

## Visual Standard Applied

The news feed now matches the game's UI standard:

- **Background**: Dark grey `rgb(33, 43, 55)` (same as Top Panel, Bottom Panel, Action Buttons)
- **Borders**: Dark border `rgb(20, 28, 36)` (matches game standard)
- **Text Colors**: 
  - Title: White
  - Username: Green `#4CAF50` (matches wallet text)
  - Message: White with slight transparency
- **Items**: Dark background `rgba(0, 0, 0, 0.3)` (matches player info panels)

## Mobile Build: Buttons Not Responding to Touch

**Symptom**: Roll button and action buttons (MENU, BUILD, SELL, etc.) cannot be selected in a mobile APK build.

**Cause**: The full-screen `SafeAreaSpacer` element was intercepting all touches. Unity UI Toolkit USS does **not** support `pointer-events: none`, so that style had no effect and the spacer blocked hits to the buttons underneath.

**Fix**: In `UIDocumentManager.InitializeMainHUD()`, the SafeAreaSpacer’s `pickingMode` is set to `PickingMode.Ignore` in code, and the HUD buttons explicitly use `PickingMode.Position`. This is applied both at init and in the deferred layout callback.

---

## Troubleshooting

### UI Still Overlapping Board

**Solution**: 
1. Check `ResponsiveHUDManager` is added to scene
2. Increase `safeAreaPadding` value
3. Reduce panel height percentages

### News Feed Not Visible

**Solution**:
1. Check `NewsFeedSection` exists in MainHUD.uxml
2. Verify `z-index: 99` (should be below action buttons)
3. Check Console for NarrativeManager errors

### Action Buttons Too Small/Large

**Solution**:
1. Adjust `actionButtonsHeight` in ResponsiveHUDManager
2. Or modify `.main-hud-action-buttons-row` height in CSS
3. Button font size is responsive (12-14px)

### Text Too Small on Mobile

**Solution**:
- Font sizes are already responsive with min/max constraints
- If still too small, increase `min-font-size` values in CSS

### Board Size vs Camera (Mobile Layout Not Balanced)

**Symptom**: Board and UI are not proportioned correctly; board feels squeezed or too small.

**Options**:

1. **Adjust camera (recommended first)**  
   - Select the **Main Camera** (or the object with `ResponsiveBoardCamera`).  
   - In the Inspector, tune:
     - **Reference Board Width / Height** – Match your board’s size in world units.
     - **Padding** – Increase to show more margin around the board.
     - **Min/Max Orthographic Size** – Use a larger max to zoom out (see more board).
     - **Fit Mode** – Try `FitBoth` for full board, or `FitWidth`/`FitHeight` if one axis is more important.

2. **Adjust board size**  
   - Scale the board GameObject or tile layout so it fits the camera’s reference size.  
   - Keep aspect ratio consistent to avoid stretching.

3. **Reduce UI height**  
   - If the board is covered by UI, shrink panels in `main-styles.uss` (e.g. top/bottom panel heights, news feed height) so more of the board is visible.

## Expected Result

After these changes:
- ✅ UI elements don't overlap the game board
- ✅ Layout adapts to different screen sizes
- ✅ News feed matches game's UI standard (dark grey)
- ✅ All elements properly stacked (no overlap between UI panels)
- ✅ Responsive on both portrait and landscape orientations

---

**Note**: The `ResponsiveHUDManager` script is optional but recommended for automatic layout adjustments. If you prefer manual control, you can adjust the CSS values directly.
