#include <iostream>
#include <vector>
#include <string>

using namespace std;

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2);
void print(const int *const array, size_t size);


// write apply_all func and print func
int main() {
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};

    int *pnt_array1{array1};
    int *pnt_array2{array2};
    int *pnt_array_sum{nullptr};

    cout << "Array 1: " << endl;
    print(array1, array1_size);
 
    cout << "Array 2: " << endl;
    print(array2, array2_size);

    cout << "Array total: " << endl;
    pnt_array_sum = apply_all(pnt_array1, array1_size, pnt_array2, array2_size);
    print(pnt_array_sum, 15);

    delete [] pnt_array_sum;

    return 0;
}


int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2) {
    int *new_array{nullptr};
    new_array = new int[size1 * size2];

    size_t indx{0};
    for (size_t i{0}; i < size1; i++)
        for (size_t j{0}; j < size2; j++)
            *(new_array + indx++) = arr1[i] * arr2[j];    

    return new_array;            
}


void print(const int *const array, size_t size) {
    for (size_t i{0}; i < size; i++)
        cout << array[i] << endl;  // using pointer subscript notation
        // same as *(array + i)
}
