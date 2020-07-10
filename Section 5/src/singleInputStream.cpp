#include <iostream>

using namespace std;

int main() {
    // type of data must be defined prior to setting cin (must(?))
    string aString;
    cout << "Type a string: ";
    cin >> aString;
    cout << "\n" << aString << endl;

    int anInt;
    cout << "Type an integer: ";
    // will take in all ints until it hits a non-int
    cin >> anInt;
    cout << "\n" << anInt; 

    return 0;

}