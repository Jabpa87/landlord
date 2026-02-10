# Fix: Game Skipping MainMenu on Android Build

## 🔴 Problem
When you build and install the game on Android, it loads straight to the game board, skipping the MainMenu scene.

## ✅ Solution: Fix Build Settings Scene Order

Unity loads scenes in the order they appear in Build Settings. The **first scene** (index 0) is what loads when the app starts.

---

## 📋 Step-by-Step Fix

### Step 1: Open Build Settings

1. In Unity Editor, go to **File → Build Profiles** (or press `Ctrl+Shift+B`)
2. Select **Android** platform

### Step 2: Check Scene List

1. In the Build Profiles window, look for **"Scene List"** section
2. You should see your scenes listed (MainMenu, GameScene, etc.)

### Step 3: Set MainMenu as First Scene

**Option A: Using Build Profiles (Unity 6.2)**
1. In the **Scene List** section, find **MainMenu** scene
2. **Drag it to the top** of the list (it should be index 0)
3. **GameScene** should be below it (index 1)

**Option B: Using Build Settings (Older Unity)**
1. **File → Build Settings**
2. In the **Scenes In Build** list:
   - Find **MainMenu** scene
   - **Drag it to the top** (should be at index 0)
   - **GameScene** should be below it (index 1)

### Step 4: Verify Scene Order

The correct order should be:
```
[0] MainMenu
[1] GameScene
```

### Step 5: Add Missing Scenes (If Needed)

If MainMenu is not in the list:
1. **Open MainMenu scene** in Unity
2. **File → Build Profiles** (or Build Settings)
3. Click **"Add Open Scenes"** or **"+"** button
4. This adds MainMenu to the build
5. **Drag it to index 0** (first position)

### Step 6: Save and Rebuild

1. **Save your scenes** (Ctrl+S)
2. **Rebuild your Android APK**
3. **Install and test** - MainMenu should now load first!

---

## 🔍 Verify Scene Names

Make sure your scene names match exactly:

1. **MainMenu scene file**: Should be named `MainMenu.unity` (or similar)
2. **GameScene scene file**: Should be named `GameScene.unity` (or similar)
3. **In MainMenuManager**: Check that `gameSceneName = "GameScene"` matches your actual scene name

---

## 🎯 Quick Checklist

- [ ] MainMenu scene is in Build Settings
- [ ] MainMenu is at **index 0** (first in list)
- [ ] GameScene is at **index 1** (second in list)
- [ ] Scene names match exactly (case-sensitive!)
- [ ] Both scenes are saved
- [ ] Rebuilt the APK after changes

---

## 🐛 Troubleshooting

### Still Loading GameScene First?

1. **Check scene file names**:
   - MainMenu scene should be: `MainMenu.unity` or `MainMenuScene.unity`
   - Make sure it's actually saved

2. **Check Build Settings again**:
   - MainMenu must be at **index 0**
   - Uncheck and re-check the scenes if needed

3. **Clear and Re-add Scenes**:
   - Remove all scenes from Build Settings
   - Add MainMenu first (index 0)
   - Add GameScene second (index 1)

4. **Check Scene Names in Code**:
   - Open `MainMenuManager.cs`
   - Verify `gameSceneName = "GameScene"` matches your actual scene name
   - Scene names are **case-sensitive**!

### Scene Not Found Error?

- Make sure both scenes are **saved** in your project
- Check that scene files exist in `Assets/Scenes/` folder
- Scene names must match exactly (including capitalization)

---

## 📱 Testing

After fixing:

1. **Build new APK**
2. **Install on device**
3. **Launch app** → Should see MainMenu first
4. **Click "START GAME"** → Should load GameScene

---

## 💡 Why This Happens

Unity uses the **first scene in Build Settings** (index 0) as the entry point when the app launches. If GameScene was first, it would load directly, skipping MainMenu.

---

**After fixing, rebuild your APK and MainMenu should load first! 🎮**
