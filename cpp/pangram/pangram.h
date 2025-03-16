#if !defined(PANGRAM_H)
#define PANGRAM_H

#include <iostream>
#include <cctype>
#include <cstring>
#include <algorithm>

namespace pangram {

bool is_pangram(std::string s);

}  // namespace pangram

#endif // PANGRAM_H