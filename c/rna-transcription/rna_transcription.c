#include "rna_transcription.h"

char get_complement(char value) {
    size_t num_pairs = sizeof(pairs) / sizeof(pair_t);
    for (size_t i = 0; i < num_pairs; i++) {
        if (pairs[i].value == value) {
            return pairs[i].complement;
        }
    }
    return ' ';
}

char *to_rna(const char *dna) {
    size_t length = strlen(dna);
    char * result = malloc(length * sizeof(char));

    for (size_t i = 0; i < length; i++) {
        result[i] = get_complement(dna[i]);
    }

    return result;
}