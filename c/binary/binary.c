#include "binary.h"
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <string.h>

int convert(const char *input) {
    int length = strlen(input);
    uint64_t sum = 0;


    for (int i = length - 1; i >= 0; i--) {
        switch (input[i]) {
            case '0':
                continue;
            case '1':
                sum += pow(2, (length - 1) - i);
                break;
            default:
                return INVALID;
        }
    }
    return sum;
}
