#include <iostream>

using namespace std;


int main() {
    // assignment operator is a single equal sign (=)
    // cpp is statically typed, the value of rhs val must be compatible with lhs
    // lhs must be assignable, i.e. the lhs cannot be declared as a const -- i.e. read-only variables
    // e.g. 10 is a literal value (lvalue)

    int num1 {10};  // this is initialization
    int num2 {20};

    // an example of an assignment
    num1 = 100;
    // also legal
    num1 = num2;
    // chaining is also legal
    num1 = num2 = 1000;
    // this will throw a compile error
    // num1 = "Ira";  // an incompatible type

    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;
 
    return 0;
}