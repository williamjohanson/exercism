#ifndef SPACE_AGE_H
#define SPACE_AGE_H

#include <stdint.h>

#define INVALID -1
#define EARTH_SECONDS_PER_YEAR 31557600

typedef enum planet {
   MERCURY,
   VENUS,
   EARTH,
   MARS,
   JUPITER,
   SATURN,
   URANUS,
   NEPTUNE,
} planet_t;

float get_earth_years(int64_t seconds);
float age(planet_t planet, int64_t seconds);

#endif
