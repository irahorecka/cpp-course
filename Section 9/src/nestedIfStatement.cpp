#include <iostream>
#include <iomanip>  // for setting decimal precision in io

using namespace std;


int main() {
    int score {};
    cout << "Enter your score from 0 - 100: ";
    cin >> score;
    char letter_grade {};

    if (score >= 0 && score <= 100) {
        if (score > 90)
            letter_grade = 'A';
        else if (score > 80)
            letter_grade = 'B';
        else if (score > 70)
            letter_grade = 'C';
        else if (score > 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';
        cout << "Your grade is: " << letter_grade << endl;

        if (letter_grade == 'F')
            cout << "Sorry, you must repeat this class" << endl;
        else
            cout << "You passed" << endl;

    } else {
        cout << "Sorry, this is not a valid grade." << endl;
    }

    // working with decimal precision
    cout << fixed << setprecision(2);  // for cout purposes
    cout << 12.48375834 << endl;  // will result in 12.48

    return 0;
}