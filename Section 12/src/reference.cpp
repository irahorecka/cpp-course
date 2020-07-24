#include <iostream>
#include <vector>
#include <string>

using namespace std;

// a reference is an alias for a var
// must me initialized to a variable when you declare them, not null
// can't change one initialized
// reference is like a constant pointer that is auto-dereferenced when you finish
int main() {
    // I believe references are prefixed with & for the dtype
    vector<string> stooges{"Ira", "Kevin", "Gene"};

    // pass in a copy
    for (auto str: stooges) 
        str = "test";  // str is a copy
    for (auto str: stooges)
        cout << str << endl;

    // pass in a reference
    for (auto &str: stooges)  // notice the &  don't add the const if you want to change it
        // &str is a reference to each vector element
        str = "test";  // we change the vector elements
    for (auto str: stooges)
        cout << str << endl;

    for (auto const &str: stooges)  // note, the const qual will throw an error below
        // str = "test";  // ERROR
        ;

    // USE REFERENCE VAR WHENEVER POSSIBLE TO MAKE CODE MORE EFFICIENT

    // -----------------------------------------------------
    int num{100};
    int &ref{num};  // reference

    cout << num << endl;  // 100
    cout << ref << endl;  // 100

    // now we change num, which will also change ref
    num = 200;

    cout << num << endl;  // 200
    cout << ref << endl;  // 200



    return 0;
}
