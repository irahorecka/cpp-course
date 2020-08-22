#include <iostream>
#include <vector>
#include <string>

using namespace std;

// constructors are special member methods invoked during object creation
// used for init, and not return type, can be overloaded

// destructors are also special member methods
// same name as the class, preceed with ~, and invoked automatically when an object is destroyed
// no return types, or param, and only one allowed per class, no overload
// useful to release memory

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

int main() {
    Player slayer;
    Player ira;
    Player hero {"Hero"};
    Player villain {"Ira", 40, 39};
    // in this case, four destructors will be called

    Player *enemy = new Player("Enemy", 1000, 0);
    delete enemy;  // destructor called
    // note: destructors are called when objects go out of scope
    // destructors are called first for objects created the latest within the scope (top -> down)

    return 0;
}
