#include "triangle.h"

#include <iostream>
#include <stdexcept>

using namespace std;
using std::domain_error;

namespace triangle {

    bool verify_triangle(double a, double b, double c) {
    
        if ((a <= 0) || (b <= 0) || (c <= 0)) {
            cout << "A";
            throw domain_error(" ");
        } 

        else {
            if (a > (b + c)) {
                cout << "B";
                throw domain_error(" ");
            } else if (b > (a + c)) {
                cout << "C";
                throw domain_error(" ");
            } else if (c > (a + b)) {
                cout << "D";
                throw domain_error(" ");
            } else {
                return 0;
            }
        }
    }

    bool _equilateral_ (double a, double b, double c){
        if ((a == b) && (b == c)) {
            return 1;
        } else {
            return 0;
        }
    }

    bool _isosceles_ (double a, double b, double c){
        if (a == b) {
            cout << a << " " << b << " " << c;
            return 1;
        } else if (b == c) {
            cout << a << " " << b << " " << c;
            return 1;
        } else if (a == c) {
            cout << a << " " << b << " " << c;
            return 1;
        } else {
            return 0;
        }
    }

    flavor kind(double a, double b, double c) {

        verify_triangle(a, b, c);

        if (_equilateral_(a, b, c)) {
            return flavor::equilateral;
        } else if (_isosceles_(a, b, c)) {
            return flavor::isosceles;
        } else {
            return flavor::scalene;
        } 

    }

}  // namespace triangle
