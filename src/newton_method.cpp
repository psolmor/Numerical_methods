#include "root_finding.hpp"
#include <iostream>
#include <cmath>

using namespace std;

//Derivative calculation trough central diferennces
double derivative(double x,double h=0.0001){
    return (test_func(x + h) - test_func(x-h))/(2*h);
}


double newton_method(double interval_origin, double interval_ending, double tol, int MAX_ITER){
    double x0 = interval_origin;
    double x1 = interval_ending;

    double x2 = x1 - (test_func(x1) / test_func(x0));
    int iter = 0;

    while (fabs(test_func(x2)) > tol && iter < MAX_ITER) {
        x0 = x1;
        x1 = x2;
        x2 = x1 - (test_func(x1) / derivative(x1));
        iter++;
    }
    return x2;
}