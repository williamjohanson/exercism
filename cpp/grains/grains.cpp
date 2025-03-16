#include "grains.h"
#include<iostream>
#include<cmath>
using namespace std;

namespace grains {

    long long unsigned square (int value) {
        long long unsigned int previous = 1;
        long long unsigned int current = 1;

        for (int i = 1; i < value; i++) {    
            current = previous * 2;
            previous = current;
        }

        return current;
    }

    long long unsigned total() {
        long long unsigned int sum = 0;
        long long unsigned int previous = 1;
        long long unsigned int current = 1;

        for (int i = 0; i < 64; i++) {    
            sum += current;
            current = previous * 2;
            previous = current;
        }

        return sum;
    }

}  // namespace grains
