#include <iostream>

using namespace std;

// Convert change in cents to least amount of change in US currency
// i.e. 501 cents should result in 5 dollars and 1 penny
int main() {
    cout << "Input some money in cents: ";
    int cents {};
    cin >> cents;

    // values in cents
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};

    int returnDollar {}, returnQuarter {}, returnDime {}, returnNickel {}, returnPenny{};  // in-line declaration all to 0

    returnDollar = cents / dollar;
    cents = cents % dollar;
    returnQuarter = cents / quarter;
    cents = cents % quarter;
    returnDime = cents / dime;
    cents = cents % dime;
    returnNickel = cents / nickel;
    cents = cents % nickel;
    returnPenny = cents / penny;

    // cout << cents;
    cout << "Dollars: " << returnDollar << endl;
    cout << "Quarters: " << returnQuarter << endl;
    cout << "Dimes: " << returnDime << endl;
    cout << "Nickels: " << returnNickel << endl;
    cout << "Pennies: " << returnPenny << endl;

    return 0;
}