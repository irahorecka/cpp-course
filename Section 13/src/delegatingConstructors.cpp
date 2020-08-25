#include <iostream>
#include <vector>
#include <string>

using namespace std;

// delegating constructors 
// code one constructor and call another in init lst
// avoid duplicate code

class Player {
private:
    string name;
    int health;
    int xp;
public:
    // overloaded constructors
    Player();
    Player(string name);
    Player(string name, int health, int xp);
};

Player::Player()
// calling the three args constructors
    : Player{"Nothing", 0, 0} {
        cout << "NO ARGS CONSTRUCTOR" << endl;
} 

Player::Player(string name_val)
    : Player{name_val, 0, 0} {
        cout << "ONE ARGS CONSTRUCTOR" << endl;
}

// check this out, define the three arg first, then init the three arg const for others to overload
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "THREE ARGS CONSTRUCTOR" << endl;
}

int main() {
    // take a look at how the constructors are called
    Player ira;
    Player hero {"Hero"};
    Player villain {"Ira", 40, 39};

    return 0;
}
