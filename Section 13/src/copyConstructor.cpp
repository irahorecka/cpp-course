#include <iostream>
#include <vector>
#include <string>

// when objects are copied, cpp must create a new obj from an existing obj
// copies are made when: passing obj as value as param, returning an obj from func, 
// and constructing one obj based on another of the same class

// cpp has a compiler-defined copy constructor if we don't provide one -- i.e. memberwise copy
// but we can define one to be very precise in semantics of copying

// if you use raw pointers, only the pointer will be copied (shallow copy), this is great for memory saving
// value copy is a deep copy

// rec to create a copy constr when your class uses raw pointer members
// provide copy constr with a const reference parameter
// use STL classes, they provide copy constructors
// AVOID using raw pointer data members if possible
using namespace std;

// E.G.
// Player hero {"Hero", 19, 20};

// void display_player(Player p) {
//     // p is a copy of the hero instance
//     // use p
//     // Destructor for p will be called
// }

// return obj value
// Player enemy;

// Player create_super_enemy() {
//     Player an_enemy{"Super Enemy", 1000, 1000};
//     return an_enemy;  // a copy of an_enemy is returned
// }

// enemy = create_super_enemy();

// NEW - check this out
// Player hero{"Hero", 100, 100};
// Player another_hero{hero};  // you can create another obj by passing in an obj (of same class)

// E.G. declaring a copy constructor
// Player::Player(const Player &source);
// Account::Account(const Account &source);

class Player {
private:
    string name;
    int health;
    int xp;
public:
    string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    Player(string name="None",
            int health_val=0,
            int xp=0);
    
    // define copy constr -- declare this in the public sector of the class
    Player(const Player &source);
    ~Player() {cout << "Destructor called for " << name << endl;}
};

// initialize our copy constructor
Player::Player(const Player &source)
    // below is an initializer list
    : name{source.name},
    health(source.health),
    xp(source.xp) 
    // you can also use delegation, like so
    // :Player{source.name, source.health, source.xp}
    {
        cout << "Copy constructor - made copy of: " << source.name << endl;
}

// our initializer
Player::Player(string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
        cout << "THREE ARGS CONSTRUCTOR" << endl;
}

// make a function where copy of Player is required by value (i.e. implies copy)
void display_player(Player p) {
    cout << "Name " << p.get_name() << endl;
    cout << "Health " << p.get_health() << endl;
    cout << "XP " << p.get_xp() << endl;
    // destructor called for p when it goes out of scope
}

int main() {
    Player ira;
    Player *gene = new Player;  // hmmm how to set args after?
    Player bob{"Bob", 55}; 
    Player jim{"Jim", 100, 100};

    display_player(bob);

    // let's make a direct copy of the player class
    Player player2 {jim};

    // look at the cout, it's neat how the direction of construction and destruction occurs

    return 0;
}
