#include <iostream>

using namespace std;

// increment operator: ++
// decrement operator: --
// increment or decrement its operand by 1

// prefix: ++num
// postfix: num++e
// don't overuse this operator, don't use it twice in the same statement

int main() {
    // ex 1
    int counter {10};
    int result {0};

    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    // for this case, prefix and postfix are the same
    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;

    // ex2 - pre-increment
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter;  // counter will be incremented before assignment to result
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // ex3 - post-increment
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++;  // counter will be incremented after assignment to result
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // ex4 - pre-increment and addition
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter + 10;  // counter will be incremented before assignment to result
    // result will be 11 + 10
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // ex5 - post-increment and addition
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10;  // counter will be incremented after assignment to result
    // result will be 10 + 10
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;


    return 0;
}