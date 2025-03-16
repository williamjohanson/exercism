#include "darts.h"
#include "math.h"

float pythagoras (coordinate_t coordinate) {
    return sqrt(pow(coordinate.x, 2) + pow(coordinate.y, 2));
}

int score(coordinate_t coordinate) {

    float radiusFromOrigin = pythagoras(coordinate);

    if (radiusFromOrigin > OUTER_RADIUS) {
        return NO_SCORE;
    }
    if (radiusFromOrigin > MIDDLE_RADIUS) {
        return OUTER_SCORE;
    }
    if (radiusFromOrigin > INNER_RADIUS) {
        return MIDDLE_SCORE;
    }

    return INNER_SCORE;

}
