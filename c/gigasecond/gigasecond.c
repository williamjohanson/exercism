#include "gigasecond.h"
#include <stdio.h>

#define GIGASECOND 1000000000

void gigasecond(time_t input, char *output, size_t size) {

    time_t passed_time = input + GIGASECOND;

    struct tm * result_time = gmtime(&passed_time);

    strftime(output, size, "%Y-%m-%d %H:%M:%S", result_time);
}