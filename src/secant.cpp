#include "root_finding.hpp"
#include <iostream>
#include <cmath>

using namespace std;

double calc(double xn, double xn_previous) {
    return xn - test_func(xn) * ((xn - xn_previous) / (test_func(xn) - test_func(xn_previous)));
}

double secant(double x, double x_previous, double tol, int MAX_ITER) {
    int iter = 1;
    double x_next = calc(x, x_previous);

    while (fabs(test_func(x_next)) > tol && iter <= MAX_ITER) {
        x_previous = x;
        x = x_next;
        x_next = calc(x, x_previous);
        iter++;
    }

    return x_next;
}