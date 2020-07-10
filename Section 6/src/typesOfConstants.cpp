#include <iostream>

using namespace std;

int main() {
    // literal constants - the most obvious
    x = 12;  // this will actually result in a compiler error
    y = 1.56;

    // int literal constant ex: (also works with floats)
    // 12 - an int
    // 12U - an unsigned int
    // 12LL - a long long int

    // character literal constants are also known as escape codes

    // the most common way to declare a constand is to used the declared constants
    const double pi {3.14159};
    const int december {12};

    // pi = 2.5;  this will result in a compiler error

    // antiquated method to define constants (don't do this)
    // this will lead to the preprocessor to swap in the proper def before compilation
    #define pi 3.14159

    return 0;
}