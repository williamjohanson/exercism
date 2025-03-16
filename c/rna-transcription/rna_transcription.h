#ifndef RNA_TRANSCRIPTION_H
#define RNA_TRANSCRIPTION_H

#include <stddef.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char value;
    char complement;
} pair_t;

static const pair_t pairs[] = {
    {.value = 'A', .complement = 'U'},
    {.value = 'T', .complement = 'A'},
    {.value = 'G', .complement = 'C'},
    {.value = 'C', .complement = 'G'}
};

char get_complement(char value);
char *to_rna(const char *dna);

#endif
