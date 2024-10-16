#include "root_finding.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Root bisection: " <<  bisection(1, 2) << endl;
    cout << "Root newton: " << newton_method(1, 2) << endl;
    cout << "Secant Method: " << secant(3,4) << endl;
    return 0;
}