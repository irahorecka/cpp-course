#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<int> listInt{23, 88, 45, 234, 202, 2938, 1};
    char userInput {};

    while (true) {
        cout << "P - print\nA - add\nM - display mean\nS - display smallest\nL - display largest\nQ - quit" << endl;
        cin >> userInput;

        if (userInput == 'P' || userInput == 'p') {
            for (auto num: listInt)
                cout << num << " ";
            cout << endl;
        } else if (userInput == 'A' || userInput == 'a') {
            int userNum{};
            cout << "Enter a number: ";
            cin >> userNum;
            listInt.push_back(userNum);
            cout << "New list: " << endl;
            for (auto num: listInt)
                cout << num << " ";
            cout << endl;
        } else if (userInput == 'M' || userInput == 'm') {
            int sum{};
            for (auto num: listInt)
                sum += num;
            cout << "The mean is: " << (sum / listInt.size()) << endl;
        } else if (userInput == 'S' || userInput == 's') {
            int min{listInt[0]};
            for (int i{1}; i < listInt.size(); i++) {
                if (min > listInt[i])
                    min = listInt[i];
            }
            cout << "The min number is: " << min << endl;
        } else if (userInput == 'L' || userInput == 'l') {
            int max{listInt[0]};
            for (int i{1}; i < listInt.size(); i++) {
                if (max < listInt[i])
                    max = listInt[i];
            }
            cout << "The max number is: " << max << endl;
        } else if (userInput == 'Q' || userInput == 'q') {
            cout << "Exiting application." << endl;
            break;
        } else {
            cout << "Bruh, enter something valid." << endl;
        }
    }

    return 0;
}
