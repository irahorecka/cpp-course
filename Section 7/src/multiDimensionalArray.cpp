#include <iostream>

using namespace std;


int main() {
    // a 3 x 4 array = 12 integers
    // initializing a multi-dimensional array
    int movieRatings [3][4] {
        {0, 4, 3, 2},
        {1, 3, 4, 2},
        {4, 9, 3, 5}
    };

    // use two [] to access array elements in a multi-dimensional array
    cout << movieRatings[1][2] << endl;  // yields 4

    return 0;
}