#include <iostream>
#include <vector>
#include <string>

using namespace std;

// pitfalls of using pointers
int main() {
    // 1, uninitialized pointers
    // e.g.
    // this will point anywhere
    int *pointer;  // warning generated, should point to null ptr

    *pointer = 100;

    // dangling pointers
    // pointer pointing to a released memory. e.g. two pointers 
    // point to one, one is deleted.
    // another example is that you point something to memory that is invalid
    // e.g. return a pointer to a function local variable
    int num{4};

    int *pointer_num{nullptr};
    pointer_num = new int;
    *pointer_num = 55;

    int *pointer_num2{pointer_num};

    delete pointer_num;
    cout << *pointer_num2 << endl;  // wonder if this is deleted? i.e. dangling pointer

    // memory leak is forgetting to release allocated memory with delete
    // if you lose the pointer in the heap, you have no way of getting it back
    // very common memory problem

    

    return 0;
}
