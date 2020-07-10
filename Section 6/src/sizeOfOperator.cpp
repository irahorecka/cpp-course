// sizeof determines the size in bytes of a type or variable
// e.g. sizeof(int), sizeof(double)
// gets info from two include files, <climits> and <cfloat>

#include <iostream>

using namespace std;

int main() {

    cout << "size of information" << endl;

    cout << "char: " << sizeof(char) << "bytes" << endl;
    cout << "int: " << sizeof(int) << "bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes" << endl;
    cout << "short: " << sizeof(short) << "bytes" << endl;
    cout << "long: " << sizeof(long) << "bytes" << endl;
    cout << "long long: " << sizeof(long long) << "bytes" << endl;

    cout << "float: " << sizeof(float) << "bytes" << endl;
    cout << "double: " << sizeof(double) << "bytes" << endl;
    cout << "long double: " << sizeof(long double) << "bytes" << endl;

    // NOTE: it is totally ok to find size of variable names as well
    // this will yield similar results to the results above

    cout << "Minimum values per dtype:" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

    cout << "Maximum values per dtype:" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    



 
    return 0;
}