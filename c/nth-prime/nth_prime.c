#include "nth_prime.h"
#include <math.h>

bool is_prime(uint32_t n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (uint32_t i = 3; i <= sqrt(n); i += 2) {
        if ((n % i == 0)) {
            return false;
        }
    }
    return true;
}

uint32_t nth(uint32_t n) {
    if (!n) return 0;
    uint32_t primes_found = 0;

    uint32_t i = 0;
    for (i = 0; primes_found < n; i++) {
        if (is_prime(i)) {
            primes_found++;
        }
    }
    return i - 1;
}