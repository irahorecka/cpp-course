#include <iostream>
#include <vector>
#include <string>

using namespace std;

// how to pass arrays to cpp funcs
// array elements are NOT copied, rather the address in memory -- functions will modify these arrays
// therefore it does not know the size of the array -- we need to pass a size parameter and use a for loop to iterate
// to not modify the array, we must pass a const keyword in the parameter of the func

void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size) {
    // must know size of array to indicate stop address.
    for (size_t i{0}; i<size; i++) 
       cout << arr[i] << " "; 
    cout << endl;
}

void set_array(int arr[], size_t size, int value) {  // note, if you put const int arr[] and try to make a change in the body, an error will be raised
    for (size_t i{0}; i<size; i++) 
    // address of array passed in, therefore change is directly made to the array
       arr[i] = value;
}

int main() {
    int my_scores[] {1, 2, 3, 4, 5};
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);  // changes array val globally
    print_array(my_scores, 5);

    return 0;
}
