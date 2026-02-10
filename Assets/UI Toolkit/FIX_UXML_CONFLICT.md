# Fix: MainGameUi.uxml vs MainHUD.uxml Conflict

## 🔍 The Problem

You have **two UXML files** with the same elements:
- `MainGameUi.uxml` (in root UI Toolkit folder)
- `MainHUD.uxml` (in UXML folder)

Both have elements with the same names (RollButton, EndTurnButton, etc.), causing conflicts.

---

## ✅ Solution: Use Only One File

**Recommended:** Use `MainHUD.uxml` (in UXML folder) - this is the official one.

### Step 1: Check Which File is Assigned in Scene

1. Select **Main HUD Document** GameObject in your scene
2. In **UIDocument** component, check **Source Asset**
3. It should be: `Assets/UI Toolkit/UXML/MainHUD.uxml`
4. **NOT**: `Assets/UI Toolkit/MainGameUi.uxml`

### Step 2: Update Scene to Use MainHUD.uxml

If it's using `MainGameUi.uxml`:

1. Select **Main HUD Document** GameObject
2. In **UIDocument** component
3. Click the circle icon next to **Source Asset**
4. Navigate to: `Assets/UI Toolkit/UXML/`
5. Select **MainHUD.uxml**
6. Click **Select**

### Step 3: Remove or Rename MainGameUi.uxml (Optional)

**Option A: Delete it** (if you're sure you don't need it)
- Right-click `MainGameUi.uxml` in Project window
- Delete
- This removes the conflict

**Option B: Rename it** (if you want to keep it as backup)
- Rename to `MainGameUi.uxml.backup`
- This prevents Unity from using it

**Option C: Keep it but don't use it**
- Just make sure no UIDocument is assigned to it
- Leave it as-is (won't cause issues if not used)

---

## 🎯 Which File Should You Use?

### Use `MainHUD.uxml` (Recommended)
- ✅ Located in proper folder structure (`UXML/`)
- ✅ Clean, no inline styles
- ✅ Uses USS stylesheets properly
- ✅ Matches the setup guide

### Don't Use `MainGameUi.uxml` (Unless You Prefer It)
- ⚠️ Has inline styles that can cause issues
- ⚠️ In root folder (less organized)
- ⚠️ May have positioning conflicts

---

## 🔧 Quick Fix Steps

### If MainGameUi.uxml is Assigned:

1. **Select Main HUD Document** GameObject
2. **UIDocument** → **Source Asset** → Change to `MainHUD.uxml`
3. **Save scene**
4. **Test in Play Mode**

### If Both Are Assigned to Different UIDocuments:

1. **Check all UIDocument GameObjects** in scene
2. **Make sure all use `MainHUD.uxml`**
3. **Remove any assignments to `MainGameUi.uxml`**

---

## 📝 Verification Checklist

After fixing:

- [ ] Only ONE UXML file is assigned to Main HUD Document
- [ ] That file is `MainHUD.uxml` (from UXML folder)
- [ ] No UIDocument uses `MainGameUi.uxml`
- [ ] Test in Play Mode - UI should work correctly
- [ ] No duplicate elements in Hierarchy

---

## 🐛 If Still Having Issues

### Check Console for Errors:
- Look for "Element already exists" errors
- Look for "Null reference" errors
- These indicate conflict

### Verify UIDocumentManager:
1. Select **UI Manager** GameObject
2. Check **UIDocumentManager** component
3. **Main HUD Document** should point to GameObject with `MainHUD.uxml`
4. Not `MainGameUi.uxml`

### Check for Multiple UIDocuments:
1. Search scene for "Main HUD" or "MainGameUi"
2. Make sure only ONE UIDocument has MainHUD assigned
3. Delete or disable duplicates

---

## 💡 Best Practice

**Going Forward:**
- ✅ Use `MainHUD.uxml` for all Main HUD UI
- ✅ Keep all UXML files in `UXML/` folder
- ✅ Don't create duplicate files with same elements
- ✅ If you need variations, use different element names

---

## ✅ After Fix

Once you've chosen one file and assigned it:

1. **Test in Play Mode**
2. **All buttons should work**
3. **No duplicate elements**
4. **UI should match your design**

---

**The conflict is now fixed!** Just make sure only `MainHUD.uxml` is assigned in your scene. 🎯
