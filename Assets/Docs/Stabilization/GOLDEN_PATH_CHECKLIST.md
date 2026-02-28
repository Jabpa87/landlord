# Golden Path Checklist (Stabilization)

Date: 2026-02-28
Branch: stabilization-2026-02-28

## Front Door
- [ ] StartPage loads without null refs
- [ ] MainMenu loads and Start Game works
- [ ] GameScene loads with valid settings (no redirect loop)

## Core Turn Loop
- [ ] Turn starts with valid current player
- [ ] Roll works (human)
- [ ] Move resolves tile action
- [ ] End Turn enabled only when allowed

## Property Flow
- [ ] Buy panel shows tile card and remains visible while interacting
- [ ] Buy action purchases property and updates ownership visuals
- [ ] Skip action starts auction when expected

## Auction Flow (Human-initiated)
- [ ] Auction panel opens and buttons enabled for active bidder
- [ ] Bid history updates and remains inside container
- [ ] Pass works
- [ ] Winner resolution closes panel
- [ ] Money deduction + ownership transfer happens
- [ ] Turn resumes (no deadlock)

## Auction Flow (AI-initiated)
- [ ] Auction panel opens for human response
- [ ] Human controls enabled on human turn
- [ ] AI responds after think delay
- [ ] Auction completes and game continues

## Trade Flow
- [ ] Trade panel opens and accepts/rejects correctly
- [ ] Trade result icon is correct and scaled
- [ ] Transaction animation plays without blocking input

## Cards / Results
- [ ] Chance card icon always visible
- [ ] Community card icon always visible
- [ ] Result popup icon never empty
- [ ] Jail/visit icons mapped correctly

## Save/Resume
- [ ] Save during game succeeds
- [ ] Resume restores players, ownership, turn index
- [ ] No invalid turn owner/state after resume

## Stability
- [ ] No null-ref spam in normal 10-turn run
- [ ] No panel stuck visible/invisible unexpectedly
- [ ] No duplicate AudioListener warnings in playable scene
