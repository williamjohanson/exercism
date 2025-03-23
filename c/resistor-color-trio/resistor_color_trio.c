#include "resistor_color_trio.h"
#include <math.h>
#include <stddef.h>

resistor_value_t color_code(resistor_band_t * resistor_bands) {
    resistor_value_t result;
    result.value = (10 * resistor_bands[0] + resistor_bands[1]) * pow(10, resistor_bands[2]);
    result.unit = OHMS;

    for (size_t i = 0; result.value >= 1000; i++) {
        result.value /= 1000;
        result.unit++;
    }
    return result;
}