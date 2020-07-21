#include <iostream>
#include <vector>
#include <string>

using namespace std;

// uses static or lexical scoping 
// local scope - identifiers declared in a block
// function local varaibles are only active while the function is executing
// nested blocks, inner blocks can see out, outer blocks can't see in

// global scope - identifiers declared outside of class or func
// available to any program after declaration 
// best practice - don't use global var, global const ok

// static var is a var defined locally and keeps its value throughout the program
// kind of like persistence, gets called once, keeps the value indefinitely without reassignment when called again

// e.g. global var
int num{500};

void global_example() {
    cout << "Global num is: " << num << " in global example - start" << endl;
    num *= 2;  // multiply global num by 2
    cout << "Global num is: " << num << " in global example - end" << endl;
}

void static_local_example() {
    static int num{5000};  // will never execute after first call though defined in function scope
    cout << "Local static num is: " << num << " in static local example - start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static local example - end" << endl;
}

int main() {
    int num{100}; // local to main
    int num1{1000}; // local to main

    cout << "Local num is: " << num << " in main" << endl;  // chooses the local num var

    {
        // define a local var num in the inner block -- legal
        int num{200};
        cout << "Local num is: " << num << " in inner blockmain" << endl;
        cout << "Inner block can see out (num1): " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    global_example();
    global_example();

    static_local_example();
    static_local_example();  // notice the increment
    static_local_example();
    static_local_example();

    return 0;
}
