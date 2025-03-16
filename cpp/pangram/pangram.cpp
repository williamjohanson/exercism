#include "pangram.h"

// C++ Program to check whether
// a string pangram or not using STL
  
#include <bits/stdc++.h>
using namespace std;

namespace pangram
{
    // Function to return given string
    // str is pangrams yes or no
    bool is_pangram(string s)
    {
        // Convert each letter into
        // uppercase to avoid counting
        // of both uppercase and
        // lowercase as different letters
        transform(s.begin(),
                s.end(),
                s.begin(),
                ::toupper);

        // Sort the string
        sort(s.begin(), s.end());
 
        char current_letter = 'A';
        // Count distinct alphabets
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] < 65)
            {
                continue;
            }
            if (s[i] == current_letter && current_letter < 90)
            {
                current_letter++;
            }
            else if (s[i] == (current_letter - 1))
            {
                continue;
            }
            else if (s[i] == current_letter && current_letter == 90)
            {
                return true;
            }
            else
            {
                break;
            }
        }

        return false;
    }
}