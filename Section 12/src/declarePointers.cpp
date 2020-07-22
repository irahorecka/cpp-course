#include <iostream>
#include <vector>
#include <string>

using namespace std;

// how to declare pointers
// variable_type *pointer_name {nullptr};
// read right to left, so int_ptr is a pointer to an int
// it's important to initialize all pointer var before use to 'point nowhere'
// otherwise, we are pointing anywhere
// other option is to point directly at a func or var
int main() {
    int *int_ptr {};
    double *double_ptr {nullptr};
    char *char_ptr {nullptr};
    string *string_ptr {nullptr};


    return 0;
}
