# include <iostream>

using namespace std;


int main() {
    const double priceLargeRoom {35.0};
    const double priceSmallRoom {25.0};
    int numberLargeRoom {0};
    int numberSmallRoom {0};
    const double salesTax {0.06};
    const int daysValid {30};

    cout << "How many small rooms?: ";
    cin >> numberSmallRoom;
    cout << "How many large rooms?: ";
    cin >> numberLargeRoom;
    cout << "Price per small room: $" << priceSmallRoom << endl;
    cout << "Price per large room: $" << priceLargeRoom << endl;

    double cost = (priceSmallRoom * numberSmallRoom) + (priceLargeRoom * numberLargeRoom);
    cout << "Cost: $" << cost << endl;
    double tax = salesTax * cost;
    cout << "Tax: $" << tax << endl;

    double totalEstimate = cost + tax;
    cout << "Total estimate: $ " << totalEstimate << endl;
    cout << "This estimate is valid for " << daysValid << " days." << endl;
}