#include "rotational_cipher.h"
#include <stdlib.h>
#include <string.h>

#define ALPHABET_LENGTH 26

char *rotate(const char *text, int shift_key) {
    size_t length = strlen(text);
    char * result = malloc(length * sizeof(char));

    shift_key = shift_key % ALPHABET_LENGTH;

    for (size_t i = 0; i < length; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            result[i] = text[i] + shift_key;
            continue;
        }
        if (text[i] >= 'A' && text[i] <= 'Z') {

        }
        result[i] = text[i];
    }

    return result;
}