#include "nucleotide_count.h"
#include <iostream>
#include <string>
#include <string_view>
#include <format>

namespace nucleotide_count {

    const map<char, int> counter::nucleotide_counts()
    {
        format("{'A', {}}, {'C', {}}, {'G', {}}, {'T', {}}", counter::a_count, counter::c_count, counter::g_count, counter::t_count);
    }

}  // namespace nucleotide_count
