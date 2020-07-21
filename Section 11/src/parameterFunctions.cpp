#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> v) {
    for (auto s: v)
        cout << s << " ";
    cout << endl;
}

int main() {
    int num{10};
    int another_num{20};

    cout << "num before calling pass_by_value1 " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1 " << num << endl;  // nothing changes

    // same thing here.
    cout << "another_num before calling pass_by_value1 " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1 " << another_num << endl;  // nothing changes

    // you can imagine this will be the same for a string object passed to pass_by_value2
    // or for a vector object passed to pass_by_value3; so on and so forth...

    return 0;
}
