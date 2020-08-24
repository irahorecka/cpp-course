#include <iostream>
#include <vector>
#include <string>

using namespace std;

// classes can have as many constructors as necessary
// each must have unique signatures
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
    // a destructor
    ~Player();
};

// Implementing these constructors - all three of them
// the reason we instantiate all of the features is because we don't want garbage
// data in any of the attributes after instantiation
Player::Player() {
    name = "None";
    health = 0;
    xp = 10;
}

Player::Player(string name_val) {
    name = name_val;
    health = 0;
    xp = 10;
}

Player::Player(string name_val, int health_val, int xp_val) {
    name = name_val;
    health = health_val;
    xp = xp_val;
}

int main() {
    Player ira;
    Player hero {"Hero"};
    Player villain {"Ira", 40, 39};

    return 0;
}
