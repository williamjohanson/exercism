#include "queen_attack.h"
#include "stdbool.h"
#include "stdlib.h"

static inline bool is_valid(position_t queen) {
    static const uint8_t MIN_POS = 0;
    static const uint8_t MAX_POS = 7;
    return (
        queen.row >= MIN_POS &&
        queen.row <= MAX_POS &&
        queen.column >= MIN_POS &&
        queen.column <= MAX_POS
    );
}

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    if ((queen_1.row == queen_2.row) && (queen_1.column == queen_2.column)) {
        return INVALID_POSITION;
    }

    if (!is_valid(queen_1) || !is_valid(queen_2)) {
        return INVALID_POSITION;
    }
    if ((queen_1.row == queen_2.row) || (queen_1.column == queen_2.column)) {
        return CAN_ATTACK;
    }

    int x_diff = abs(queen_1.row - queen_2.row);
    int y_diff = abs(queen_1.column - queen_2.column);

    if (x_diff == y_diff) {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}