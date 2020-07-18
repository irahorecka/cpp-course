#include <iostream>
#include <vector>
#include <string>  // std::string - a class in the standard template library

using namespace std;  // important to include for std::string


// cpp strings can be easily converted to c strings
// cpp strings are safer
int main() {
    string s1;  // empty - no garbage in memory
    string s2{"Frank"};
    string s3{s2};  // copy
    string s4{"Frank", 3};  // Fra
    string s5{s3, 0, 2};  // Fr
    string s6(3, 'X');  // XXX  -  () is the constructor syntax

    // easy use of assignment operator
    string s7;
    s7 = "C++ Rocks!";

    string s8{"Hello"};
    s8 = s7;  // now a copy of s7

    // concatenation
    string sentence;
    sentence = s2 + " " + s7;
    // this is illegal:
    // sentence = "C++" + " is powerful";  // can't have two c-style string literals next to each other
    cout << sentence << endl;

    // subscripting
    cout << s7[0] << endl;
    cout << s7.at(0) << endl;

    s2[0] = 'f';  // frank
    s2.at(0) = 'p';  // prank  -- note, using the at method will throw an exception if indexerror

    // using a for loop
    for (char c: s2)  // if int c, ascii int val will arise
        cout << c << endl;

    // you can use comparison operators to compare lexical char
    cout << (s1 == s2) << endl;  // false (0)
    // using the substr method
    // like python, cpp strings are objects
    string s10{"This is a test is a test"};
    cout << s10.substr(0, 4) << endl;  // (start_index, length)
    cout << s10.substr(5, 2) << endl;

    // the find method - returns the index of beginning of char or string
    // object.find(search_string)
    cout << s10.find("test") << endl;
    cout << s10.find("test", 7) << endl;  // look for "test" after the 7th index
    cout << s10.find("XX") << endl;  // string::npos -- couldn't find it.

    // use erase or clear methods
    // object.erase(start_index, length)
    // clear just erases the string
    string s11{"This is another test."};

    cout << s11.erase(0,5);  // is a test
    // cout << s11.clear();  // ** empty string

    // the length method
    cout << s10.length() << endl;

    // addition
    s11 += "this is an addition";

    // using input delimiter to stop read
    string input_string;
    getline(cin, input_string, 'x');  // read everything until you see 'x'
    

    return 0;
}
