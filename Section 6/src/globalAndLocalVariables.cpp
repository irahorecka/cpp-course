#include <iostream>
using namespace std;

int age {18};  // global variable

int main() {
    int age {15};  // local variable

    cout << age << endl;  // compiler will look for local before global

    return 0;
}