#include "luhn.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define ASCII_ZERO 48

bool luhn(const char *num) {
    bool even = true;
    int size = strlen(num);
    int digits = 0;
    int result = 0;

    if (size <= 1) return false;

    for (int i = size - 1; i >= 0; i--) {
        if (!isdigit(num[i])){
            if (num[i] == ' ') {
                continue;
            }
            return false;
        }
        digits++;
        if (even) {
            result += num[i] - ASCII_ZERO;
        }
        else {
            int sum = 2 * (num[i] - ASCII_ZERO);
            if (sum < 10) {
                result += sum;
            }
            else {
                result += sum - 9;
            };
        }
        even = !even;
    }

    return digits > 1 && result % 10 == 0;
}