#include "rotational_cipher.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_LENGTH 26

char *rotate(const char *text, int shift_key) {
    size_t length = strlen(text);
    char * result = malloc((length + 1) * sizeof(char));

    shift_key = shift_key % ALPHABET_LENGTH;

    for (size_t i = 0; i < length; i++) {
        char c = text[i];
        if (islower(c)) {
            result[i] = 'a' + (c - 'a' + shift_key) % ALPHABET_LENGTH;
        }
        else if (isupper(c)) {
            result[i] = 'A' + (c - 'A' + shift_key) % ALPHABET_LENGTH;
        }
        else {
            result[i] = c;
        }
    }

    result[length] = '\0';
    return result;
}