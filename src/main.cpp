#include "root_finding.hpp"
#include <iostream>

using namespace std;

int main() {
    double root = bisection(1, 2, 0.01);
    cout << "Root: " << root << endl;
    return 0;
}