#include <iostream>

using namespace std;

// make a carpet cleaning service prompt and calculator
// using literal constants, etc.
int main() {

    cout << "Hello, welcome to Ira's carpet cleaning service." << endl;
    cout << "\nHow many rooms would you like cleaned?: ";

    int numberOfRooms {0};
    cin >> numberOfRooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << numberOfRooms << endl;

    const double pricePerRoom {30.00};
    const double salesTax {0.06};
    const int daysValid {30};
    cout << "Price per room: $" << pricePerRoom << endl;
    cout << "Total cost: $" << pricePerRoom * numberOfRooms << endl;
    cout << "Total cost with tax: $" << (pricePerRoom * numberOfRooms) * salesTax + pricePerRoom * numberOfRooms << endl;
    cout << "This deal is valid for " << daysValid << " days." << endl;
    
    cout << endl;
    return 0;
}