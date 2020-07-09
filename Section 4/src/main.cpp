#include <iostream>

// simple program to take a number and print number to console.
int main() {
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing, that is also my favorite number, too. " << favorite_number << std::endl;  

    return 0;
}