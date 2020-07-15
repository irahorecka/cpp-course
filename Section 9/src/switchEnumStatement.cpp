#include <iostream>

using namespace std;


int main() {

    // Also, enumeration types are acceptable in the switch statements
    // For some reason, this is not executed
    enum Color {
        red, green, blue
    };
    Color screenColor {green}; 

    // note, without all types expressed in a switch statement 
    // nor a default, a warning will be thrown. Must handle all
    // for enum type

    switch (screenColor) {
        case red: cout << "red"; break;
        case green: cout << "green"; break;
        case blue: cout << "blue"; break;
        default: cout << "should never execute";
    }

    return 0;
}