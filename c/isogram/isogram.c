#include "isogram.h"
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_LENGTH 26

bool is_isogram(const char phrase[]) {
    int8_t *usedLetters = malloc(sizeof(int8_t) * ALPHABET_LENGTH);
    size_t usedLettersLength = 0;
    size_t phraseLength = strlen(phrase);

    int currentAscii;
    for (size_t i = 0; i < phraseLength; i++) {
        currentAscii = 0;
        if (phrase[i] > 65 && phrase[i] < 90) {
            currentAscii = phrase[i] + 32;
        }
        else if (phrase[i] > 97 && phrase[i] < 122) {
            currentAscii = phrase[i];
        }

        if (currentAscii) {
            for (size_t j = 0; j < usedLettersLength; j++) {
                if (usedLetters[j] == currentAscii) {
                    return false;
                }
                usedLetters[j] = currentAscii;
                usedLettersLength++;
            }
        }
    }
    return true;
}