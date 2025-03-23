#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate) {
    int sum = 0;
    int digits = 0;
    
    int digitIterator = candidate, sumIterator = candidate;


    for (int i = 0; digitIterator > 0; i++) {
        digitIterator /= 10;
        digits++;
    }

    for (int i = 0; i < digits; i++) {
        sum += pow(sumIterator % 10, digits);
        sumIterator /= 10;
    }

    if (sum == candidate) {
        return true;
    }

    return false;
}