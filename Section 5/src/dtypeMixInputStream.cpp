#include <iostream>
using namespace std;

int main() {
    int num;
    double dub;

    // if i put in 10.5 here, i will receive back
    // int == 10, double == 0.5
    cout << "Input an integer: ";
    cin >> num;

    cout << "Input a double: ";
    cin >> dub;

    cout << "You put in the int " << num << endl;
    cout << "You put in the double " << dub << endl;
}