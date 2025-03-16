#if !defined(HAMMING_H)
#define HAMMING_H

#include <string>
#include <stdexcept>
#include <cstring>

namespace hamming {
    int compute(const std::string& str_a, const std::string& str_b);

}  // namespace hamming

#endif // HAMMING_H