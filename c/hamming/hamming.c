#include "hamming.h"
#include <string.h>


int compute(const char *lhs, const char *rhs) {
    int lhs_length = strlen(lhs);
    int rhs_length = strlen(rhs);

    if (lhs_length != rhs_length) {
        return INVALID;
    }

    int mismatches = 0;
    for (int i = 0; i < lhs_length; i++) {
        if (lhs[i] != rhs[i]) {
            mismatches++;
        }
    }

    return mismatches;
}