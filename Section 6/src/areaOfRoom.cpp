#include <iostream>

using namespace std;

int main() {
    // int age;
    // will return any int (probably large) for var age
    // will find any value in the memory location and return it
    // best-practice to initialize this

    // this is okay
    // int age {21};
    // cout << age << endl;

    // calculate the area of the room in a clean format.
    cout << "Enter the width of the room: ";
    int roomWidth {0};
    cin >> roomWidth;

    cout << "Enter the length of the room: ";
    int roomLength {0};
    cin >> roomLength;

    cout << "The area of the room is: " << roomWidth * roomLength << " square feet." << endl;


    return 0;
}