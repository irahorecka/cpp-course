#include <iostream>

using namespace std;

// for loop has this pattern
// for (initialization; condition; increment)
//      statement;
// condition is a bool
int main() {
    // i is a common loop var
    int i {0};

    for (i=0; i<=5; ++i)  // i {0} is also legal
        cout << i << endl;

    // note, i is not visible outside of the for loop scope
    // conditional in a loop
    // notice how i declared j in the loop
    for (int j {0}; j <= 10; ++j) {  // if you want to increment by two, use j+=2
        if (j % 2 == 0)
            cout << j << endl;
    }

    // working with arrays
    int scores [] = {100, 98, 88};
    // or...
    // #include <vector>
    // vector <int> nums {10,20,394,39};

    for (unsigned k{0}; k<3; ++k) {  // decrement is also possible, i.e. --k
    // used unsigned, in vector.size(), the value is unsigned
        cout << scores[k] << endl;
    }

    // though rare, check out the comma operator
    // increment two var simultaneously
    for (int a{1}, b{5}; a<=5; ++a, ++b) {  // b does not get an int declaration.
    // notice, we increment the var after we execute the body 
        cout << a << " * " << b << " : " << (a * b) << endl;
    }

    // making a 2d matrix
    for (int c{0}; c<100; ++c) {
        cout << c << (c % 10 == 0 ? "\n" : " ");
    }

    // an endless loop is for(;;)
    
    return 0;
}