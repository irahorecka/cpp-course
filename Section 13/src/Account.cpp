#include <iostream>
#include <vector>
#include <string>
// the <> in include is to tell the compiler we are looking for a system header file
#include "Account.h"  // i.e. local to this project
// continuation of Account.h

using namespace std;


void Account::set_balance(double bal) {
    balance = bal;
}

double Account::get_balance() {
    return balance;
}
