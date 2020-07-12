#include <iostream>

using namespace std;


// >, >=, <, <=, <=> (CPP20)
int main() {
    // let's take a look at common relational operators
    cout << boolalpha;
    int num1 {}, num2{};
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    return 0;
}