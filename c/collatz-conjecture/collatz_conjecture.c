#include "collatz_conjecture.h"
#include "stdbool.h"

static inline bool is_even(int value) {
    return !(value % 2);
}

int steps(int start) {
    if (start < 1) return ERROR_VALUE;

    int steps;
    for (steps = 0; start != 1; steps++) {
        start = is_even(start) ? start / 2 : start * 3 + 1;
    }
    return steps;
}
