#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE,
    TOTAL_COLORS,
} resistor_band_t;

resistor_band_t color_code(resistor_band_t color);
resistor_band_t * colors(void);

#endif
