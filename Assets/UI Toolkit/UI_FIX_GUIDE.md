# UI Toolkit Fix Guide - How to Fix Overlapping Panels

## 🔧 Problem
All UI panels are showing at once and overlapping each other.

## ✅ Solution

### Method 1: Fix in Code (Already Done)
The code has been updated to hide the entire UIDocument root instead of just the panel element. This ensures panels are completely hidden when not needed.

### Method 2: Fix in Unity Editor (Do This Now)

#### Step 1: Hide Panels in UIDocument Settings
1. Select **Property Panel Document** GameObject
2. In the **UIDocument** component, find **Sort Order** (or check if there's a visibility option)
3. **OR** - The code will handle this automatically when you play

#### Step 2: Verify Panel Documents Are Set Up Correctly
Make sure each panel document GameObject has:
- ✅ Exactly **one** UIDocument component
- ✅ Correct UXML file assigned
- ✅ GameObject is **active** (checkbox checked)

#### Step 3: Test in Play Mode
1. **Enter Play Mode**
2. The UIDocumentManager script will automatically hide all panels except MainHUD
3. Only MainHUD should be visible initially

### Method 3: Manual Fix in UXML (If Needed)

If panels still show, you can add `display: none` directly in UXML:

1. Open `PropertyPanel.uxml`
2. Find the root `<ui:VisualElement name="PropertyPanel">`
3. Add `style="display: none;"` to it:

```xml
<ui:VisualElement name="PropertyPanel" class="modal-panel" style="display: none;">
```

**But this shouldn't be necessary** - the code handles it automatically.

---

## 🎯 How to Verify It's Working

### In Editor (Before Play):
- All panel GameObjects should be **active** (checked)
- This is normal - the code hides them at runtime

### In Play Mode:
1. **MainHUD** should be visible (top and bottom bars)
2. **Property Panel** should be **hidden** (until you land on property)
3. **Build Panel** should be **hidden** (until you land on owned property)
4. **Jail Panel** should be **hidden** (until you're in jail)
5. **Card Panel** should be **hidden** (until you draw a card)

---

## 🐛 If Panels Still Show

### Check 1: UIDocumentManager is Running
1. Select **UI Manager** GameObject
2. Check Console for any errors
3. Verify UIDocumentManager component is enabled

### Check 2: Documents Are Assigned
1. Select **UI Manager**
2. In **UIDocumentManager** component, verify all 5 UIDocument fields are assigned
3. None should say "None (UIDocument)"

### Check 3: Code is Executing
1. Add a breakpoint or Debug.Log in `UIDocumentManager.Start()`
2. Verify it's being called
3. Check Console for "PropertyPanel root not found!" warnings

### Check 4: Root Element Exists
The code looks for `rootVisualElement` - make sure:
- UIDocument component is on the GameObject
- UXML file is assigned
- UXML file has a root element

---

## 📝 Understanding the Fix

### Before (Wrong):
```csharp
// Only hid the panel element, not the document root
PropertyPanel.style.display = DisplayStyle.None;
```

### After (Correct):
```csharp
// Hide the entire document root
propertyPanelDocument.rootVisualElement.style.display = DisplayStyle.None;
```

**Why?** Each UIDocument creates a root VisualElement. If we only hide the panel inside, the root is still visible and might show other elements or cause layout issues.

---

## 🎨 Panel Positioning

Panels are centered using:
- `left: 50%` and `margin-left: -300px` (half width)
- `top: 50%` and `margin-top: -150px` (half height)
- `z-index: 1000` to ensure they appear on top

If you want to adjust panel position, edit `main-styles.uss`:
- Change `left` and `top` percentages
- Adjust `margin-left` and `margin-top` values
- Modify `width` and `min-height` for panel size

---

## ✅ Quick Checklist

- [ ] Code has been updated (already done)
- [ ] All UIDocument GameObjects are active
- [ ] All UIDocuments have UXML files assigned
- [ ] UIDocumentManager has all documents assigned
- [ ] Test in Play Mode - only MainHUD should show initially
- [ ] Panels appear when triggered (land on property, etc.)
- [ ] Panels hide when dismissed

---

## 🚀 Next Steps

Once panels are properly hidden:
1. Test each panel appears at the right time
2. Test each panel can be dismissed
3. Adjust panel styling if needed
4. Test on different screen resolutions

---

**The fix is already in the code!** Just make sure your scene is set up correctly and test in Play Mode. The panels will automatically hide when the game starts.
