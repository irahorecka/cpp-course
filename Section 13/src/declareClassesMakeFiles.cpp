#include <iostream>
#include <vector>
#include <string>

using namespace std;

// an introduction to OOP in CPP
class Player {  // blueprint to create player objects from
    // attributes
    string name{"Player"};  // str obj has default empty value
    int health{0};  // garbage data init
    int xp{3};

    // methods
    void talk(string);
    bool is_dead();


};  // need ; at end of class declaration

class Account {
    // attributes
    string name{"Account"};
    double balance{0};

    // methods
    bool deposit(double);
    bool withdraw(double);
};

int main() {
    Account frank_account;
    Account jim_account;



    // make objects on the stack
    Player frank;
    Player hero;

    Player players[] {frank, hero};  // players is an array of Player obj

    vector<Player> player_vec{frank};
    player_vec.push_back(hero);


    // create the Player object on the heap
    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}
