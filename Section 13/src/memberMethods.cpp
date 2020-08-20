#include <iostream>
#include <vector>
#include <string>

using namespace std;


// how to make member methods in classes
// implemented in class dec
// also implemented outside class dec - use Class_name::method_name
// you can use .h for class declaration and .cpp for class implementation

// implementing methods inside class dec
// class Account {
// private:
//     double balance;

// public:
//     // public methods have direct access to private members
//     void set_balance(double bal) {
//         balance = bal;
//     }
//     double get_balance() {
//         return balance;
//     }
// };

// implementing methods outside class dec
class Account {
private:
    double balance;

public:
    // public methods have direct access to private members
    void set_balance(double bal);
    double get_balance();
};

void Account::set_balance(double bal) {
    balance = bal;
}
double Account::get_balance() {
    return balance;
}



int main() {


    return 0;
}
