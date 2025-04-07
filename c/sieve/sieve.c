#include "sieve.h"
#include <stdbool.h>
#include <stdlib.h>

#define RESULT_ARRAY_LEN (1001)

uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes) {
    if (limit < 2) return 0;

    bool prime_marks[RESULT_ARRAY_LEN] = {false};
    prime_marks[0] = prime_marks[1] = true;

    for (uint32_t i = 2; i <= limit; i++) {
        if (prime_marks[i]) continue;
        for (uint32_t j = i * i; j <= limit; j += i) {
            prime_marks[j] = true;
        }
    }

    size_t x = 0;
    for (size_t i = 2; i <= limit && x < max_primes; i++) {
        if (!prime_marks[i]) {
            primes[x++] = i;
        }
    }
    return x;
}