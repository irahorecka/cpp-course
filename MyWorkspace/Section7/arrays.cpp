#include <iostream>

using namespace std;

int main() {
//    arrays: dtype to collect values of the same element
//    fixed size - does not grow, stored contiguously in memory
//    don't go over bounds for arrays, no checks -- jump into another part of memory
//    no checking if you are out of bounds

    int testScores [5] {1, 2, 3, 4, 5};  // [] the size of the array of dtype int
    
    int highScoresPerLevel [10] {1, 4};  // remaining 8 arrays elements will be init to 0

    
    const int daysInYear {365};
    int highTemperatures [daysInYear] {0}; 
    
    cout << 't' << endl;
    
    int anotherArray [] {1, 2, 3, 4, 5};  // size automatically calculated
    
    return 0;
}