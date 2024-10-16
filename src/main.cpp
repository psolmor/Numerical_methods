#include "../include/root_finding.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {

    try
    {
       
        cout << "Root bisection: " <<  bisection(1, 2) << endl;
        cout << "Root newton: " << newton_method(1, 2) << endl;
        cout << "Secant Method: " << secant(3,4) << endl;
        
    }
    catch(const runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}