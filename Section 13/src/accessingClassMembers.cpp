#include <iostream>
#include <vector>
#include <string>

using namespace std;

// not all classes are accessible
// we can access both methods and attributes
// we do need objects to access instance variables

// the dot operator
// an example is Account ira_account;
// check balance: ira_account.balance;
// deposit 1000.00: ira_account.deposit(1000.00)

// if we have a pointer to the object, we need to dereference it first to get to the object
// Account *ira_account = new Account()
// (*ira_account).balance;
// (*ira_account).deposit(1000.00);

// there is also the member of pointer operator
// ira_account->balance;
// ira_acocunt->deposit(1000.00)

class Player {  // blueprint to create player objects from
public:
    // attributes
    string name;  // str obj has default empty value
    int health;  // garbage data init
    int xp;

    // methods
    void talk(string text_to_say) {
        cout << "Hello " << name << "; " << text_to_say << endl;
    };
    bool is_dead();


};  // need ; at end of class declaration

class Account {
public:
    // attributes
    string name;
    double balance;

    // methods
    void deposit(double bal) {
        balance += bal;
        cout << "In deposit: $" << balance << endl; 
    };
    void withdraw(double bal) {
        balance -= bal;
        cout << "In deposit: $" << balance << endl;
    };
};

int main() {
    Player ira;
    ira.name = "Ira";
    ira.health = 100;
    ira.xp = 12;
    ira.talk("WHATUPPPP");

    // working with a pointer
    Player *enemy = new Player;
    (*enemy).health = 200;
    // use member of pointer operator
    enemy->xp = 15;

    (*enemy).name = "Bobby";
    enemy->talk("HELLO THERE");


    Account ira_bank;
    ira_bank.balance = 100000.00;
    ira_bank.deposit(100.00);
    ira_bank.withdraw(986.4);

    // using a pointer
    Account *gene_account = new Account;
    gene_account->balance = 100000.00;
    gene_account->withdraw(293838.34);
    gene_account->deposit(2349.33);


    return 0;
}