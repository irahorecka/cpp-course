#include <iostream>
#include <vector>

using namespace std;

// do while loop, execute the body of the loop while the conditional exp is true
// condition is tested at the end of the loop - post-test loop
// you don't have to force your way in the loop
// IF YOU MUST ENTER ONE CONDITION, THEN THE DO WHILE LOOP COULD BE A GOOD OPTION
int main() {

    // user input
    int number{};
    // execute do body prior to checking while expression
    do {
        cout << "enter an int between 1 and 5: ";
        cin >> number;
    } while (number <= 1 || number >= 5);
    cout << "Thanks!" << endl;


    // next level user input
    // notice we define answer outside of the while condition
    // if not, we will get a compile error
    char answer{};
    do {
        double width{}, height{};
        cout << "Enter a width and height separated by spaces; ";
        cin >> width >> height;

        double area{width * height};
        cout << "Aight, area is " << area << endl;

        cout << "Want another measurement?[y/n] ";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');


    return 0;
}