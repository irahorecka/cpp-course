#include <iostream>
#include <vector>
#include <string>

using namespace std;

// don't know how much memory we need when starting off
// allocate storage for a variable at runtime
// use pointers to access newly allocated heap storage
// memory allocation (dynamic) comes from the heap or freestore
int main() {
    // use the 'new' keyword to allocate storage at runtime
    // e.g.
    int *int_ptr{nullptr};
    int_ptr = new int;  // allocating memory (heap) for int dtype

    cout  << int_ptr << endl;  // memory address
    cout  << *int_ptr << endl;  // garbage data -- in our case a 0

    *int_ptr = 100;

    cout  << *int_ptr << endl;  // 100
    cout << endl;

    // allocated storage does not have a name - only get through pointer
    // if you lose the pointer, then you lost the key to get to the memory, this is a MEMORY LEAK
    // delete a pointer and free alocated storage
    delete int_ptr;

    // -------------------------------------------------------------------

    // allocating memory for an array
    int *array_ptr{nullptr};
    int size{10};

    array_ptr = new int[size];  // allocate the array on the heap with size 10
    // this is contiguous memory in heap
    // also, don't allocate array_ptr to nullptr before deleting array_ptr -- this will result in a memory leak
    delete [] array_ptr;  // this bracket must be empty



    return 0;
}
