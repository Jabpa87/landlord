# Quick Fix: UI Builder vs Game View

## 🎯 The Problem
UI Builder shows all panels overlapping, but in the game they should be hidden.

## ✅ Quick Fix (3 Steps)

### Step 1: Hide Panels in UI Builder

**In UI Builder Hierarchy pane:**
1. Right-click on panels you don't want to see:
   - `PropertyPanel` (if visible)
   - `BuildPanel` (if visible)
   - `JailPanel` (if visible)
   - `CardPanel` (if visible)
2. Select **"Hide in Hierarchy"**
3. Only `MainHUD` should remain visible

**OR** - If editing individual UXML files:
- Open each panel UXML separately
- Work on one at a time
- Close when done

### Step 2: Match Resolution

**In UI Builder Viewport:**
1. Top of viewport - find resolution dropdown
2. Set to: **Mobile (1080x1920)** 
3. This matches your game view

**In Game View:**
1. Game tab → Aspect ratio dropdown  
2. Set to: **Mobile (1080x1920)**
3. Both should now match

### Step 3: Use Correct UXML File

**IMPORTANT:** Make sure you're using the right file!

**For Main HUD:**
- ✅ Use: `MainHUD.uxml` (in UXML folder) - **This is the working one**
- ❌ NOT: `MainGameUi.uxml` (root folder) - This was empty, now fixed

**In Your Scene:**
1. Select **Main HUD Document** GameObject
2. Check **UIDocument** component
3. **Source Asset** should be: `MainHUD.uxml` (from UXML folder)

---

## 🔍 Why They're Different

| UI Builder | Game View |
|-----------|-----------|
| Static preview | Dynamic runtime |
| No scripts run | Scripts run |
| Shows all UXML | Code hides panels |
| Design tool | Test tool |

**This is normal!** UI Builder is for designing, Game View is for testing.

---

## ✅ Verification

**In UI Builder:**
- Only MainHUD visible (or panel you're editing)
- Resolution: 1080x1920
- Styles applied

**In Game (Play Mode):**
- Only MainHUD visible initially
- Panels appear when triggered
- Matches UI Builder design

---

## 🎨 Pro Tip

**Workflow:**
1. **Design** in UI Builder (hide unused panels)
2. **Test** in Game View Play Mode
3. **Iterate** - make changes, test again

**Remember:** UI Builder preview ≠ Game View. Always test in Play Mode!
