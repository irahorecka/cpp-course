#include <iostream>
#include <vector>
#include <iomanip>  // new

using namespace std;

// ranged based for loop introduced in cpp11
// range through collection of elements and access each element
// no subscripting indexes
int main() {
    vector<int> scores{100,90,97};

    for (int score: scores) {  // must specify dtype of iterator
        cout << score << endl;
    }

    for (auto score: scores) {  // this is common, use auto to deduce the type
        cout << score << endl;
    }

    // iterate over a string, a collection of char
    // strings could be a variable(?)
    for (auto character: "Frank") {
        cout << character << endl;
    }

    // a little more complex

    vector<double> temperatures{33.4,33.5,22.9,83.3};
    double total{};

    for (auto temp: temperatures) {
        total += temp;
    }

    cout << fixed << setprecision(1);  // one no. after the dec
    cout << (temperatures.size() == 0 ? 0.0 : total / temperatures.size()) << endl;


    // an even more concise iteration
    for (auto array: {1,2,3,4,5})
        cout << array << endl;

    // loop with char
    for (auto c: "This is a test")
        if (c != ' ')
            cout << c;

    return 0;
}