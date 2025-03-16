#include "leap.h"

namespace leap {

bool is_leap_year(int year)
{
    int four = 4;
    int hundred = 100;
    int four_hundred = 400;
    
    if (year % four == 0) {
        if ((year % hundred == 0) && (year % four_hundred != 0)){
            return 0;
        }
        else{
            return 1;
        }
    } else {
        return 0;
    }
}

}  // namespace leap
