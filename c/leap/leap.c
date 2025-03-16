#include "leap.h"
#include <stdio.h>

bool divisible_by(int year, int div) {
    return !(year % div);
}

bool leap_year(int year) {
    if (divisible_by(year, 100)) {
        if (divisible_by(year, 400)) {
            return true;
        }
    }
    else if (divisible_by(year, 4)){
        return true;
    }
    return false;
}
