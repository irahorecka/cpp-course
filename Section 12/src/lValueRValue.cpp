#include <iostream>
#include <vector>
#include <string>

using namespace std;

// l-value:
// values have names and are addressable; modifiable if they are not constants
int main() {
    // l-value - addressable on the left size
    int a{100};  // a is an l-value
    a = 1000;
    a = 1000 + 2;

    // r-value - non-addressable nor assignable
    // on the right hand sign of assignment expressioni
    // a literal
    int x{100};  // 100 is an r-value
    int y = x + 200;  // (x + 200) is an r-value

    x = x + y;  // r-value (x + y), l-value x

    return 0;
}
