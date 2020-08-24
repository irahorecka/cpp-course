#include <iostream>
#include <vector>
#include <string>

using namespace std;

// rather than initializing all member values in the constructor body,
// use constructor init lists
// more efficient and init data members as the objects are created
// order of init in order of the declarations in classes

// this is the same
class Player {
private:
// using the standard method, the below private values are assigned when called using old fashion
// class assignment method (not list initc)
// the order of declaration of attributes in private is order of init
    string name;
    int health;
    int xp;
public:
    // overloaded constructors
    Player();
    Player(string name);
    Player(string name, int health, int xp);
    // a destructor
    // ~Player();  - throws a linker error... hmmm....
};

// you are already creaing an object by doing this
// when you "instantiate" a new obj, you are just overriding the existing obj
// initialize + assign to

// Player::Player() {
//     name = "None";
//     health = 0;
//     xp = 10;
// }

// Player::Player(string name_val, int health_val, int xp_val) {
//     name = name_val;
//     health = health_val;
//     xp = xp_val;
// }

// this is new - just initialize
Player::Player()
    : name{"None"}, health{0}, xp{0} {

    }

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {

    }
  
int main() {
    Player empty;
    Player ira{"Ira", 100, 100};

    return 0;
}
