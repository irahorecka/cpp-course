#include <iostream>
using namespace std;

int main() {
    int n1;
    int n2;

    // here, if you input two int with a space in between, the 
    // second cin will not prompt, but rather be filled with 
    // the second value of the first input
    cout << "Input an integer: ";
    cin >> n1;

    cout << "Input a second integer: ";
    cin >> n2;

    cout << "You input: " << n1 << " and " << n2 << endl;
}