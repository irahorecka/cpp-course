#include <iostream>

int main() {
    int favoriteNumber;

    std::cout << "What is your favorite number from 1 to 100: ";
    std::cin >> favoriteNumber;
    std::cout << "Amazing!! That's my favorite number, too!" << std::endl;
    std::cout << "No really, " << favoriteNumber << " is my favorite number!";
}