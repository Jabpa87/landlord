# Recovery After Deleting the Library Folder

If you deleted Unity's **Library** folder to clear cache, here’s how to fix the issues you’re seeing.

---

## 1. USS `gap` warning (fixed)

**Issue:** `main-styles.uss (line 773): warning: Unknown property 'gap'`

**Status:** Fixed. Unity 6.2 USS does not support the CSS `gap` property. All `gap` usages in `main-styles.uss` were replaced with margin-based spacing (e.g. `> *:not(:first-child) { margin-left: 10px; }`). The warning should disappear after the next reimport.

---

## 2. Camera: “does not contain an additional camera data component”

**Issue:** `Camera Main Camera does not contain an additional camera data component`

**Fix:**

1. In the **Hierarchy**, select **Main Camera**.
2. In the **Inspector**, click **Add Component**.
3. Search for **Universal Additional Camera Data** (URP) or **HD Additional Camera Data** (HDRP).
4. Add it and leave defaults if you’re not sure.

If your project uses **URP**, the component is **Universal Additional Camera Data**. This is required for the camera to work correctly with the render pipeline after a fresh import.

---

## 3. Unity Connect / Token Exchange error

**Issue:** `UnityConnectWebRequestException: Token Exchange failed due a failure with the web request`

**Cause:** Unity’s connection to its services (auth, packages, etc.) failed. Common after clearing Library or with network/firewall issues.

**What to try:**

1. **Sign out and back in**
   - **Unity Hub:** Click your account (top right) → Sign out, then Sign in again.
   - Or in the Editor: **Services** window → sign out and sign in.

2. **Check network**
   - Disable VPN temporarily.
   - Ensure firewall/antivirus isn’t blocking Unity (e.g. `Unity.exe`, Unity Hub).

3. **Retry later**
   - Sometimes Unity’s servers are briefly unavailable. Try again in a few minutes.

4. **Clear Unity’s cache (if it keeps failing)**
   - Close Unity.
   - Delete (or rename) the folder:
     - **Windows:** `%LOCALAPPDATA%\Unity\cache`
     - **macOS:** `~/Library/Caches/Unity`
   - Reopen the project and sign in again.

The game can often run in the Editor and in builds even when this error appears; it mainly affects services (Cloud, Package Manager auth, etc.). If you’re not using those, you can ignore it for now.

---

## 4. Empty scene / blank Game view

**Cause:** After deleting Library, Unity reimports everything. Your **active scene** might be “Untitled” (empty) instead of your real game scene.

**Fix:**

1. **Open your game scene**
   - **File → Open Scene** (or double-click in **Project**).
   - Open the scene that contains your board, camera, UI, and game logic (e.g. `MainScene`, `GameScene`).

2. **Save**
   - **File → Save** (or Ctrl+S) so this scene stays current.

3. **Set as default (optional)**
   - **File → Build Settings**.
   - Add your scene to “Scenes In Build” and drag it to index 0 if you want it to load first.

---

## 5. Reimport / domain reload

After Library is recreated:

- Let Unity finish **Importing** and **Compiling** (progress bar).
- If you see script or USS errors, wait for the second compile (domain reload) after fixing scripts or USS.
- **Assets → Reimport All** is optional; only use it if something still looks wrong.

---

## Quick checklist

| Step | Action |
|------|--------|
| 1 | Open your **game scene** (not Untitled). |
| 2 | Add **Universal Additional Camera Data** to Main Camera (URP). |
| 3 | Ignore or retry **Unity Connect** error (sign in / network). |
| 4 | Confirm **USS** no longer shows `gap` warnings (already fixed in `main-styles.uss`). |

After this, press Play and check the Game view again; the simulator should show your game if the correct scene is open and the camera is set up.
