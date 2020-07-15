#include <iostream>

using namespace std;


int main() {
    // An integral type are short, long, signed, unsigned and plain ints
    // an or statement is allowed in switch statements
    // the control expression must evaluate to an integer type
    // case expr must be constant expressions that evaluate to int or int literals
    // no vars

    char selection {};
    cout << "Input a desired character from 1 - 4 -- tap 5 for mystery: ";
    cin >> selection;

    // break statements must be in place to leave the case
    // else the logic will fall through - sometimes this is at an advantage
    switch (selection) {
        case '1': cout << "1 selected";
            break;  // break should be placed here to prevent entry into default -- complete the switch statement
        case '2': cout << "2 selected";
            break;
        case '3':  // an example of an or statement
        case '4': cout << "3 or 4 selected";
            break;
        case '5':
        {
            // an example of an if statement in the case block
            char confirm;
            cout << "Do you really want to enter 5? y/n: ";
            cin >> confirm;

            if (confirm == 'y') {
                cout << "Congrats on taking the dare!" << endl;
                break;
            } else {
                ;
            }
        }
        default: cout << "1, 2, 3, 4 NOT selected";

}


    return 0;
}