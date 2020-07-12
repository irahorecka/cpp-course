#include <iostream>

using namespace std;


int main() {
    // common +, -, /, *
    // % only work with int -- looks for remainder val

    int num1 {200};
    int num2 {100};

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result {0};

    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    // note, these are integer divisions, all decimals are omitted.
    // use dtype doubles if you want to keep the decimal
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    num1 = 10;
    num2 = 3;
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    // division with doubles -- results in 0.5
    cout << 5.0 / 10.0 << endl;

    return 0;
}