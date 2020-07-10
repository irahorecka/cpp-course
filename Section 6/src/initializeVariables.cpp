#include <iostream>

int main() {
    int age;  // uninitialized
    int age = 21;  // C-like initialization
    int age (21);  // Constructor initialization
    int age {21};  // C++11 list initialization syntax
}