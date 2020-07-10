#include <iostream>

using namespace std;


int main() {

    // char has one byte, i.e. 8 bits -- 256 char max
    // char16_t at least 16 bits
    // char32_t at least 32 bits
    // wchar_t largest available character set

    char middleInitial {'J'};  // notice the single quote -- special for char
    cout << "My middle initial is " << middleInitial << endl;

    // int types: short:: 16, int:: 16, long:: 32, long long:: 64
    // ints can be signed or unsigned
    // by default, ints are signed

    unsigned short int examScore {55};  // same as unsigned short examScore {55};
    cout << "My exam score was " << examScore << endl;

    int countriesRepresented {65};
    cout << "There were " << countriesRepresented << " countries represented in my meeting" << endl;

    long peopleInFlorida {20610000};
    cout << "There are " << peopleInFlorida << " people in Florida." << endl;

    long peopleOnEarth {7'600'000'000};
    cout << "There are " << peopleOnEarth << " people on Earth." << endl;

    long long distanceToAlphaCentaur {9'461'000'000'000};
    cout << "The distance to Alpha Centaur is " << distanceToAlphaCentaur << " km." << endl;


    // float types: float:: /7 decimal digits (dd), double:: 15dd, long double:: 19dd 

    float carPayment {401.23};
    cout << "My car payment is " << carPayment << endl;

    double pi {3.14159};
    cout << "Pi is " << pi << endl;

    long double largeAmount {2.7e120};
    cout << largeAmount << " is a very big number." << endl;

    // boolean types: used to represent true, false
    // 0 == false, non-zero == false
    // usually 8 bits

    bool gameOver {false};
    cout << "The value of gameOver is " << gameOver;  // returns 0

    // overflow examples in cpp
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};

    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;  // will return an error in -std=c++14

    return 0;
}