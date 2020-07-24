#include <iostream>
#include <vector>
#include <string>

using namespace std;

// use pass by value when the func doesn't modify actual param
// and its small and efficient to copy, int double char bool
// vector, string, they have overhead, so pass with pointer or ref

// pointer: want to modify parameters and its expensive to copy
// pointer to const, don't want to modify parameter, but expensive to copy and you don't want to mod the pointer itself

// reference: when the func does modify actual parameter, and expensive to copy
// const ref, don't modify parameter but expensive to copy

int main() {


    return 0;
}
