#include <iostream>
#include <vector>
#include <string>

using namespace std;

// use pointers and dereference operators to acieve pass-by-ref
// function parameter is a pointer
// actual param can be pointer or address of variable
void double_value(int *val){
    *val *= 2;  // doubles the integer the parameter is pointing to (deref then multiply)
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(vector<int> *vec) {
    for (auto c: *vec)  // must deref
        cout  << c << endl;
    // you can also change the elements of the vector and have it reflect globally
}

void print_const(const vector<int> *const vec) {
    for (auto c: *vec)  // must deref
        cout  << c << endl;
    // (*vec).at(0) = "Testing";  // this is not allowed due to the const qualifier
    // vec = nullptr;  // this is also not allowed do to const qualifier in vec pointer
}

int main() {
    // e.g.
    int value{10};
    int *int_ptr{nullptr};

    int_ptr = &value;

    cout << "Value: " << value << endl;
    
    double_value(int_ptr);
    double_value(&value);  // also pass value address

    cout << "Value: " << value << endl;  // notice value changed to 40 (10 * 2 * 2)


    // -------------------------------------------------------
    // e.g.
    int num1{1};
    int num2{2};

    int *ptr_1{nullptr};
    int *ptr_2{nullptr};

    ptr_1 = &num1;
    ptr_2 = &num2;

    cout << "num1: " << num1 << " and num2: " << num2 << endl;
    swap(ptr_1, ptr_2);
    cout << "num1: " << num1 << " and num2: " << num2 << endl;  // notice the swap of local var without return
    // value in addresses of memory has been changed

    // passing a vector by reference
    vector<int> array{1, 2, 3, 4, 5};
    vector<int> *array_ptr{&array};

    print(array_ptr);
    // print(&array);   // this will also work

    // in a loop, *array++ usually means take value of deref, then increment the pointer

    return 0;
}
