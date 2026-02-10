# Start Page Setup (First Screen Before Main Menu)

The Start Page is the first screen players see before the main menu (character selection). It has:

- **Logo area** – placeholder "OUR LANDLORD" (replace with your landlord logo image in the UXML or via script).
- **Header banner** – uses `Badge.png`; swap for your own banner in StartPage.uxml.
- **Background** – uses same texture as main menu; change `StartPage` root `background-image` in StartPage.uxml to your image.
- **Game Options button** – top right; wire in StartPageManager to open your options/settings panel.
- **2x2 mode grid:**
  - **V/S Computer** – loads Main Menu (play with 1–4 computers).
  - **Pass Device** – loads Main Menu (you and others passing the device).
  - **Online Multiplayer** – shows "Coming soon" (wire later).
  - **Play with Friends** – shows "Coming soon" (local network; wire later).

## Add the Start Page scene

1. **New scene:** File → New Scene → Basic 2D (or your template). Save as `StartPage.unity` in Scenes.
2. **UI:** Create an empty GameObject, add **UIDocument**. Set **Source Asset** to `StartPage.uxml` (from UI Toolkit/UXML).
3. **Manager:** Add **StartPageManager** to the same GameObject (or another in the scene). Assign the UIDocument to **Start Page Document** if needed.
4. **Panel Settings:** Ensure the UIDocument uses a Panel Settings asset (e.g. the same as Main Menu) so it renders.
5. **Build order:** File → Build Settings. Add **StartPage** and **MainMenu** if missing. Drag **StartPage** to the top so it loads first.

After this, the game opens on the Start Page; choosing V/S Computer or Pass Device loads the Main Menu (character selection, then Start Game).

## Optional: use mode in Main Menu

In MainMenuManager you can read `StartPageFlow.IsPassDevice` to adjust UI or rules (e.g. pass device vs vs computer).
