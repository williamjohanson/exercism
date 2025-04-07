#include "clock.h"
#include <stdbool.h>
#include <stdio.h>

#define MINUTES_PER_HOUR 60
#define HOURS_PER_DAY 24

int negative_mod(int a, int n) {
    return (a % n + n) % n;
}


clock_t clock_create(int hour, int minute) {
    clock_t result;

    int total_minutes = hour * MINUTES_PER_HOUR + minute;
    total_minutes = negative_mod(total_minutes, MINUTES_PER_HOUR * HOURS_PER_DAY);

    unsigned int result_minute = total_minutes % MINUTES_PER_HOUR;
    unsigned int result_hour = total_minutes / MINUTES_PER_HOUR;

    snprintf(result.text, sizeof(result.text), "%02d:%02d", result_hour, result_minute);

    return result;
}

clock_t clock_add(clock_t clock, int minute_add) {
    int hour, minute;
    sscanf(clock.text, "%2d:%2d", &hour, &minute);

    minute += minute_add;

    return clock_create(hour, minute);
}

clock_t clock_subtract(clock_t clock, int minute_subtract) {
    int hour, minute;
    sscanf(clock.text, "%2d:%2d", &hour, &minute);

    minute -= minute_subtract;

    return clock_create(hour, minute);
}

bool clock_is_equal(clock_t a, clock_t b) {
    int a_hours, a_minutes, b_hours, b_minutes;
    sscanf(a.text, "%2d:%2d", &a_hours, &a_minutes);
    sscanf(b.text, "%2d:%2d", &b_hours, &b_minutes);

    return (a_hours == b_hours && a_minutes == b_minutes);
}