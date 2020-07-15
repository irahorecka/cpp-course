#include <iostream>

using namespace std;

// ? : -- are the conditional operator
// ternary operator - operates on three operands
// (cond_expr) ? expr1 : expr2
// cond_expr true, expr1, else expr2
// good for inline use
// DON'T NEST TERNARY OPERATORS
int main() {
    int a {4};
    int b {0};

    cout << (b != 0 ? (a/b) : 0) << endl;  // ternary operator that checks for division by zero

    // let's compare with the std if/else statement
    int num {};
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even" << endl;
    } else {
        cout << num << " is odd" << endl;
    }

    // ternary operator approach
    cout << num << " is " << (num % 2 == 0 ? "even" : "odd") << endl;

    return 0;
}