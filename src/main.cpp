#include "root_finding.hpp"
#include <iostream>

using namespace std;

int main() {
    double root_bi = bisection(1, 2);
    double root_newton = newton_method(1, 2);
    cout << "Root bisection: " << root_bi << endl;
    cout << "Root newton: " << root_newton << endl;
    return 0;
}