# Narrative Manager & Card System Setup

This guide explains **Narrative Manager** (news feed) and **where the card system shows** in the UI Toolkit setup.

---

## 1. Narrative Manager

### Do I need to create it?

**No.** Narrative Manager is **optional** and **auto-creates** if it’s not in the scene.

- When any code first uses `NarrativeManager.Instance`, the script will:
  1. Look for an existing NarrativeManager in the scene.
  2. If none is found, it will **create** a new GameObject named `"NarrativeManager"` and add the component.
- So you do **not** have to add it to the Hierarchy yourself for the news feed to work.

### If you want it visible in the Hierarchy from the start

1. Open the **Game Scene** (the scene where you roll dice and play).
2. In the Hierarchy: **Right‑click** → **Create Empty**.
3. Name the GameObject **`NarrativeManager`**.
4. With it selected: **Add Component** → search **`NarrativeManager`** → add it.
5. Leave it in the **root** of the Hierarchy (no need to parent it under UI Manager).

### What it does

- **News feed** only: the scrolling “tweets” / narrative messages (e.g. “Player passed GO”, “Rent paid”, “House built”).
- It is **not** used for Chance/Community Chest/Perk **cards**; those use the Card Panel (see below).

### Where the news feed appears

- **UI Toolkit:** NarrativeManager looks for a **ScrollView** named **`NewsFeedScrollView`** inside the **Main HUD** UIDocument (the UXML used by the Main HUD in the Game Scene). If that element exists, the feed appears there.
- **uGUI hybrid:** If you use **MainHUDController** with **NewsFeedContent** assigned, the feed is shown in that transform instead.

If you don’t see the news feed, check that your Main HUD UXML (or hybrid HUD) has either `NewsFeedScrollView` (UI Toolkit) or `NewsFeedContent` (uGUI) set up and that NarrativeManager can find the UIDocument / controller (it usually finds UIDocumentManager’s main HUD automatically).

---

## 2. Card System – Where It Shows

The **card panel** (Chance, Community Chest, Perk cards) is **only in the Game Scene**. It does **not** appear on the Start Page or Main Menu.

### Scene

- **Game Scene** (the play scene with the board, dice, and HUD).

### Where it lives in the scene

- The card UI is a **UIDocument** that uses **CardPanel.uxml**.
- In your project it is set up as a **child of the “UI Manager”** GameObject in the Game Scene:
  - **Hierarchy:** something like **`UI Manager`** → **`Card Panel Document`** (or similar name for the UIDocument that has **Source Asset = CardPanel**).
- **UIDocumentManager** (on **UI Manager**) must have **Card Panel Document** assigned to that UIDocument.

### When the card panel appears

1. **Perk cards at game start** – When the game starts, if perk reveal is enabled, each player’s perk card can be shown (title, description, OK).
2. **Chance** – When a player lands on a **Chance** tile, a Chance card is drawn and the card panel shows (title, description, OK).
3. **Community Chest** – When a player lands on a **Community Chest** tile, a Community Chest card is drawn and the card panel shows (title, description, OK).
4. **Get Out of Jail Free** – When the player uses the card from the jail UI, the panel can show; the “USE CARD” option is wired in the same panel.

So: **the card system shows only in the Game Scene**, as a popup over the game view when one of the above events happens.

---

## 3. Card Not Loading – Checklist

If the card panel never appears when you land on Chance/Community Chest or at game start, check the following in the **Game Scene**.

### 3.1 UIDocumentManager (UI Manager)

1. Select **UI Manager** in the Hierarchy.
2. In the Inspector, find **UIDocumentManager**.
3. **Card Panel Document**
   - Must be assigned to the **UIDocument** that uses **CardPanel.uxml**.
   - If it’s **None**, drag the **Card Panel Document** GameObject (the one that has the UIDocument with Source Asset = CardPanel) into this field.

### 3.2 Card Panel Document GameObject

1. Find the **Card Panel Document** (or the object that holds the card UIDocument) under **UI Manager**.
2. **UIDocument** component:
   - **Source Asset** must be **CardPanel** (CardPanel.uxml).
   - **Panel Settings** should be assigned (same as other UI Toolkit panels, e.g. sort order 150 or 200 so it draws on top).
3. **GameObject** and **UIDocument**:
   - The GameObject must be **active** (checkbox enabled in Inspector).
   - The **UIDocument** component must be **enabled**.

### 3.3 CardPanel.uxml

The UXML must contain elements with these **exact names** (used by UIDocumentManager):

- Root or a child: **`CardPanel`** (VisualElement)
- **`CardIcon`** (VisualElement)
- **`CardTitleText`** (Label)
- **`CardTopicText`** (Label)
- **`CardDescriptionText`** (Label)
- **`CardOkButton`** (Button)
- **`CardAltButton`** (Button)

If any of these names are missing or changed, the card panel may not show or may not work. Your existing **CardPanel.uxml** already defines these.

### 3.4 CardIconCatalog (optional but recommended)

1. On **UI Manager**, **UIDocumentManager** has a field **Card Icon Catalog**.
2. Assign a **CardIconCatalog** asset (create via **Assets → Create → Game → Card Icon Catalog** if needed).
3. This is used for card icons; the panel can still show text without it, but assigning it avoids warnings and improves visuals.

### 3.5 Console errors

When you land on Chance/Community Chest or when a perk card should show, check the **Console** for:

- **"CardPanelDocument is null"** → Assign **Card Panel Document** on UIDocumentManager (see 3.1).
- **"CardOkButton not found"** → UXML or root element names don’t match (see 3.3).
- **"rootVisualElement is null"** → UIDocument not ready or disabled; check 3.2.

---

## 4. Quick Reference

| Item              | Where it is / when it shows |
|-------------------|-----------------------------|
| **Narrative Manager** | Optional; auto-creates. Add in **Game Scene** if you want it in Hierarchy. Drives the **news feed** only. |
| **News feed**     | In **Game Scene**, inside Main HUD (element `NewsFeedScrollView` or hybrid `NewsFeedContent`). |
| **Card panel**    | **Game Scene** only. UIDocument under **UI Manager** with **CardPanel.uxml**. Shows when: landing on Chance/Community Chest, perk reveal at start, or using Get Out of Jail Free. |
| **Card Panel Document** | Assign this UIDocument to **UIDocumentManager → Card Panel Document** on **UI Manager**. |

---

## 5. Summary

- **Narrative Manager:** You do **not** have to create it; it can create itself. Create it in the **Game Scene** only if you want it visible in the Hierarchy. It only controls the **news feed**, not the cards.
- **Card system:** Lives **only in the Game Scene**, as the **Card Panel Document** (UIDocument using CardPanel.uxml) under **UI Manager**. It shows when the game triggers a card (Chance, Community Chest, perk, or Get Out of Jail Free). Fix “card not loading” by ensuring **Card Panel Document** is assigned on **UIDocumentManager**, the Card Panel Document GameObject/UIDocument is active and uses **CardPanel.uxml**, and the UXML has the required element names listed in section 3.3.
