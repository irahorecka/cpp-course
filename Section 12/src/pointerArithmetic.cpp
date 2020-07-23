#include <iostream>
#include <vector>
#include <string>

using namespace std;

// pointers can be used in assignment, arithmetic, and comparison expressions
// pointer arithmetic only makes sense with raw arrays
// you can increment a pointer to the next array element (same with decrement)
// int_prt++ or int_ptr--
// simple arithmetic is also allowed:
// int_ptr += n; or int_ptr = int_ptr + n;  // n * sizeof(type)
// int_ptr -= n; or int_ptr = int_ptr - n;  // n * sizeof(type)
// comparison operator is also allowed (==), they compare if address is same
// if you want to compare val, just deref then compare
int main() {
    int scores[]{100, 93, 382, 2};
    int *score_ptr{scores};  // i believe this only works with arrays, you can't get this with simple ints

    while (*score_ptr != 2) {  // dereferencing pointer reference to check val
        cout << *score_ptr << endl;
        score_ptr++;  // incrementing by pointer
    }  // a sentinel value is the temrinator

    // another  method of similar looping

    int *score_ptr2{scores};

    while (*score_ptr2 != 2) {
        cout << *score_ptr2++ << endl;  // inline incrementing, i.e. dereference then increment
    }

    string s1{"Ira"};
    string s2{"Ira"};
    string s3{"John"};

    string *p1{&s1};  // point to an address
    string *p2{&s2};
    string *p3{&s3};
    string *p4{&s1};

    cout << (p1 == p2) << endl;  // false
    cout << (p1 == p3) << endl;  // false
    cout << (p2 == p3) << endl;  // false
    cout << (p1 == p4) << endl;  // true -- points to the same address
    cout << endl;

    // notice this is different if you dereference it, this time you compare values
    cout << (*p1 == *p2) << endl;  // true -- same value
    cout << (*p1 == *p3) << endl;  // false
    cout << (*p2 == *p3) << endl;  // false
    cout << (*p1 == *p4) << endl;  // true
    cout << endl;

    // subtracting pointers by referencing different locations in a char array (c-style string)
    // note, characters are one byte
    char name[]{"Horecka"};

    char *c1_ptr{nullptr};
    char *c2_ptr{nullptr};

    c1_ptr = &name[0];
    c2_ptr = &name[4];

    cout << "Character " << *c1_ptr  << " is " << (c2_ptr - c1_ptr) << " away from " << *c2_ptr << endl; 

    

    return 0;
}
