#include <iostream>
#include <vector>
#include <cctype>  //notice this func  -- checks c string types
#include <cstdlib>  //converts c-style strings to other types, e.g. float, int, long
#include <cctype>  // for c-stryle string functions

using namespace std;

// cctype allows for testing of character
int main() {
    // a bunch of methods to check if char is of a certain property
    // these are methods
    // conversion funcs, tolower(), toupper() are also available
    // seq of characters stored contiguously in memory - an array of characters
    // compiler allocates an extra char for null char -- string
    // old style = must allocate definitive space for compiler to store char
    // cpp brings in c-style strings to the cpp environment
    // ex:
    char str[80];

    strcpy(str, "Hello ");  // copy
    strcat(str, "there");  // concatenate
    cout << strlen(str);  // 11
    strcmp(str, "Another");  // -1

    // c-style string
    char first_name[20] {};  // array of characters
    char last_name[20] {};  // array of characters
    char full_name[50] {};  // array of characters
    char temp[50] {};  // array of characters

    cout << first_name << endl;  // garbage chars come out if char is uninitialized


    cout << "Enter first name: " << endl;
    cin >> first_name;  // the null character will automatically fill for us
    cout << "Enter last name: " << endl;
    cin >> last_name;

    cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters." << endl;  // strlen to find length of str -- dtype size_t (unsigned)
    cout << "Hello " << last_name << " your last name has " << strlen(last_name) << " characters." << endl;

    strcpy(full_name, first_name);  // cppy first_name to full_name
    strcat(full_name, " ");  // concatenate string
    strcat(full_name, last_name);

    cout << "Your full name is: " << full_name << endl;

    // notice, cin will stop at the first space, naturally
    // to overcome this tendency, try this out
    char full_name_2[50] {};  // array of characters
    cout << "Enter full name: ";
    cin.getline(full_name_2, 50);
    cout << "Your full name is: " << full_name_2 << endl;

    // c-style strings, you must have enough storage.

    if (strcmp(first_name, last_name) == 0) {  // string comparison, we want to get back a zero if they are the same (bool?)
        cout << first_name << " and " << last_name << " are the same" << endl;
    } else {
        cout << first_name << " and " << last_name << " are different" << endl;
    }

    // use size_t as the dtype for num, better for different OS
    // working with loops:
    for (size_t i{0}; i < strlen(first_name); i++) {
        if (isalpha(first_name[i]))
            first_name[i] = toupper(first_name[i]);
    }
    cout << "Upper your name!: " << first_name << endl;



    return 0;
}
