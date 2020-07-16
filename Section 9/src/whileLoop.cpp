#include <iostream>
#include <vector> 
using namespace std;

// while loop is a pre-test loop, test is done at the beginning of the loop
int main() {
    // just an overview of the for loop
    for (int i{0}; i<9; i++) {
        cout << i;
    }

    // simple example
    int i{0};

    while (i <= 10) {
        if (i % 2 == 0)
            cout << i << endl;
        i++;  // must increment to prevent infinite loop
    }

    // using a vector
    vector<double> array1{10.3, 4.3, 55.2, 25.1};

    int j{0};
    while (j < 4) {  // loop while j is less than 4
        cout << array1[j] << endl;
        ++j;
    }

    // while loop can be good for input validation
    // ask indef if input is wrong

    int number{};

    cout << "Enter a number less than 100: ";
    cin >> number;

    while (number > 100) {
        cout << "Enter a number less than 100: ";  // repetition can be omitted using the do-while loop
        cin >> number;
    }

    cout << "Thanks bro." << endl;

    // note, bool flag can be used to exit the loop
    // i.e. set bool to true once condition is met
    // KISS keep it simple stupid

    bool done{false};  // explicitly set it to false
    int num{0};

    while (!done) {  // while false
        cout << "Enter a number between 1 and 5: ";
        cin >> num;
        if (num <= 1 || num >= 5) {
            ;
        } else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }

    


    return 0;
}