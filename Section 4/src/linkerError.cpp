#include <iostream>
// introduce a linker error
extern int x;

int main() { 
    std::cout << "Hello, World!" << std::endl;
    // this will result in a clean compile
    // build will fail
    std::cout << x;

    return 0;
}