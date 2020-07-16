#include <iostream>
#include <vector>

using namespace std;

// working with nested loop, e.g. outer loop, inner loop
int main() {
    // a simple example
    for (int outer_val {1}; outer_val <= 2; ++outer_val)  // make sure to specify the dtype
        for (int inner_val {1}; inner_val <= 3; ++inner_val)
            cout << outer_val << ", " << inner_val << endl;

    // a multiplication table
    for (int outer_val {1}; outer_val <= 10; ++outer_val)  // make sure to specify the dtype
        for (int inner_val{1}; inner_val <= 10; ++inner_val)
            cout << outer_val << " * " << inner_val << " = " << outer_val * inner_val << endl;

    // filling a 2D array
    int grid[2][5] {};

    for (int row {0}; row <= 2; ++row)
        for (int col {0}; col <= 5; ++col)
            grid[row][col] = 1000;
    cout << grid[1][2] << endl;

    // looking at a vector of integers
    vector <vector<int>> doubleVectors {
        {1, 2, 3},
        {234, 234, 51, 123},
        {9324, 234, 12, 55}
    };

    for (auto vec: doubleVectors)  // of course curly braces are OK
        for (auto val: vec)
            cout << val << endl;


    return 0;
}
