#include "resistor_color_duo.h"

int color_code(resistor_band_t* resistor_bands) {
    return resistor_bands[0] * 10 + resistor_bands[1];
}