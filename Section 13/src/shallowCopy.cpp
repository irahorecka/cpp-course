#include <iostream>
#include <vector>
#include <string>

using namespace std;

// shallow copy vs deep copy
// shallow copy copies the pointer, not what it is referencing
// PROBLEM: problem is when we destroy the object, the orig object still points to this object

class Shallow {
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}  // setter
    int get_data_value() {return *data;}  // getter
    Shallow(int d);
    // note: below is the copy constructor
    Shallow(const Shallow &source);
    ~Shallow();
};

// defining our constructor
Shallow::Shallow(int d) {
    // this is passed an object by value
    data = new int;  // we allocate storage
    *data = d;
}

// defining our destructor
Shallow::~Shallow() {
    delete data;  // free storage
    cout << "Destructor freeing data" << endl;
}

// copy constructor
Shallow::Shallow(const Shallow &source)
    : data(source.data) {
        // notice we only copy the pointer here. 
        // this is dangerous - this pointer also points with data. (i.e. same location in heap allocated for the data)
        cout << "Copy constructor - shallow" << endl;

}

void display_shallow(Shallow s) {
    cout << s.get_data_value() << endl;
    // destructor is called when s goes out of scope
    // this deletes the data pointer address
}

int main() {
    Shallow obj1{100};
    Shallow display_shallow{obj1};  // this line causes the memory allocation error
    Shallow obj2{1000};
    obj2.set_data_value(100000);
    obj2.get_data_value();


    return 0;
}
