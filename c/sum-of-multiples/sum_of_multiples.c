#include "sum_of_multiples.h"
#include <stdlib.h>

unsigned int sum(const unsigned int *factors, const size_t number_of_factors, const unsigned int limit) {
    unsigned int sum = 0;

    for (size_t i = 1; i < limit; i++) {
        for (size_t j = 0; j < number_of_factors; j++) {
            unsigned int factor = factors[j];
            if (!factor) continue;
            if (i % factor == 0) {
                sum += i;
                break;
            }
        }
    }
    return sum;
}