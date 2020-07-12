#include <iostream>

using namespace std;


int main() {
    // mixed type expression - auto typing when calculation between different types occur
    // smaller types can be converted to larger types - they can fit
    // type conversion == coercion
    // promotion = lower type to higher type
    // demotion = higher type to lower type

    // ex of demotion
    int num {0};
    num = 100.2;  // warning will be generated

    cout << num << endl;  

    // how to
     cast to a specific type
    int totalAmount {100};
    int totalNumber {8};
    double average {0.0};


    // no cast
    average = totalAmount / totalNumber;
    cout << average << endl;  // 12


    // cast with promotion
    average = static_cast<double>(totalAmount) / totalNumber;
    cout << average << endl;  // 12.5


    // finding the average of three int
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter three integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
    double average1 {0.0};
    // static cast to double to get precision in decimals
    average1 = static_cast<double>(total) / count;

    cout << "The average is: " << average1 << endl;



    return 0;
}