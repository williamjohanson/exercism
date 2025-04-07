#include "prime_factors.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

size_t find_factors(uint64_t n, uint64_t factors[static MAXFACTORS]) {
    uint8_t count = 0;
    uint64_t factor = 2;
    while (n > 1) {
        while (n % factor == 0) {
            factors[count++] = factor;
            n /= factor;
        }
        factor += (factor == 2) ? 1 : 2;
        // if (pow(factor, 2) > n && n > 1) {
        //     factors[count++] = n;
        //     break;
        // }
    }
    return count;
}