#include "high_scores.h"


/*
Manage a game player's High Score list.

Your task is to build a high-score component of the classic Frogger game, one of the highest selling and most addictive games of all time, and a classic of the arcade era.
Your task is to write methods that return the highest score from the list, the last added score and the three highest scores.

The functions in this exercise accept an array containing one or more numbers, each representing one 'game score'.

The player's game scores can be read from

| `scores`   |
|---|
| `scores[0]` |
| `scores[1]` |
| ... |
| `scores[scores_len - 1]` |

`personal_top_three()` should write the player's top scores to

| `output`   |
|---|
| `output[0]` |
| ... |

*/

int32_t latest(const int32_t *scores, size_t scores_len) {
    return scores[scores_len - 1];
}

int32_t personal_best(const int32_t *scores, size_t scores_len) {
    int32_t max_score = 0;
    for (size_t i = 0; i < scores_len; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }
    return max_score;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output) {
    for (size_t i = 0; i < scores_len; i++) {
        int32_t score = scores[i];
        for (size_t j = 0; j < 3; j++) {
            if (score > output[j]) {
                for (size_t x = 2; x > j; x--) {
                    output[x] = output[x - 1];
                }
                output[j] = score;
                break;
            }
        }
    }

    return scores_len > 3 ? 3 : scores_len;
}