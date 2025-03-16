#include "collatz_conjecture.h"

namespace collatz_conjecture {

    int steps(int n)
    {

        if (n <= 0)
        {
            throw std::domain_error("");
        }

        int value = n;
        int i;

        for (i = 0; value != 1; i++)
        {
            if (value % 2 == 0) // even
            {
                value = value / 2;
            }
            else
            {
                value = 3 * value + 1;
            }
        }

        return i;
    }

}  // namespace collatz_conjecture
