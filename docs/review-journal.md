# Review Journal

The repository goal stays the same: build a C++ toolkit that studies lake behavior through windowed input fixtures, with late-data behavior checks and bounded memory input sets. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 183, lane `ship`
- `stress`: `lineage depth`, score 229, lane `ship`
- `edge`: `partition skew`, score 232, lane `ship`
- `recovery`: `quality gap`, score 148, lane `ship`
- `stale`: `schema drift`, score 227, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.
