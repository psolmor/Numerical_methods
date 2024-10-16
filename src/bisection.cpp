#include "root_finding.hpp"
#include <cmath>
#include <iostream>
#include <stdexcept>


double bisection(double interval_origin, double interval_ending, double tol, int MAX_ITER) {
    double a = interval_origin;
    double b = interval_ending;
    double c = (a + b) / 2;
    int iter = 0;

    while (fabs(test_func(c)) > tol && iter < MAX_ITER) {
        if (test_func(a) * test_func(c) < 0) {
            b = c;
        } else {
            a = c;
        }
        c = (a + b) / 2;
        iter++;
        if (iter==MAX_ITER){
            throw std::runtime_error("Max. iteration reached for Bisection method.");
        };
    }
    return c;
}