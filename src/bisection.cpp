#include "root_finding.hpp"
#include <cmath> 
#include <iostream>

double bisection(double interval_origin, double interval_ending, double tol) {
    double a = interval_origin;
    double b = interval_ending;
    double c = (a + b) / 2;

    while (fabs(test_func(c)) > tol) { 
        if (test_func(a) * test_func(c) < 0) {
            b = c;
        } else {
            a = c;
        }
        c = (a + b) / 2;
    }
    return c; 
}