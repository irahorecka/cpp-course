#include <iostream>
#include <vector>

using namespace std;

// using continue and break in loops
int main() {
    vector<int> values {1,2,-1,3,-1,-99,7,8,9,10};
    for (auto val: values) {
        if (val == -99)
            break;  // exit from application
        else if (val == -1)
            continue;  // jump to top of loop
        else
            cout << val << endl;  // 1,2,3
    }


    return 0;
}