#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate) {
    int sum = 0;
    int digits = log10(candidate) + 1;
    
    int sumIterator = candidate;

    for (int i = 0; i < digits; i++) {
        sum += pow(sumIterator % 10, digits);
        sumIterator /= 10;
    }

    if (sum == candidate) {
        return true;
    }

    return false;
}