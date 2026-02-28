# Stabilization Task Board (Week 1)

Date: 2026-02-28
Owner: Gameplay/UI

## P0 Blockers (Must Fix)
- [ ] Auction deadlock after winner declaration
- [ ] AI-initiated auction with disabled human controls
- [ ] Missing/empty card icons in live gameplay
- [ ] Buy panel embedded tile card disappearing on interaction regressions

## P1 Reliability
- [ ] Reduce hot-path FindObject calls in Turn/Auction/Trade/Player
- [ ] Single UI ownership per flow (uGUI vs UITK) to stop fallback conflicts
- [ ] Add startup validator for required panel refs

## P2 Polish
- [ ] Text overflow and wrapping consistency across auction/history rows
- [ ] Theme consistency pass (font/color/spacing)
- [ ] Animation timing tuning for AI responses and money flow

## Work Log
- [x] Day 1 baseline captured
- [x] Day 2 UI ownership pass
- [ ] Day 3 auction/turn state hardening
- [ ] Day 4 deterministic refs pass
- [ ] Day 5 icon/asset integrity pass
- [ ] Day 6 soak and save/resume validation
- [ ] Day 7 RC cleanup
