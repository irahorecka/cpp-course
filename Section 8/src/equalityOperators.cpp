#include <iostream>

using namespace std;

// assessing the equality operator
// ==, !=
// evaluates to boolean
int main() {

    bool result {false};
    result = (100 == 50 + 50);  // result to 1
    cout << result << endl;

    // to set bool outputs to true or false, use std::boolalpha
    cout << boolalpha;
    cout << result << endl;  // true

    // cancel boolalpha with std::noboolalpha
    cout << noboolalpha;
    cout << result << endl;  // 1

    // note, this could be done with strings, char, etc.
    cout << ('a' == 'A') << endl;
    cout << ("Hello" == "Hello") << endl;

    // computers store float approx, sometimes, non-equal values are evaluated to equal
    // we have to use specialized libraries to help us out with this
    cout << (12.0 == 11.9999999999999999999999) << endl;  // evaluates to true

    // mix mode expressions, promote int 10 to double 10.0 then compare
    cout << (10 == 10.0) << endl;  // evaluates to true

    return 0;
}