# Game Sounds Setup Guide

Sounds are played by **GameSoundManager** for these events:

| Event | Clip (from Assets/Sounds) | When it plays |
|-------|---------------------------|---------------|
| Monopoly | `Monopoly.mp3` | When a player completes a color set by buying a property |
| Step | `st3-footstep-sfx-323056.mp3` | Each step while the player moves on the board |
| Feed notice | `Feed notice.mp3` | When a new item is added to the Live Feed (toggle next to feed) |
| Buy property | `Buy Propertry.mp3` | When a player buys a property |
| Buy house | `Buying house.mp3` | When a player builds a house or hotel |
| Idle | `mid-nights-sound-291477.mp3` | After 10 seconds with no game activity (roll, move, buy, build, trade, end turn) |

## Setup

1. **Add GameSoundManager to the scene**
   - In your game scene, create an empty GameObject (or use an existing manager object).
   - Add the **GameSoundManager** component.

2. **Assign clips in the Inspector**
   - Select the GameObject with GameSoundManager.
   - In the Inspector, drag each clip from **Assets/Sounds** into the matching slot:
     - Monopoly Clip → `Monopoly`
     - Step Clip → `st3-footstep-sfx-323056`
     - Feed Notice Clip → `Feed notice`
     - Buy Property Clip → `Buy Propertry`
     - Buy House Clip → `Buying house`
     - Idle Clip → `mid-nights-sound-291477`

3. **Optional: Auto-load from Resources**
   - Create a folder **Assets/Resources/Sounds**.
   - Copy or move the six `.mp3` files there (keep the same file names).
   - If you do this, you can leave the Inspector slots empty and they will load at runtime.

## Feed sound toggle

A **Sound** toggle appears next to "📰 Live Feed" on the main HUD. When off, the feed notice sound is muted. The choice is saved between sessions.

## Idle sound

If there is no activity (no roll, move, buy, build, trade, or end turn) for **10 seconds**, the idle ambient clip plays. It stops as soon as any activity happens. You can change the delay in the Inspector (**Idle Delay Seconds**).
