#include <iostream>
#include <vector>

using namespace std;


int main() {
    // ex - using array syntax - no bounds checking
    vector <int> vectorNumbers {100, 348, 28, 59};
    cout << vectorNumbers[1] << endl;  // return 348

    // ex - using vector syntax - use the at method
    cout << vectorNumbers.at(1) << endl;
    // you can also assign vals using this method
    vectorNumbers.at(0) = 400;

    // ex - use push_back method to add element to vector (i.e. append) - must be of same type
    // you can't do this with an array
    vectorNumbers.push_back(40);
    cout << vectorNumbers.at(4) << endl;  // returns 40

    // going out of bounds with a vector
    // cpp will throw an exception
    // vectorNumbers.at(5) = 99;  // will throw an exception

    // use the method .size() in the vector method class to find the length of the vector
    cout << vectorNumbers.size() << endl;

    return 0;
}