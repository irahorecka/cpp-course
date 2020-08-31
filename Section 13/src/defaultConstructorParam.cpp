#include <iostream>
#include <vector>
#include <string>

using namespace std;

// default constructor param can simplify our code and min the overloaded constructors
// this is synonymous to kwargs

class Player {
private:
    string name;
    int health;
    int xp;
public:
// give it a constructor filled with kwargs, this way the user can select which values to replace
// declare this, and don't make a no-args constructor, otherwise there will be a compiler error
    Player(string name="None",
            int health_val=0,
            int xp=0);
};

// initialize lists - declare outside of main
// can't always do this, but do this when you can
Player::Player(string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
        cout << "THREE ARGS CONSTRUCTOR" << endl;
    }

int main() {
    // the kwargs constructor allows us to set none to three params
 
    // notice these are positional args filling for kwargs
    Player ira;
    Player *gene = new Player;  // hmmm how to set args after?
    Player bob{"Bob", 55};  // two args constructor also ok

    return 0;
}
