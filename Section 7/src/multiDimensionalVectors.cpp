#include <iostream>
#include <vector>

using namespace std;


int main() {
    // declaring a multi-dimensional vector -- a vector of vectors
    vector <vector<int>> movieRatings {
        {1, 2, 3, 5},
        {2, 5, 9, 3},
        {4, 3, 2, 4}
    };

    // use array syntax
    cout << movieRatings[1][1] << endl;

    // use vector syntax
    cout << movieRatings.at(1).at(1) << endl;

    return 0;
}