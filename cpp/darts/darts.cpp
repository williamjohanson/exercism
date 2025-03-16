#include "darts.h"
#include <cmath>

namespace darts {

    int score (float x, float y)
    {
        float pos = sqrt(pow(x, 2) + pow(y, 2));


        if (pos > 10) 
        {
            return 0;
        }
        else if (pos > 5)
        {
            return 1;
        }
        else if (pos > 1)
        {
            return 5;
        }
        else 
        {
            return 10;
        }
    }
} // namespace darts