#include "pangram.h"
#include <stddef.h>
#include <ctype.h>
#include <string.h>

/*
Your task is to figure out if a sentence is a pangram.

A pangram is a sentence using every letter of the alphabet at least once.
It is case insensitive, so it doesn't matter if a letter is lower-case (e.g. `k`) or upper-case (e.g. `K`).

For this exercise, a sentence is a pangram if it contains each of the 26 letters in the English alphabet.
*/

#define ALPHABET_LENGTH 26
#define ASCII 97

bool is_pangram(const char *sentence) {
    if (sentence == NULL) {return false;}
    int sentence_length = strlen(sentence);
    for (int i = ASCII; i < ASCII + ALPHABET_LENGTH; i++) {
        int j;
        for (j = 0; j < sentence_length; j++) {
            int character = (int)tolower(sentence[j]);
            if (character == i) {
                break;
            }
        }
        if (j == sentence_length) {
            return false;
        }
    }
    return true;
}