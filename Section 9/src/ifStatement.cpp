#include <iostream>

using namespace std;

// if statements
// evaluate statement if true, else don't
int main() {
    // indentation of the if statement is important
    // if more than one line should be in the statement, use block statements ({})
    // block statements introduces a local scope

    int num {};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    // greater than or equal to
    if (num >= min) {
        cout << num << " is greater than or equal to " << min << endl;

        // diff is in the local scope of the if block statement - this is UNLIKE PYTHON!
        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    // less than or equal to
    if (num <= max) {
        cout << num << " is less than or equal to " << max << endl;

        // diff is in the local scope of the if block statement - this is UNLIKE PYTHON!
        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }

    // within bounds for min, max
    if (num >= min && num <= max) {
        // first two conditionals must be fulfilled for this to execute
        cout << num << " is within the range of " << min << " and " << max << endl;
    }

    if (num == min || num == max) {
        // all three statements will display if this displays
        cout << num << " is equal to one of the two ranges." << endl;
    }



    return 0;
}