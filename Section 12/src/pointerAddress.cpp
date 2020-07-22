#include <iostream>
#include <vector>
#include <string>

using namespace std;

// variables are stored in unique addresses
// they are a unary operator and evaluates to the address of its operand
// POINTERS HOLD ADDRESSES
int main() {
    // e.g.
    int num{10};
    cout << "Value of num is: " << num << endl;
    cout << "sizeof of num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;  // returns memory address

    cout << endl;
    // e.g. pointers and addresses
    int *p;
    cout << "Value of p is: " << p << endl;  // notice this is garbage value
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof p << endl;  // 2018 macbook pro = 8
    p = nullptr;
    cout << "Value of p is: " << p << endl;  // now a null pointer 0x0

    cout << endl;
    // all pointers will hold value that can (in my computer) be represented in 8 bytes
    int *int_ptr {nullptr};
    double *double_ptr {nullptr};
    char *char_ptr {nullptr};
    string *string_ptr {nullptr};

    cout << "size of int_ptr is: " << sizeof int_ptr << endl;  // all 8
    cout << "size of double_ptr is: " << sizeof double_ptr << endl;
    cout << "size of char_ptr is: " << sizeof char_ptr << endl;
    cout << "size of string_ptr is: " << sizeof string_ptr << endl;

    // typed pointers: cpp will make sure that the address stored in a pointer variable is of the correct type
    // e.g.
    int score{10};
    int score2{23};
    double high_temp{100.6};

    int *score_ptr{nullptr};
    score_ptr = &score;  // this is legal
    score_ptr = &score2;  // this is also legal - holds memory address of score2
    // score_ptr = &high_temp;  // compiler error -- must be of same type

    cout << "Value of score2 is: " << score2 << endl;
    cout << "Address of score2 is: " << &score2 << endl;  
    cout << "Value of score_ptr is: " << score_ptr << endl;  // address of score2


    return 0;
}
