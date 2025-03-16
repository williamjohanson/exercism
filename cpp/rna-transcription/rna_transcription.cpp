#include "rna_transcription.h"
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

namespace rna_transcription {

    char to_rna(char dna)
    {
        switch (dna)
        {
            case 'A':
            {
                return 'U';
            }
            case 'T':
            {
                return 'A';
            }
            case 'G':
            {
                return 'C';
            }
            case 'C':
            {
                return 'G';
            }
            default:
            {
                throw std::domain_error("Not a valid base");
            }
        }
    }

    string to_rna(string dna)
    {
        transform(dna.begin(), dna.end(), dna.begin(),
                 [](char c) { return to_rna(c); });
        return dna;
    }

}  // namespace rna_transcription
