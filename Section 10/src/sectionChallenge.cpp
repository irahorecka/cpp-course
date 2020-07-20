#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    // Build ascii vector for pyramid challenge
    // Actually not necessary, haha
    // vector<char> ascii {};
    // vector<int> omit_ascii {91, 92, 93, 94, 95, 96};  // ascii ints to omit

    // for (int(i) {65}; i <= 122; i++) {
    //     if (find(omit_ascii.begin(), omit_ascii.end(), i) != omit_ascii.end()) {
    //         ;
    //     } else {
    //         ascii.push_back((char)i);
    //         // cout << (char)i;
    //     }
    // }

    string user_input {};
    cout << "Choose a string of char or int: ";
    cin >> user_input;

    for (int i{0}; i < user_input.length(); i++) {
        if (i > 0) {
            string forward {user_input.substr(0, i+1)};
            string backward {user_input.substr(0, i)};
            reverse(backward.begin(), backward.end());

            auto spaces_num {static_cast<int>(((user_input.length()*2 -1) - (forward.length() + backward.length())) / 2)};
            for (int j{0}; j < spaces_num; j++) {
                cout << " ";
            }

            cout << forward << backward << endl;

        } else {
            // first index of user_input string
            auto spaces_num_1 {static_cast<int>((user_input.length()*2 -1) - 1) / 2};
            for (int j{0}; j < spaces_num_1; j++) {
                cout << " ";
            }

            cout << user_input.at(i) << endl;
        }
    }

    return 0;
}
