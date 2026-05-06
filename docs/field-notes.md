# Field Notes

The fixture is small on purpose, which makes each domain case carry real weight.

The domain cases cover `schema drift`, `lineage depth`, `partition skew`, and `quality gap`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

The widest spread is between `partition skew` and `quality gap`, so those are the first two cases I would preserve during a refactor.

The point is not to make the repository bigger. The point is to make the important judgment testable.
