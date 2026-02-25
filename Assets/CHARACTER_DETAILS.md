# Character Details (Perks, Benefits, Faults)

Source: `Assets/CharacterDatabase.asset`

## Street Hustler
- Difficulty: Hard
- Backstory: High school dropout who knows Abuja street economics. Starts with almost nothing, but can stretch small wins into big momentum.
- Starting Money: ₦500,000
- Starting Assets: None
- Perks (Benefits):
  - Street Smart Builder: Building houses in Satellite Areas costs 20% less.
  - Quick Flip: Selling houses returns 60% of build cost (instead of 50%).
- Faults (Casts):
  - No Safety Net: Cannot collect Community Chest rewards until Turn 10.
  - Expensive Redemption: Unmortgaging costs +10% extra interest.

## Fresh Grad
- Difficulty: Easy
- Backstory: Just finished NYSC, steady salary, steady mindset. Not flashy, but reliable—Abuja rewards consistency.
- Starting Money: ₦1,500,000
- Starting Assets: None
- Perks (Benefits):
  - Salary Bonus: Collects ₦300,000 when passing GO instead of ₦200,000.
  - Credit Trust: First mortgage has 0% interest when redeeming (no 10% interest once).
- Faults (Casts):
  - Risk Averse: Minimum auction starting bid is 15% of property price (instead of 10%).
  - Limited Leverage: Can only mortgage one property per turn.

## The Prince
- Difficulty: Medium
- Backstory: Wealthy man's son. Starts with advantage, but Abuja expects results. The system watches him closely.
- Starting Money: ₦3,500,000
- Starting Assets: 2 Satellite properties (random, no buildings)
- Perks (Benefits):
  - Family Assets: Starts the game owning 2 Satellite properties (random).
  - Elite Access: Building in Prime Areas costs 10% less.
- Faults (Casts):
  - Heavy Tax: Pays 2× on all Tax tiles.
  - Lifestyle Drain: Loses ₦100,000 every time he passes GO.

## Tech Protege
- Difficulty: Medium
- Backstory: Young coder with a foreign contract. Has money and speed, but sometimes out of touch with Abujas local street value.
- Starting Money: ₦2,500,000
- Starting Assets: 1 Utility (Electricity or Petroleum)
- Perks (Benefits):
  - Digital Edge: Starts owning 1 Utility automatically.
  - Cheap Bail: Pays ₦25,000 to exit jail instead of ₦50,000.
- Faults (Casts):
  - Local Blindspot: Receives 10% less rent from Satellite properties.
  - Bid Penalty: First failed auction bid costs ₦50,000.

## Market Queen
- Difficulty: Medium
- Backstory: Self-made dealmaker from Garki Market. She understands negotiation better than anyone—but her name attracts attention from tax officials.
- Starting Money: ₦2,000,000
- Starting Assets: None
- Perks (Benefits):
  - Master Trader: Can trade mortgaged properties (normally not allowed).
  - Deal Maker: Earns ₦100,000 each time a trade is accepted.
- Faults (Casts):
  - Market Exposure: Pays +15% extra on Tax tiles.
  - No Auction Skip: Cannot skip auctions (must participate or pass officially).

## Civil Servant
- Difficulty: Easy
- Backstory: Quiet, disciplined, and patient. Not rich, not flashy, but understands Abuja’s system better than most. Plays the long game.
- Starting Money: ₦1,800,000
- Starting Assets: None
- Perks (Benefits):
  - Pension Security: Receives ₦100,000 every 5 turns as steady income.
  - Legal Shield: Once per game, pays 25% less rent when landing on an owned property.
- Faults (Casts):
  - Slow Growth: Cannot build Hotels until Turn 20.
  - Paperwork Delay: All trades require one extra turn before they are finalized.

## Omobabalowo
- Difficulty: Medium
- Backstory: Child of a rich father who thinks money solves everything. Starts strong, but Abuja still tests him.
- Starting Money: ₦3,200,000
- Starting Assets: None
- Perks (Benefits):
  - Trust Fund: Starts with ₦3,200,000 in cash.
  - Premium Access: Pays 10% less when buying properties.
- Faults (Casts):
  - Tax Spotlight: Pays +15% extra on Tax tiles.
  - Soft Landing: Cannot mortgage properties until Turn 5.

## Perk Card Note
- The **CharacterDatabase** defines perks and faults for each character.
- I did **not** see a per‑character “perk card” object in `Assets/CharacterDatabase.asset`.
- Perk cards appear to be managed separately (see `PerkCard`/`PerkCardInstance` usage). If you want the specific perk card for each character, point me to the data source (asset or mapping), and I’ll include it.
