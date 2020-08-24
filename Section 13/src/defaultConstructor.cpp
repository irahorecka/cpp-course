#include <iostream>
#include <vector>
#include <string>

using namespace std;

// default constructor does not expect args (no args constructor)
// cpp will tkae care of this if you write no constructor at all for a class
// called when init without args

// Player ira;
// Player *ira = new Player;

// below Account class has no defined constructors
class Account {
private:
    string name;
    double balance;
public:
    bool withdraw(double amt);
    bool deposit(double amt);
};

// you can also add in public as your default no arg constructor
// thus we won't initialize with garbage data

// Account () {
//     name = "None";
//     balance = 0.0;
// }

// Account (string name_val, double bal) {
    // name = name_val;
    // balance = bal;
// }

// if we use the above, we can no longer use the default const. -- we must define it ourselves

int main() {
    // default constructor
    Account ira;
    Account *gene = new Account;
    delete gene;

    return 0;
}
