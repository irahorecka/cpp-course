#include <iostream>
#include <vector>
#include <string>

using namespace std;

// functions can return pointers
// never return pointers to a local variable  --  variable is destroyed and the new memory is unknown
int *largest_int(int *num1, int *num2) {
    if (*num1 > *num2)
        return num1;
    return num2;
}

int *create_array(size_t size, int init_value=0) {
    int *new_storage{nullptr};
    new_storage = new int[size];  // create array with size int*size -- dynamic memory allocation
    // perhaps the new keyword allows you to return this pointer back to the caller. remember, new is paired with delete
    // note, new storage stores the first integer's address
    for (size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display_array(const int *const array, size_t size) {
    for (size_t i{0}; i < size; i++)
        cout << array[i] << endl;
}


int main() {
    // must state that we return a pointer in the function definition
    int num1{10};
    int num2{20};

    int *point_num1{&num1};
    int *point_num2{&num2};
    int *large_num{nullptr};

    large_num = {largest_int(point_num1, point_num2)};
    cout << *large_num << endl;  // dereference the pointer that stores the new pointer (large_num)
    cout << endl;

    // ----------------------------------------------
    // run an example where we create an array

    int *my_array{nullptr};
    size_t size{5};
    int init_value{3};

    my_array = create_array(size, init_value);
    display_array(my_array, size);

    delete [] my_array;

    return 0;
}
