#include <iostream>
#include <vector>

using namespace std;


int main() {
    // vectors are nice, they are dynamic arrays - must include in preprocessor directive
    // still have to have the same type in the vector - stored contiguously in memory
    // arrays, you don't really know the size and this must
    // be declared in the beginning - making it very unpredictable
    // and unreliable for prospective use.

    // vectors also provide bounds checking
    // can sort, reverse, find, and more -- kind of like a python list

    vector <int> testScores (10);  // have 10 ints -- constructor instructions -- set to 0

    // initializing -- this will work with all kinds of dtypes
    vector <int> numbers {100, 328, 2984, 28};

    // initialize 365 doubles, all with val 83.5
    vector <double> highTemperatures (365, 83.5);


    return 0;
}