# summit-data-lake-forge

`summit-data-lake-forge` keeps a focused C++ implementation around data engineering. The project goal is to build a C++ toolkit that studies lake behavior through windowed input fixtures, with late-data behavior checks and bounded memory input sets.

## Purpose

I want this repository to be useful as a quick reading exercise: fixtures first, implementation second, verifier last.

## Summit Data Lake Forge Review Notes

`edge` and `recovery` are the cases worth reading first. They show the optimistic and cautious ends of the fixture.

## What Is Covered

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/summit-data-lake-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `partition skew` and `quality gap`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Notes

The core code exposes a scoring path and the added review layer uses `signal`, `slack`, `drag`, and `confidence`. The domain terms are `schema drift`, `lineage depth`, `partition skew`, and `quality gap`.

The C++ code keeps the review rule close to the tests.

## Command

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Audit Path

The check exercises the source code and the review fixture. `edge` is the high score at 232; `recovery` is the low score at 148.

## Limits

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
