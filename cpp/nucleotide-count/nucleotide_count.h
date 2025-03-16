#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>

using namespace std;

namespace nucleotide_count {

    class counter
    {
        int a_count = 0;
        int c_count = 0;
        int g_count = 0;
        int t_count = 0;
        string dna_string;
        public:
        counter(string dna)
        {
            dna_string = dna;
        }
        const map<char, int> nucleotide_counts();
    };

}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H