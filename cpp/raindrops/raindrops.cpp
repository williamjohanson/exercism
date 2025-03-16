#include "raindrops.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

namespace raindrops {

    string convert (int value) {

        string return_string = "";
        bool div_flag = 1;

        if (value % 3 == 0) {
            return_string += "Pling";
            div_flag = 0;
        }

        if (value % 5 == 0) {
            return_string += "Plang";
            div_flag = 0;
        }

        if (value % 7 == 0) {
            return_string += "Plong";
            div_flag = 0;
        }        

        if (div_flag == 1) {
            return_string += to_string(value);
        }

        return return_string;
    }

}  // namespace raindrops
