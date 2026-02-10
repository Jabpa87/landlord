# How to Enable Unity AI Features in Unity 6.2

Unity 6.2 includes **Unity AI** features (Assistant, Generators, Sentis), but they may not be visible by default. Here's how to enable them:

## Step-by-Step Guide

### Step 1: Check Your Unity Version
1. In Unity, go to **Help → About Unity**
2. Verify you're on **Unity 6.2** or newer (you mentioned 6.2.10f1, which should work)
3. If you're on an older version, update through **Unity Hub**

### Step 2: Open Package Manager
1. In Unity Editor, go to **Window → Package Manager**
2. In the top-left, change the dropdown from **"In Project"** to **"Unity Registry"** or **"All packages"**
3. This shows all available packages, not just installed ones

### Step 3: Search for AI Packages
1. In the Package Manager search bar, type: **"AI"** or **"Unity AI"**
2. Look for packages like:
   - **Unity AI** (main package)
   - **AI Assistant**
   - **AI Generators**
   - **Sentis** (Inference Engine)

### Step 4: Install AI Packages
1. Click on the **Unity AI** package (or relevant AI package)
2. Click the **Install** button in the bottom-right
3. Wait for installation to complete
4. You may need to install multiple packages (Assistant, Generators, etc.)

### Step 5: Check Editor Preferences
1. Go to **Edit → Preferences** (Windows) or **Unity → Preferences** (Mac)
2. Look for **General** or **AI** section
3. Check if there's a **"Show AI Menu"** or **"Enable AI Features"** checkbox
4. Make sure it's **checked**

### Step 6: Check Unity Dashboard Settings
1. Go to **https://dashboard.unity.com/** in your browser
2. Sign in with your Unity account
3. Navigate to **Unity AI** settings
4. Ensure AI features are enabled for your organization/project
5. You may need to accept terms or enable beta features

### Step 7: Look for AI Menu in Unity
After installing packages, look for:
- **AI** menu in the top menu bar (next to Window, Help)
- **Window → AI** submenu
- **AI Assistant** panel (may appear as a dockable window)
- **AI Generators** in the toolbar or menu

### Step 8: Restart Unity Editor
1. **Close Unity completely**
2. **Reopen your project**
3. AI features should now be visible

## What Unity AI Features Include

### 1. **AI Assistant**
- Help with technical queries
- Code generation
- Task automation
- Accessible via **Window → AI → Assistant** or **AI** menu

### 2. **AI Generators**
- Create sprites from text prompts
- Generate textures
- Create animations
- Generate materials, sounds, etc.
- Accessible via **Window → AI → Generators**

### 3. **Sentis (Inference Engine)**
- Run ML models locally in Unity
- For runtime AI inference
- Accessible via **Window → AI → Sentis**

## Troubleshooting

### If AI Menu Still Doesn't Appear:

1. **Check Package Installation:**
   - **Window → Package Manager**
   - Filter: **"In Project"**
   - Look for **Unity AI** or related packages
   - If not listed, install from **Unity Registry**

2. **Check Console for Errors:**
   - **Window → General → Console**
   - Look for errors related to AI packages
   - Fix any dependency issues

3. **Verify Account Login:**
   - Make sure you're signed in to Unity
   - Check **Edit → Project Settings → Services**
   - Ensure you're connected to Unity Cloud

4. **Check Beta/Experimental Features:**
   - **Edit → Project Settings → Player**
   - Look for **"Enable Experimental Features"** or similar
   - Some AI features may be in beta

5. **Manual Package Installation:**
   - If packages don't appear, you can manually add them:
   - **Window → Package Manager → + → Add package by name**
   - Try: `com.unity.ai` or `com.unity.ai.assistant`

6. **Update Unity:**
   - Make sure you're on the latest **6.2.x** version
   - Some AI features may require a specific subversion

## Alternative: Check Unity Documentation

1. Visit: **https://docs.unity.com/ai/**
2. Look for **"Getting Started"** or **"Installation"** guides
3. Follow Unity's official setup instructions

## Notes

- **Unity AI is free during beta**, but may require Unity Points when fully released
- Some features may require **Unity Pro** or **Enterprise** subscription
- AI features may be **region-restricted** in some cases
- Make sure you have an **active internet connection** (some features require cloud services)

## Still Can't Find It?

If after trying all these steps you still can't see AI features:

1. **Check Unity Forums/Reddit** for your specific version
2. **Contact Unity Support** if you have a subscription
3. **Verify your Unity account** has access to beta features
4. **Try creating a new project** to test if it's project-specific

## Quick Checklist

- [ ] Unity 6.2 or newer installed
- [ ] Package Manager shows "Unity Registry" packages
- [ ] Unity AI package installed
- [ ] Editor Preferences checked
- [ ] Unity Dashboard settings enabled
- [ ] Unity Editor restarted
- [ ] Signed in to Unity account
- [ ] Internet connection active
