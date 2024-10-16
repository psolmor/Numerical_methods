#include "../../include/root_finding.hpp"
#include <iostream>
#include <cmath>
#include <stdexcept>


double calc(double xn, double xn_previous) {
    return xn - test_func(xn) * ((xn - xn_previous) / (test_func(xn) - test_func(xn_previous)));
}

double secant(double x, double x_previous, double tol, int MAX_ITER) {
    
    double x_next = calc(x, x_previous);    
    int iter = 1;

    while (fabs(test_func(x_next)) > tol && iter <= MAX_ITER) {
        x_previous = x;
        x = x_next;
        x_next = calc(x, x_previous);
        iter++;
        if (iter==MAX_ITER){
            throw std::runtime_error("Max. iteration reached for Secant method.");
        };
    }

    return x_next;
}