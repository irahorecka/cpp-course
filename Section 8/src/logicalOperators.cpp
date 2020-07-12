#include <iostream>

using namespace std;

// logical operators: ! (not), && (and), || (or)
// evaluate to a boolean value
int main() {
    // ! is a unary operator
    bool a {true};
    cout << boolalpha;  // must use cout for setting console properties
    cout << a << endl;
    cout << !a << endl;

    // && - only true when both operands are true (binary operator)
    bool b {false};
    cout << (a && b) << endl;  // false

    // || - only false if both expressions are false
    cout << (a || b) << endl;

    // ! has precedence over && which has precedence over ||
    // cpp will stop evaluating a logical expression as soon as a result is known
    // this is short circuit evaluation
    // expr1 && expr2 && expr3  -- evaluation will stop as soon as it knows the result -- stop if expr1 is false
    cout << ((5 > 3) && (4 < 5)) << endl;  // true

    // expr1 || expr2 || expr3  -- evaluate to true and stop if expr1 is true
    cout << ((5 < 3) || (4 < 5)) << endl;  // true, the right eval is true

    // take a look at operators precedance chart for cpp to evaluate operators

    return 0;
}