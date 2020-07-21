#include <iostream>
#include <vector>
#include <string>

using namespace std;

// functions with different parameter lists with the same name
// e.g. print func .. doesnt have to be spec for type int, double, char, etc
// e.g. polymorphism
// i.e. declare the same function with various types over and over

// overload prototypes
// if you give two default args, then compiler error - can't choose which one
void print(int);
void print(double);
void print(string);
void print(char);
void print(vector<string>);

void print(int num) {
    cout << num << endl;
}
void print(double num) {
    cout << num << endl;
}
void print(string num) {
    cout << num << endl;
}
void print(char num) {
    cout << num << endl;
}
void print(vector<string> num) {
    for (auto c: num)  // compiler error if print entire str
        cout << c << " ";
}


int main() {
    // i.e. you can just think "print"
    print('c');
    print("hello!");
    print(123);
    print(123.5);
    
    vector<string> test{"hello", "ira"};
    print(test);

    return 0;
}
