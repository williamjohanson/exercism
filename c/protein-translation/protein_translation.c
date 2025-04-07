#include "protein_translation.h"
#include <stdio.h>
#include <string.h>

proteins_t proteins(const char *const rna) {
    proteins_t protein = {
        .valid = true,
        .count = 0,
        .proteins = {0}
     };
     size_t rna_length = strlen(rna);

     for (size_t i = 0; i < rna_length; i += 3) {
        char c[3] = {0};
        c[0] = rna[i];
        c[1] = rna[i + 1];
        c[2] = rna[i + 2];

        if (strcmp(c, "AUG") == 0) {
            protein.proteins[protein.count++] = Methionine;
        }
        else if (strcmp(c, "UUU") == 0) {
            protein.proteins[protein.count++] = Phenylalanine;
        }
        else if (strcmp(c, "UUC") == 0) {
            protein.proteins[protein.count++] = Phenylalanine;
        }
        else if (strcmp(c, "UUA") == 0) {
            protein.proteins[protein.count++] = Leucine;
        }
        else if (strcmp(c, "UUG") == 0) {
            protein.proteins[protein.count++] = Leucine;
        }
        else if (strcmp(c, "UCU") == 0) {
            protein.proteins[protein.count++] = Serine;
        }
        else if (strcmp(c, "UCC") == 0) {
            protein.proteins[protein.count++] = Serine;
        }
        else if (strcmp(c, "UCA") == 0) {
            protein.proteins[protein.count++] = Serine;
        }
        else if (strcmp(c, "UCG") == 0) {
            protein.proteins[protein.count++] = Serine;
        }
        else if (strcmp(c, "UAU") == 0) {
            protein.proteins[protein.count++] = Tyrosine;
        }
        else if (strcmp(c, "UAC") == 0) {
            protein.proteins[protein.count++] = Tyrosine;
        }
        else if (strcmp(c, "UGU") == 0) {
            protein.proteins[protein.count++] = Cysteine;
        }
        else if (strcmp(c, "UGC") == 0) {
            protein.proteins[protein.count++] = Cysteine;
        }
        else if (strcmp(c, "UGG") == 0) {
            protein.proteins[protein.count++] = Tryptophan;
        }
        else if (strcmp(c, "UAA") == 0) {
            break;
        }
        else if (strcmp(c, "UAG") == 0) {
            break;
        }
        else if (strcmp(c, "UGA") == 0) {
            break;
        }
        else {
            protein.valid = false;
            protein.count = 0;
            memset(protein.proteins, 0, sizeof(protein.proteins));
            break;
        }
     }
     return protein;
}