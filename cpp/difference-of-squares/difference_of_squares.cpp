#include "difference_of_squares.h"
#include<math.h> 

namespace difference_of_squares {

    uint32_t square_of_sum(int value)
    {
        uint32_t sum = 0;
        for (int i = 0; i <= value; i++)
        {
            sum += i;
        }
        return pow(sum, 2);
    }
    uint32_t sum_of_squares(int value)
    {
        uint32_t sum = 0;
        for (int i = 0; i <= value; i++)
        {
            sum += pow(i, 2);
        }
        return sum;
    }
    uint32_t difference(int value)
    {
        return square_of_sum(value) - sum_of_squares(value);
    }

}  // namespace difference_of_squares
