#include "isogram.h"
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_LENGTH 26

bool is_isogram(const char phrase[]) {
    if (!phrase) {return false;}
    bool usedLetters[ALPHABET_LENGTH] = { false };
    size_t phraseLength = strlen(phrase);

    for (size_t i = 0; i < phraseLength; i++) {
        char c = tolower(phrase[i]); 
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (usedLetters[index]) {return false;}
            usedLetters[index] = true;
        }
    }
    return true;
}