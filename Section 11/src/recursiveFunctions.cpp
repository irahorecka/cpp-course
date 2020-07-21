#include <iostream>
#include <vector>
#include <string>

using namespace std;

// recursive functions are functions that call itself
// solves; base case, divide the rest of problems into subproblems
// factorial, fibonacci, fractals
// there can also be binary search or search trees

// example of recursion factorial
unsigned long long factorial(unsigned long long n);
unsigned long long fibonacci(unsigned long long n);

// if recursion does not eventually stop, you will have an infinite recursion
// can be resource intensive
// base cases terminate recursion
// only use when it makes sense
// anything that can be done recursively can be done iteratively
int main() {
    // factorial
    cout << factorial(8) << endl;  // 40320
    // fibonacci
    cout << fibonacci(30) << endl;  // 832040

    return 0;
}

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;  // base case - how to exit
    return n * factorial(n - 1);  // recursive case
}

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}