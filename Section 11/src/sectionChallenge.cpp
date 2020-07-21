#include <iostream>
#include <vector>

using namespace std;

void print_num(vector<int> &listInt);
void add_num(vector<int> &listInt);
void print_mean(vector<int> &listInt);
void print_min(vector<int> &listInt);
void print_max(vector<int> &listInt);
void print_quit();
void print_invalid();

// modularize Section 9 challenge into indiv functions
int main() {
    vector<int> listInt{23, 88, 45, 234, 202, 2938, 1};
    char userInput {};

    while (true) {
        cout << endl;
        cout << "P - print\nA - add\nM - display mean\nS - display smallest\nL - display largest\nQ - quit" << endl;
        cin >> userInput;

        if (userInput == 'P' || userInput == 'p') {
            print_num(listInt);
        } else if (userInput == 'A' || userInput == 'a') {
            add_num(listInt);
        } else if (userInput == 'M' || userInput == 'm') {
            print_mean(listInt);
        } else if (userInput == 'S' || userInput == 's') {
            print_min(listInt);
        } else if (userInput == 'L' || userInput == 'l') {
            print_max(listInt);
        } else if (userInput == 'Q' || userInput == 'q') {
            print_quit();
            break;
        } else {
            print_invalid();
        }
    }

    return 0;
}

void print_num(vector<int> &listInt) {
    for (auto num: listInt)
        cout << num << " ";
    cout << endl;
}

void add_num(vector<int> &listInt) {
    int userNum{};
    cout << "Enter a number: ";
    cin >> userNum;
    listInt.push_back(userNum);
    cout << "New list: " << endl;
    for (auto num: listInt)
        cout << num << " ";
    cout << endl;
}

void print_mean(vector<int> &listInt) {
    int sum{};
    for (auto num: listInt)
        sum += num;
    cout << "The mean is: " << (sum / listInt.size()) << endl;
}

void print_min(vector<int> &listInt) {
    int min{listInt[0]};
    for (size_t i{1}; i < listInt.size(); i++) {
        if (min > listInt[i])
            min = listInt[i];
    }
    cout << "The min number is: " << min << endl;
}

void print_max(vector<int> &listInt) {
    int max{listInt[0]};
    for (size_t i{1}; i < listInt.size(); i++) {
        if (max < listInt[i])
            max = listInt[i];
    }
    cout << "The max number is: " << max << endl;
}

void print_quit() {
    cout << "Exiting application." << endl;
}

void print_invalid() {
    cout << "Bruh, enter something valid." << endl;
}