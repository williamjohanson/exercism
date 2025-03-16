#include "eliuds_eggs.h"

int egg_count(int encoding) {
    int result = 0;

    for (int i = 0; encoding > 0; i++) {
        if (encoding & 1) {
            result++;
        }
        encoding >>= 1;
    }

    return result;
}