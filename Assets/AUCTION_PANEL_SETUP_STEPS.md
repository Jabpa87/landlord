# How to Set Up Auction Panel Document

## The Problem

The `AuctionSystem` component needs a **GameObject with UIDocument component**, not the UXML file directly. The dropdown shows UIDocument components in your scene, not UXML files.

## Solution: Create Auction Panel Document GameObject

Follow these steps exactly (same as other panels):

### Step 1: Create the GameObject

1. **In Hierarchy**, find your **UI Manager** GameObject (or wherever your other panel documents are)
2. **Right-click** on UI Manager → **Create Empty**
3. **Rename** it to **"Auction Panel Document"** (exact name, case-sensitive)

### Step 2: Add UIDocument Component

1. **Select** the "Auction Panel Document" GameObject you just created
2. In **Inspector**, click **Add Component**
3. Search for **"UI Document"** (or **"UIDocument"**)
4. Click to add it

### Step 3: Assign the UXML File

1. **Still in Inspector**, find the **UIDocument** component you just added
2. You'll see a field called **"Source Asset"** (or **"Source Uxml Asset"**)
3. **Drag and drop** `AuctionUi.uxml` from your Project window into this field
   - OR click the circle icon next to the field
   - OR drag from: `Assets/UI Toolkit/UXML/AuctionUi.uxml`

### Step 4: Assign to AuctionSystem

1. **Find** the GameObject with **AuctionSystem** component in your scene
2. **Select** it
3. In **Inspector**, find the **Auction System (Script)** component
4. Find the field **"Auction Panel Document"**
5. **Drag** the "Auction Panel Document" GameObject from Hierarchy into this field
   - This should work now because it's a GameObject with UIDocument, not a UXML file

## Visual Guide

```
Hierarchy:
├── UI Manager
│   ├── Main HUD Document (has UIDocument → MainHUD.uxml)
│   ├── Property Panel Document (has UIDocument → PropertyPanel.uxml)
│   ├── Jail Panel Document (has UIDocument → JailPanel.uxml)
│   ├── Card Panel Document (has UIDocument → CardPanel.uxml)
│   └── Auction Panel Document (has UIDocument → AuctionUi.uxml) ← CREATE THIS
```

## Verification

After setup, check:

1. **Auction Panel Document GameObject exists** in Hierarchy
2. **Has UIDocument component** attached
3. **UIDocument Source Asset** = `AuctionUi.uxml`
4. **AuctionSystem component** has "Auction Panel Document" field assigned

## Why This Works

- The dropdown shows **GameObjects with UIDocument components** in your scene
- It doesn't show UXML files directly
- You need to create the GameObject first, then assign the UXML to its UIDocument component
- Then assign that GameObject to AuctionSystem

## If It Still Doesn't Work

1. **Check the GameObject name** - Must be exactly "Auction Panel Document"
2. **Check UIDocument is added** - Should see it in Inspector
3. **Check Source Asset is set** - Should show "AuctionUi" in the field
4. **Try restarting Unity** - Sometimes UI Toolkit needs a refresh
5. **Check Console** - Look for any errors about UIDocument

## Quick Test

After setup:
1. Play the game
2. Land on unowned property
3. Click Skip
4. Check Console - should see: `"AuctionSystem: Using separate AuctionPanelDocument"`
5. Auction panel should appear!
