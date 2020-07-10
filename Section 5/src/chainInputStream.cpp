#include <iostream>
using namespace std;

int main() {
    int n1;
    int n2;

    cout << "Enter two digits with a space: ";
    // chain the extraction operator to retrieve two integers in 
    // one input stream
    cin >> n1 >> n2;
    cout << "You entered: " << n1 << " and " << n2 << endl;
}