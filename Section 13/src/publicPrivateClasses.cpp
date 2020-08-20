#include <iostream>
#include <vector>
#include <string>

using namespace std;

// various accessibility of classes
// public: accessible everywhere
// private: accessible only by members or friends of the class
// protected: used wth inheritance

// as standard convention, a class access modifiers are defined at the top of class def
// class access modifiers are used mixed in declarations, some are protected, private and public

// for private variables, to set them make a public method to access this var
class Player {
private:
    // only accessible by members of the class
    string name{"Player"};
    int health;
    int xp;
public:
    void talk(string text_to_say) {cout << name << " says " << text_to_say << endl;}
    bool is_dead();
};

int main() {
    Player ira;
    // ira.name = "Ira";  // will throw an error -- cannot change a private member of the Player class

    // even trying to access the private var will throw an error
    // cout << ira.health << endl;

    ira.talk("What is up!");  // here we are accessing a private var through a public method

    // debugging is much easier when variables are private, only public methods could've altered with the variables

    return 0;
}
