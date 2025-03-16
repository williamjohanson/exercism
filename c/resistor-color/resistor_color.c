#include "resistor_color.h"

resistor_band_t color_code(resistor_band_t color) {
    return (resistor_band_t) color;
}

resistor_band_t resistor_colors[TOTAL_COLORS] = {
    BLACK, BROWN, RED, ORANGE, YELLOW,
    GREEN, BLUE, VIOLET, GREY, WHITE
};

resistor_band_t * colors(void) {
    return resistor_colors;
}