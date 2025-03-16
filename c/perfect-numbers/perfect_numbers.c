#include "perfect_numbers.h"

kind classify_number(int num) {
    if (num < 1) {
        return ERROR;
    }
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        return PERFECT_NUMBER;
    }

    if (num < sum) {
        return ABUNDANT_NUMBER;
    }

    if (num > sum) {
        return DEFICIENT_NUMBER;
    }

    return ERROR;
}