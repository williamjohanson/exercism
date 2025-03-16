#include "reverse_string.h"
#include <iostream>

using namespace std;

namespace reverse_string {

string reverse_string(string phrase)
    {
        string new_string;
        int phrase_size = phrase.size();

        if (phrase_size != 0) {
            for (int i = phrase_size - 1; i >= 0; i--){
                new_string += phrase[i];
                }
        } else {
            new_string = phrase;
        }

        return new_string;
    }

}  // namespace reverse_string