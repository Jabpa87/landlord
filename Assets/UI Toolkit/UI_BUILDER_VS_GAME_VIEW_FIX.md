# UI Builder vs Game View - How to Fix Differences

## 🔍 Why They Look Different

**UI Builder** shows a **static preview** - it doesn't run your scripts, so:
- ❌ Panels won't hide automatically (code doesn't run)
- ❌ Text won't update (no script execution)
- ❌ Buttons won't work (no event handlers)
- ✅ Shows the raw UXML structure

**Game View** shows the **actual runtime** - scripts run, so:
- ✅ Panels hide/show based on code
- ✅ Text updates dynamically
- ✅ Buttons work properly

---

## ✅ Solution: Match UI Builder to Game View

### Step 1: Hide Panels in UI Builder Preview

Since UI Builder doesn't run code, you need to manually hide panels:

#### Option A: Hide in UXML (Temporary for Preview)

1. Open `PropertyPanel.uxml` in UI Builder
2. Select the root `PropertyPanel` element
3. In **Inspector** → **Style** → **Display**
4. Set to **None** (this hides it in preview only)

**Repeat for:**
- BuildPanel.uxml
- JailPanel.uxml  
- CardPanel.uxml

**Note:** This is just for preview - the code will handle it at runtime.

#### Option B: Use UI Builder's "Hide in Hierarchy" (Better)

1. In UI Builder **Hierarchy** pane
2. Right-click on panel elements you want hidden
3. Select **Hide in Hierarchy**
4. They'll be hidden in preview but still in the file

---

### Step 2: Set Correct Panel Settings

**Panel Settings** control how UI renders. They must match between UI Builder and Game.

#### In UI Builder:
1. Click the **Viewport** tab
2. Look for **Panel Settings** dropdown (top of viewport)
3. Select or create Panel Settings that match your game

#### In Game (UIDocument Component):
1. Select each UIDocument GameObject
2. In **UIDocument** component
3. **Panel Settings** should match UI Builder
4. Or leave as **None** to use default

#### Create Matching Panel Settings:
1. **Assets** → **Create** → **UI Toolkit** → **Panel Settings Asset**
2. Name it `GamePanelSettings`
3. Configure:
   - **Render Mode**: Screen Space - Overlay (default)
   - **Target Display**: Display 1
   - **Sort Order**: 0 (or higher for panels that should appear on top)
4. Assign to both UI Builder and UIDocument components

---

### Step 3: Match Screen Resolution

UI Builder preview might use different resolution than your game.

#### In UI Builder:
1. Top of **Viewport** - find resolution dropdown
2. Set to match your game: **Mobile (1080x1920)** or your target resolution
3. This ensures preview matches game view

#### In Game View:
1. **Game** tab → Aspect ratio dropdown
2. Set to **Mobile (1080x1920)** or match UI Builder
3. Both should now show same size

---

### Step 4: Verify UXML Files Are Correct

You might have `MainGameUi.uxml` that's different from `MainHUD.uxml`.

**Check:**
1. Which UXML is assigned to your Main HUD UIDocument?
2. Should be: `Assets/UI Toolkit/UXML/MainHUD.uxml`
3. NOT: `Assets/UI Toolkit/MainGameUi.uxml` (this one is empty)

**Fix:**
1. Select **Main HUD Document** GameObject
2. In **UIDocument** component
3. **Source Asset** should be: `MainHUD.uxml` (from UXML folder)
4. NOT `MainGameUi.uxml` (root folder)

---

### Step 5: Check USS Stylesheet References

USS files must be correctly linked in UXML.

**In UXML files, check:**
```xml
<Style src="project://database/Assets/UI Toolkit/USS/main-styles.uss?..." />
```

**If path is wrong:**
1. In UI Builder, select root element
2. **Inspector** → **StyleSheets**
3. Click **+** to add stylesheet
4. Select `main-styles.uss`
5. Save UXML

---

## 🎯 Quick Fix Checklist

### For UI Builder Preview:
- [ ] Hide panels manually (right-click → Hide in Hierarchy)
- [ ] Set viewport resolution to match game (1080x1920)
- [ ] Verify Panel Settings match
- [ ] Check USS stylesheets are loaded

### For Game View:
- [ ] Verify correct UXML files are assigned to UIDocuments
- [ ] Check UIDocumentManager is running (no errors in Console)
- [ ] Test in Play Mode (panels should hide automatically)
- [ ] Verify Panel Settings on UIDocument components

---

## 🔧 Common Issues & Fixes

### Issue 1: Panels Show in UI Builder but Hide in Game
**Cause:** Code hides them at runtime (this is correct!)
**Fix:** Hide them in UI Builder for preview (see Step 1)

### Issue 2: Different Sizes/Positions
**Cause:** Different resolutions or Panel Settings
**Fix:** Match resolution and Panel Settings (Steps 2 & 3)

### Issue 3: Styles Not Applied
**Cause:** USS file not linked or wrong path
**Fix:** Re-link stylesheet in UI Builder (Step 5)

### Issue 4: Wrong UXML File
**Cause:** Using `MainGameUi.uxml` instead of `MainHUD.uxml`
**Fix:** Assign correct UXML to UIDocument (Step 4)

---

## 📝 Best Practice Workflow

1. **Design in UI Builder:**
   - Hide panels you're not working on
   - Set correct resolution
   - Design one panel at a time

2. **Test in Game View:**
   - Enter Play Mode
   - Verify panels hide/show correctly
   - Test all interactions

3. **Iterate:**
   - Make changes in UI Builder
   - Test in Game View
   - Adjust as needed

---

## 🎨 UI Builder Tips

### Viewport Settings:
- **Resolution**: Match your target device
- **Scale**: 1.0 for accurate preview
- **Panel Settings**: Use same as game

### Working with Panels:
- **Hide unused panels** in Hierarchy
- **Lock panels** you're not editing (right-click → Lock)
- **Use layers** to organize (create parent containers)

### Preview vs Runtime:
- **UI Builder** = Static preview (no scripts)
- **Game View** = Dynamic runtime (scripts run)
- **Always test in Play Mode** for final verification

---

## ✅ Verification

After fixes, you should see:

**UI Builder:**
- Only MainHUD visible (or panels you're editing)
- Correct resolution
- Styles applied correctly

**Game View (Play Mode):**
- Only MainHUD visible initially
- Panels appear when triggered
- Everything matches UI Builder design

---

**Remember:** UI Builder is for **designing**, Game View is for **testing**. They'll never be 100% identical because UI Builder doesn't run scripts, but you can make them very close with these steps!
