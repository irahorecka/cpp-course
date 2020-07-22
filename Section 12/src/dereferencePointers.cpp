#include <iostream>
#include <vector>
#include <string>

using namespace std;

// to access the data we're pointing to, we have to dereference it
// the dereference operator is *
// you have to dereference an address to access its data
int main() {
    // e.g.
    int score{10};
    int *score_ptr{&score};

    cout << *score_ptr << endl;  // 100

    *score_ptr = 200;  // change the value of the location in memory
    cout << *score_ptr << endl;  // 200
    cout << score << endl;  // 200
    cout << endl;

    // e.g. 2
    double high_temp{100.6};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};  // points to high_temp address

    cout << *temp_ptr << endl;  // get temp_ptr value i.e. deref

    temp_ptr = &low_temp;  // now assign temp_ptr pointer to low_temp address

    cout << *temp_ptr << endl;  // 37.4
    cout << endl;

    // e.g. 3
    // notice how changing a value in memory thats something is pointing to also changes that value
    string name{"Ira"};
    string *string_ptr{&name};

    cout << *string_ptr << endl;

    name = "Gene";

    cout << *string_ptr << endl;  // pointer to name, name is now Gene
    cout << endl;

    // e.g. 4
    vector<string> stooges{"Ira", "Gene", "Kevin"};
    vector<string> *v_pointer{nullptr};

    v_pointer = &stooges;

    // treat deref pointer just as you would a var
    cout << (*v_pointer).at(0) << endl;  // paren is to execute deref before accessing vector
    // same here.
    for (auto s: *v_pointer)
        cout << s << endl; 
    cout << endl;

    return 0;
}
