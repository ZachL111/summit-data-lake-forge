# Summit Data Lake Forge Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 183 | ship |
| stress | lineage depth | 229 | ship |
| edge | partition skew | 232 | ship |
| recovery | quality gap | 148 | ship |
| stale | schema drift | 227 | ship |

Start with `edge` and `recovery`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `recovery` becomes less cautious without a clear reason, I would inspect the drag input first.
