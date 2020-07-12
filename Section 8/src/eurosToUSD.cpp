#include <iostream>

using namespace std;

// convert euros to usd
int main() {

    const double usdPerEuro {1.19};

    cout << "Welcome to eur to usd converter" << endl;
    cout << "Enter the value in euros: ";

    double euros {0.0};
    double dollars {0.0};

    cin >> euros;
    dollars = euros * usdPerEuro;

    cout << euros << " is equivalent to " << dollars << " dollars." << endl;

    return 0;
}