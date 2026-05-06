#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{71, 33, 17, 59};
    assert(domain_review_score(item) == 183);
    assert(domain_review_lane(item) == "ship");
}
