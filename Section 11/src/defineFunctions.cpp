#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

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

void volume_cylinder () {
    double circle_area{area_circle()};

    double height{};
    cout << "What is the height: ";
    cin >> height;
    double cyl{circle_area * height};
    
    cout << cyl << endl;
}


int main() {
    cout << "Area of circle." << endl;
    area_circle();
    cout << "Area of cylinder." << endl;
    volume_cylinder();

    return 0;
}
