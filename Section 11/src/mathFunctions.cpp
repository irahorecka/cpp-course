#include <iostream>
#include <vector>
#include <string>
#include <cmath>  // required to use math funcs

using namespace std;


int main() {
    // working with the cmath library - examples of using functions
    // use functions without knowing how they work
    double num{};
    cout << "Enter a double: ";
    cin >> num;

    cout << "Square root of " << num << " is " << sqrt(num) << endl;
    cout << "Cubed root of " << num << " is " << cbrt(num) << endl;

    cout << "Sin of " << num << " is " << sin(num) << endl;
    cout << "Cosine of " << num << " is " << cos(num) << endl;
    cout << "Tangent of " << num << " is " << tan(num) << endl;

    cout << "Ceiling of " << num << " is " << ceil(num) << endl;
    cout << "Floor of " << num << " is " << floor(num) << endl;
    cout << "Round of " << num << " is " << round(num) << endl;

    cout << "The power of " << num << " to 2 is " << pow(num, 2) << endl;

    return 0;
}
