#include <iostream>

using namespace std;


int main() {
    int num {};
    cout << "Pick a number, any number: ";
    cin >> num;

    if (num >= 100)
        cout << "Das hot" << endl;
    else if (num <= 0)
        cout << "Das cold" << endl;
    else
        cout << "Just right baby" << endl;

    return 0;
}