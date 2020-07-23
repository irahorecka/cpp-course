#include <iostream>
#include <vector>
#include <string>

using namespace std;

// this is useful in passing pointers to functions
// data pointed to by the pointer is constant (can't be changec)
int main() {
    int high_score{100};
    int low_score{50};
    const int *score_ptr{&high_score};

    // *score_ptr = 86;  // this will result in an error - can't change a const (read-only value)
    score_ptr = &low_score;  // you can change the pointer address

    // int *test{high_score};  // reminder, this will throw an error, can't have a pointer point to data value

    // another example, this case, the address cannot be changed, but the value it points to can
    int *const score_ptr2{&high_score};

    *score_ptr2 = 86;  // no error, data in memory location can be changed
    // score_ptr2 = &low_score;  // error will throw  --  cannot change a const value

    // to make both attributes constant...
    const int *const score_ptr3{&high_score};
    // *score_ptr3 = 86;  // error
    // score_ptr3 = &low_score;  // error


    return 0;
}
