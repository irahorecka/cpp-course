#include <iostream>
#include <vector>
#include <string>
#include "Account.h"

using namespace std;


int main() {
    Account ira;
    ira.set_balance(100.00);
    double bal = ira.get_balance();

    cout << bal << endl;

    return 0;
}
