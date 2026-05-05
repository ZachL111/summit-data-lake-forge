#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{92, 75, 8, 17, 8};
    assert(score_signal(signal_case_1) == 215);
    assert(classify_signal(signal_case_1) == "accept");
    Signal signal_case_2{90, 74, 10, 10, 5};
    assert(score_signal(signal_case_2) == 214);
    assert(classify_signal(signal_case_2) == "accept");
    Signal signal_case_3{89, 103, 25, 8, 11};
    assert(score_signal(signal_case_3) == 240);
    assert(classify_signal(signal_case_3) == "accept");
}
