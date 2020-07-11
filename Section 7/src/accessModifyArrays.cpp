#include <iostream>

using namespace std;


int main() {
    int testScores [5] {1, 2, 3, 4, 5};
    // accessing array elements using index
    cout << "First score at index 0: " << testScores[0] << endl;

    // assigning elements in an array from user statement
    cout << "Add a test score: ";
    cin >> testScores[1];
    cout << "New value for testScores[1] is: " << testScores[1] << endl;

    // NOTES::
    // the name of the array is the first location in memory for the array
    // the subscript operator [] represents the offset from the array beginning
    // cpp just calculates to find the correct element

    // Initializing arrays without declaring size - compiler will figure out the array size
    char vowels[] {'a', 'e', 'i', 'o', 'u'};

    // setting value to one of the array elements
    vowels[3] = 'x';

    // induce exe crash by adding to an index not declared
    // on MacOS, a warning is generated
    // vowels[5] = 'r';

    // Try a double this time.
    double doubleArray [] {10.2, 399.4};
    cout << doubleArray[1] << endl;

    // if you don't initialize an array, junk bit pattern of dtype will be there
    int moreTestScores [5];
    cout << moreTestScores[1] << endl;

    // instead, just put empty curly braces to initialize to zero
    int moreTestScores2 [5] {};
    cout << moreTestScores2[1] << endl;  // gives 0

    return 0;
}