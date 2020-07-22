#include <iostream>
#include <vector>
#include <string>

using namespace std;


// POINTERS AND ARRAYS BEHAVE VERY SIMILARLY TO EACH OTHER
// value of array is the first element in the array (memory address)
// value of pointer is an address
int main() {
    // e.g.
    int scores[] {100, 20 , 33};
    // array address is the first value in the array
    cout << scores << endl;
    cout << *scores << endl;
    cout << endl;

    int *score_ptr {scores};  // make pointer point to scores  --  is this pretty much making a duplicate?
    // same results as scores above
    cout << score_ptr << endl;
    cout << *score_ptr << endl;
    cout << endl;

    // classic array subscripting
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    cout << endl;

    // we can also use array subscripting on the pointer
    // does that mean we can access memory just like we can access arrays? -- look at next example
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;
    cout << endl;

    // accessing neghboring address
    cout << score_ptr << endl;
    cout << score_ptr + 1 << endl;  // increments by 4, dtype int
    cout << score_ptr + 2 << endl;
    cout << sizeof (int) << endl;  // 4
    cout << endl;

    // accessing array values by deref
    cout << *(scores) << endl;
    cout << *(scores + 1) << endl;  // deref(score_pointer + 1 of int (4 bytes))
    cout << *(scores + 2) << endl;
    cout << endl;

    // accessing pointer array values by deref
    cout << *(score_ptr) << endl;
    cout << *(score_ptr + 1) << endl;  // deref(score_pointer + 1 of int (4 bytes))
    cout << *(score_ptr + 2) << endl;
    cout << endl;

    return 0;
}
