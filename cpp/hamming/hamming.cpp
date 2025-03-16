#include "hamming.h"

namespace hamming {

    int compute(const std::string& str_a, const std::string& str_b)
    {
        std::size_t sum = 0;

        if (str_a.size() != str_b.size())
        {
            throw std::domain_error("");
        }

        for (std::size_t i = 0; i < str_a.size(); i++)
        {
            if (str_a[i] != str_b[i])
            {
                sum += 1;
            }
        }
        return sum;
    }
}  // namespace hamming
