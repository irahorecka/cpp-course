#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  // required for rand()
#include <ctime>  // required for time()

using namespace std;


int main() {
    int random_number{};
    size_t count {10};  // number of random number to generate

    int min{1};
    int max{6};

    // seed the random number generator
    // if you don't, you'll get the same sequence of rand numbers every run.
    cout << "RAND_MAX on my system is " << RAND_MAX << endl;
    srand(time(nullptr));  // this seeds the random number generator - important
    // srand = seed random
    // nullptr = null pointer
    // i.e. without this, if you run the source code without compile, you'll get the same sequence of rand num

    for (size_t i{1}; i<=count; i++) {
        random_number = rand() % max + min;  // generate random int between min and max
        // what this is doing is random modulo max(6) (0-5) and add min (1)
        cout << random_number << endl;
    }
    

    return 0;
}
