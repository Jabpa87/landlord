# Android Build & Test Guide

This guide will help you build and test your Monopoly game on an Android device.

---

## 📋 Prerequisites

### 1. **Install Required Software**

#### **Android Studio** (Required for Android SDK)
1. Download from: https://developer.android.com/studio
2. Install Android Studio
3. During installation, make sure to install:
   - Android SDK
   - Android SDK Platform-Tools
   - Android SDK Build-Tools
   - At least one Android SDK Platform (API Level 30 or higher recommended)

#### **Java Development Kit (JDK)**
- Unity usually includes JDK, but if needed:
  - Download JDK 11 or 17 from Oracle or OpenJDK
  - Unity 2021+ typically includes JDK automatically

---

## 🔧 Unity Setup

### Step 1: Switch Build Platform

1. **Open Unity Editor**
2. **File → Build Settings** (or press `Ctrl+Shift+B`)
3. **Select Android** from the platform list
4. **Click "Switch Platform"** (this may take a few minutes the first time)

### Step 2: Install Android Build Support (if not already installed)

1. **Unity Hub → Installs**
2. **Click the gear icon** next to your Unity version
3. **Add Modules**
4. **Check:**
   - ✅ Android Build Support
   - ✅ Android SDK & NDK Tools
   - ✅ OpenJDK
5. **Click "Install"**

---

## ⚙️ Android Build Settings

### Step 1: Configure Player Settings

1. **Edit → Project Settings** (or `Ctrl+,`)
2. **Select "Player"** in the left panel
3. **Under "Other Settings":**

   **Identification:**
   - **Package Name**: `com.yourcompany.bizgame` (change to your own)
   - **Minimum API Level**: Android 7.0 (API 24) or higher
   - **Target API Level**: Latest (API 33/34 recommended)

   **Configuration:**
   - **Scripting Backend**: IL2CPP (recommended) or Mono
   - **API Compatibility Level**: .NET Standard 2.1 or .NET Framework
   - **Target Architectures**: 
     - ✅ ARMv7 (for older devices)
     - ✅ ARM64 (for modern devices - recommended)

   **Graphics:**
   - **Auto Graphics API**: ✅ Enabled
   - **Graphics APIs**: Vulkan, OpenGLES3 (Unity will auto-select)

   **Other Settings:**
   - **Internet Access**: Require (if you need network features)
   - **Write Permission**: External (SDCard) - if needed

### Step 2: Configure Keystore (For Release Builds)

**For Development/Testing:**
- Unity will auto-generate a debug keystore (you can skip this step)

**For Release Builds:**
1. **Player Settings → Publishing Settings**
2. **Create New Keystore** (or use existing)
3. **Set Keystore Password**
4. **Create Key Alias** (e.g., "bizgame")
5. **Set Key Password**
6. **Fill in Key Details** (Name, Organization, etc.)

---

## 📱 Android Device Setup

### Step 1: Enable Developer Options

1. **Open Settings** on your Android device
2. **About Phone** (or **About Device**)
3. **Tap "Build Number" 7 times** until you see "You are now a developer!"

### Step 2: Enable USB Debugging

1. **Settings → Developer Options** (now visible)
2. **Enable "USB Debugging"**
3. **Enable "Install via USB"** (if available)
4. **Enable "Stay Awake"** (optional, keeps screen on while charging)

### Step 3: Connect Device to PC

1. **Connect Android device to PC via USB cable**
2. **On your device**, when prompted, **tap "Allow USB Debugging"** and check "Always allow from this computer"
3. **Verify Connection:**
   - Open Command Prompt or PowerShell
   - Run: `adb devices`
   - You should see your device listed (e.g., `ABC123XYZ    device`)

**If device not detected:**
- Install device USB drivers (Samsung, Xiaomi, etc. have their own drivers)
- Try a different USB cable (data cable, not just charging)
- Try a different USB port (USB 2.0 port recommended)

---

## 🚀 Building & Deploying

### Method 1: Build and Run (Recommended for Testing)

1. **File → Build Settings**
2. **Select Android** platform
3. **Click "Build and Run"** (or press `Ctrl+B`)
4. **Choose save location** (e.g., `C:\Users\DELL\bizgame\Builds\Android`)
5. **Unity will:**
   - Build the APK
   - Install it on your connected device
   - Launch the game automatically

### Method 2: Build APK Only

1. **File → Build Settings**
2. **Select Android** platform
3. **Click "Build"** (not "Build and Run")
4. **Choose save location**
5. **Unity creates an APK file**
6. **Transfer APK to device** (via USB, email, or cloud)
7. **Install manually** on device:
   - Enable "Install from Unknown Sources" in device settings
   - Open APK file and install

---

## 🎮 Testing on Device

### First Launch

1. **Game should launch automatically** after Build and Run
2. **If installed manually**, open the app from app drawer
3. **Grant permissions** if prompted (Storage, etc.)

### Testing Checklist

- ✅ **Main Menu loads correctly**
- ✅ **UI elements are visible and properly sized**
- ✅ **Touch input works** (buttons, tiles, etc.)
- ✅ **Player movement is smooth**
- ✅ **Dice rolling works**
- ✅ **All panels display correctly** (Property, Trade, Jail, etc.)
- ✅ **Text is readable** (not too small)
- ✅ **Performance is acceptable** (no lag/freezing)

---

## 🐛 Troubleshooting

### Build Errors

**Error: "Android SDK not found"**
- **Solution**: 
  1. Edit → Preferences → External Tools
  2. Set "Android SDK Tools" path (usually `C:\Users\YourName\AppData\Local\Android\Sdk`)
  3. Or install Android SDK via Unity Hub

**Error: "JDK not found"**
- **Solution**: 
  1. Edit → Preferences → External Tools
  2. Set "JDK" path (Unity usually auto-detects)
  3. Or install JDK separately

**Error: "Gradle build failed"**
- **Solution**: 
  - Check Unity Console for specific error
  - Try: File → Build Settings → Player Settings → Other Settings → Scripting Backend → Switch to Mono (if using IL2CPP)

### Device Connection Issues

**Device not detected:**
- Install device-specific USB drivers
- Try different USB cable/port
- Enable "USB Debugging" on device
- Run `adb kill-server` then `adb start-server` in command prompt

**"Installation failed" error:**
- Uninstall existing version of app on device
- Enable "Install from Unknown Sources"
- Check device storage space

### Runtime Issues

**App crashes on launch:**
- Check Unity Console for error logs
- Enable "Development Build" in Build Settings
- Check device Android version (must meet minimum API level)

**UI not displaying correctly:**
- Check UI Toolkit PanelSettings reference resolution
- Test different screen sizes/resolutions
- Check UI scaling settings in Player Settings

**Performance issues:**
- Reduce graphics quality in Player Settings
- Lower target frame rate
- Disable unnecessary features (shadows, post-processing)

---

## 📊 Development Build (For Debugging)

### Enable Development Build

1. **File → Build Settings**
2. **Check "Development Build"**
3. **Check "Autoconnect Profiler"** (optional, for performance monitoring)
4. **Check "Script Debugging"** (optional, for breakpoints)
5. **Build and Run**

### View Logs on Device

**Method 1: Unity Console**
- With device connected and app running
- Unity Console will show device logs automatically

**Method 2: ADB Logcat**
- Open Command Prompt
- Run: `adb logcat -s Unity`
- See real-time Unity logs

**Method 3: Android Studio Logcat**
- Open Android Studio
- Connect device
- View → Tool Windows → Logcat

---

## 🔄 Quick Iteration Workflow

### For Fast Testing:

1. **Make code changes in Unity**
2. **File → Build Settings → Build and Run**
3. **Unity rebuilds and deploys automatically**
4. **Test on device**
5. **Repeat**

**Tip**: Use **Development Build** for faster iteration (skips some optimizations)

---

## 📦 Building Release APK

### For Distribution/Testing:

1. **File → Build Settings**
2. **Uncheck "Development Build"**
3. **Player Settings → Other Settings:**
   - Set **Scripting Backend** to **IL2CPP** (better performance)
   - Set **Target Architectures** (ARM64 recommended)
4. **Player Settings → Publishing Settings:**
   - Configure **Keystore** (see Step 2 above)
5. **Build Settings → Build** (not Build and Run)
6. **APK is ready for distribution**

---

## 🎯 Performance Optimization Tips

### For Android:

1. **Reduce Texture Sizes:**
   - Edit → Project Settings → Quality
   - Lower texture quality for Android

2. **Optimize UI Toolkit:**
   - Use appropriate PanelSettings reference resolution
   - Avoid too many nested VisualElements

3. **Reduce Draw Calls:**
   - Use sprite atlases
   - Batch similar objects

4. **Memory Management:**
   - Monitor memory usage in Profiler
   - Unload unused assets

---

## ✅ Final Checklist

Before distributing:

- [ ] Game runs smoothly on target device
- [ ] All UI elements are visible and functional
- [ ] Touch input works correctly
- [ ] No crashes or errors
- [ ] Performance is acceptable
- [ ] Keystore is configured (for release)
- [ ] Package name is set correctly
- [ ] Minimum API level is appropriate
- [ ] App icon is set (Player Settings → Icon)

---

## 📚 Additional Resources

- **Unity Android Documentation**: https://docs.unity3d.com/Manual/android.html
- **Android Developer Guide**: https://developer.android.com/guide
- **Unity UI Toolkit Mobile Guide**: https://docs.unity3d.com/Manual/UIElements-mobile.html

---

## 🆘 Need Help?

If you encounter issues:
1. Check Unity Console for error messages
2. Check device logs via ADB
3. Verify all prerequisites are installed
4. Try building a simple test scene first
5. Check Unity forums/community for similar issues

---

**Good luck with your Android build! 🚀**
