#ifndef ROOT_FINDING_HPP
#define ROOT_FINDING_HPP

double bisection(double interval_origin, double interval_ending, double tol=0.0001, int MAX_ITER=1000);
double newton_method(double interval_origin, double interval_ending, double tol=0.0001, int MAX_ITER=1000);
double secant(double x,double x_previous, double tol=0.0001, int MAX_ITER=10000);
double test_func(double x);

#endif 