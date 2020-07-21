#include <iostream>
#include <vector>
#include <string>

using namespace std;

// sometimes we want to change the actual parameter from the function body that has type other than array
// to do this, we need the location of the address of the actual parameter
// formal param now an alias for the actual param

void scale_number(int &num);  // pass in address of the actual int parameter
void swap(int &a, int &b);
void print(const vector<int> &v);  // remove const to change vector in function scope

int main() {
    // using the scale_number example
    int num{1000};
    cout << num << endl;
    scale_number(num);
    cout << num << endl;  // num == 100

    // using the swap example
    int x{10}, y{20};
    cout << "x is ; " << x << " and y is: " << y << endl;
    swap(x, y);
    cout << "x is ; " << x << " and y is: " << y << endl;  // actual parameters swapped due to pass by ref (swap)

    // using the print func
    vector<int> int_vector {1, 2, 3, 4, 5};
    print(int_vector);  // pass by ref, less memory intensive since copy will not be made

    return 0;
}

void scale_number(int &num) {
    if (num > 100)
        num = 100;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void print(const vector<int> &v) {
    for (auto c: v)
        cout << c;
    cout << endl;
}   