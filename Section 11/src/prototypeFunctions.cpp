#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// the compiler must know of the function prior to it being called
// small programs, define upstream
// big programs, use func prototypes - also can use header files
// for same file, just define the function without the body at top - fill later

// below are examples of function prototypes
double calc_area_circle(double radius);  // names are optional, good for documentation
double area_circle();
void volume_cylinder();

int main() {
    cout << "Area of circle." << endl;
    area_circle();
    cout << "Area of cylinder." << endl;
    volume_cylinder();

    return 0;
}

double calc_area_circle(double radius) {
    return M_PI * pow(radius, 2);
}

double area_circle() {
    double radius{};
    cout << "What is the radius: ";
    cin >> radius;

    
    double area{calc_area_circle(radius)};
    cout << area << endl;
    return area;
}

void volume_cylinder() {
    double circle_area{area_circle()};

    double height{};
    cout << "What is the height: ";
    cin >> height;
    double cyl{circle_area * height};
    
    cout << cyl << endl;
}


