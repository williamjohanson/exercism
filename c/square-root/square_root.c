#include "square_root.h"
#include <stdio.h>

int square_root(int s) {
    double x = 1;

    while ((int)(x * x) != s) {
        x = 0.5 * (x + s / x);
    }

    return x;
}