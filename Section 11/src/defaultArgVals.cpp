#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// like kwargs in python
// must be stored after args
double calc_cost(double base_cost, double tax_rate=0.06, double shipping=3.50);  // define defaults in prototype

double calc_cost(double base_cost, double tax_rate, double shipping) {  // don't have to define defaults in actual func
    return base_cost += (base_cost * tax_rate) + shipping;
}

int main() {
    double cost{};
    cost = calc_cost(100.0, 0.08, 4.25);

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;  // don't use any default

    cost = calc_cost(100.0, 0.08);  // default shipping
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(100.0);  // default tax_rate and shipping
    cout << "Cost is: " << cost << endl;


    return 0;
}
