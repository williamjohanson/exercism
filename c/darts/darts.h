#ifndef DARTS_H
#define DARTS_H

#define OUTER_RADIUS 10.0
#define MIDDLE_RADIUS 5.0
#define INNER_RADIUS 1.0

#define NO_SCORE 0
#define OUTER_SCORE 1
#define MIDDLE_SCORE 5
#define INNER_SCORE 10

typedef struct {
    float x;
    float y;
} coordinate_t;

float pythagoras (coordinate_t coordinate);
int score(coordinate_t coordinate);

#endif
