#include "space_age.h"

float get_earth_years(int64_t seconds) {
    return seconds / EARTH_SECONDS_PER_YEAR;
}

float age(planet_t planet, int64_t seconds) {
    float earth_years = get_earth_years(seconds);
    switch (planet) {
        case MERCURY:
            return earth_years / 0.2408467;
        case VENUS:
            return earth_years / 0.61519726;
        case EARTH:
            return earth_years;
        case MARS:
            return earth_years / 1.8808158;
        case JUPITER:
            return earth_years / 11.862615;
        case SATURN:
            return earth_years / 29.447498;
        case URANUS:
            return earth_years / 84.016846;
        case NEPTUNE:
            return earth_years / 164.79132;
    };

    return INVALID;
}
