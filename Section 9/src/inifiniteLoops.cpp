#include <iostream>
#include <vector>

using namespace std;

// inifinite loop, i.e. endless loop
// usually mistakes
// common in event driven programs, e.g. video games
// OS is an example of an infinite loop
int main() {
    for (;;)
        cout << "This is an infinite for loop." << endl;
    
    while (true)
        cout << "This is an infinite while loop." << endl;

    do {
        cout << "This is an infinite do-while loop." << endl;
    } while (true);


    return 0;
}
