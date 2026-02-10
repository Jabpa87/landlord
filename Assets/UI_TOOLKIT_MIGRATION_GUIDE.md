# UI Toolkit Migration Guide

Complete guide to migrate from Unity UI (Canvas-based) to UI Toolkit for your Monopoly game.

---

## 📋 Table of Contents

1. [Understanding the Differences](#1-understanding-the-differences)
2. [Prerequisites & Setup](#2-prerequisites--setup)
3. [Migration Strategy](#3-migration-strategy)
4. [Creating UXML Files](#4-creating-uxml-files)
5. [Creating USS Stylesheets](#5-creating-uss-stylesheets)
6. [Updating Scripts](#6-updating-scripts)
7. [Step-by-Step Migration Process](#7-step-by-step-migration-process)
8. [Common Patterns & Conversions](#8-common-patterns--conversions)
9. [Testing Checklist](#9-testing-checklist)
10. [Troubleshooting](#10-troubleshooting)

---

## 1. Understanding the Differences

### Unity UI (Current System)
- **Canvas-based**: Uses GameObject hierarchy with Canvas, Panels, Buttons
- **Components**: `Button`, `TextMeshProUGUI`, `Image` components on GameObjects
- **References**: Direct references to `Button`, `TextMeshProUGUI`, `GameObject`
- **Visibility**: `GameObject.SetActive(true/false)`
- **Interactivity**: `button.interactable = true/false`

### UI Toolkit (New System)
- **Document-based**: Uses UXML (UI XML) files to define structure
- **Styles**: Uses USS (Unity Style Sheets) for styling
- **References**: Query elements by name using `Q<T>()` or `QuerySelector()`
- **Visibility**: `element.style.display = DisplayStyle.Flex/None`
- **Interactivity**: `element.SetEnabled(true/false)`

### Key Benefits of UI Toolkit
- ✅ Better performance (especially for many UI elements)
- ✅ More scalable UI architecture
- ✅ Better suited for runtime UI generation
- ✅ Modern, web-like styling with USS
- ✅ Easier to maintain and version control

---

## 2. Prerequisites & Setup

### Step 2.1: Verify UI Toolkit Package

1. Open **Window** → **Package Manager**
2. Make sure **UI Toolkit** package is installed (should be included by default in Unity 2021.2+)
3. If not installed:
   - Click **+** → **Add package by name**
   - Enter: `com.unity.ui.builder` (for UI Builder)
   - Or use: `com.unity.ui` (core UI Toolkit)

### Step 2.2: Create Folder Structure

Create this folder structure in your Assets:

### Step 2.3: Open UI Builder (Optional but Recommended)

1. **Window** → **UI Toolkit** → **UI Builder**
2. This visual editor helps create and edit UXML files
3. You can also edit UXML files directly as XML

---

## 3. Migration Strategy

### Recommended Approach: Incremental Migration

**Phase 1**: Create UI Toolkit documents alongside existing UI
- Keep Canvas UI active
- Create UI Toolkit documents
- Test in parallel

**Phase 2**: Update scripts to support both systems
- Add UI Toolkit references
- Keep old references for fallback

**Phase 3**: Switch to UI Toolkit
- Remove Canvas UI
- Update all scripts
- Test thoroughly

### UI Elements to Migrate

#### TurnManager UI:
- ✅ `rollButton` → Button
- ✅ `endTurnButton` → Button
- ✅ `currentPlayerText` → Label
- ✅ `diceText` → Label
- ✅ `walletText` → Label
- ✅ `jailPanel` → VisualElement (container)
- ✅ `jailStatusText` → Label
- ✅ `payBailButton` → Button
- ✅ `useCardButton` → Button
- ✅ `waitButton` → Button

#### Player UI:
- ✅ `propertyPanel` → VisualElement
- ✅ `propertyText` → Label
- ✅ `buyButton` → Button
- ✅ `skipButton` → Button
- ✅ `buildPanel` → VisualElement
- ✅ `buildInfoText` → Label
- ✅ `buildHouseButton` → Button
- ✅ `buildHouseButtonText` → Label (child of button)
- ✅ `cardPanel` → VisualElement
- ✅ `cardTitleText` → Label
- ✅ `cardDescriptionText` → Label
- ✅ `cardOkButton` → Button

#### DiceRoller UI:
- ✅ `diceRollPanel` → VisualElement
- ✅ `resultText` → Label
- ✅ `dice1Faces` → Image[] (6 images)
- ✅ `dice2Faces` → Image[] (6 images)

---

## 4. Creating UXML Files

### Step 4.1: Create Main HUD UXML

Create `Assets/UI Toolkit/UXML/MainHUD.uxml`:

<ui:UXML xmlns:ui="UnityEngine.UIElements" xmlns:uie="UnityEditor.UIElements" editor-extension-mode="False">
    <Style src="project://database/Assets/UI Toolkit/USS/main-styles.uss?fileID=..." />
    
    <ui:VisualElement name="MainHUD" class="main-hud">
        <!-- Top Panel -->
        <ui:VisualElement name="TopPanel" class="top-panel">
            <ui:VisualElement name="ProfilePicture" class="profile-picture" />
            <ui:Label name="CurrentPlayerText" text="Current Player: Player 1" class="player-text" />
            <ui:Label name="WalletText" text="Wallet: ₦2,000,000" class="wallet-text" />
        </ui:VisualElement>
        
        <!-- Bottom Panel -->
        <ui:VisualElement name="BottomPanel" class="bottom-panel">
            <ui:Button name="RollButton" text="ROLL DICE" class="action-button" />
            <ui:Button name="EndTurnButton" text="END TURN" class="action-button" />
            <ui:Label name="DiceText" text="Dice: Roll to move" class="dice-text" />
        </ui:VisualElement>
    </ui:VisualElement>
</ui:UXML>
