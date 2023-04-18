# include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    // Technique 1: Avoid comparisons with specific values
    //  Pitfall: This comparison may not return True as expected
    if (0.1 + 0.2 == 0.3)
        std::cout << "Equal" << std::endl;
    else
        std::cout << "Not Equal" <<std::endl;
        
    //  Instead, use a tolerance level to compare floats
    double tolerance = 0.0001;
    if (abs((0.1 + 0.2) - 0.3) < tolerance)
        std::cout << "Equal" << std::endl;
    else
        std::cout << "Not Equal" <<std::endl;

    //Technique 2: Use integer arithmetic when possible
    // Pitfall: This calculation may return a float with rounding errors
    double result = 0.1 + 0.1 + 0.1 - 0.3;
    std::cout << result << std::endl; // Output: 5.551115123125783e-17

    // Instead, use integer arithmetic
    int result_int = 1 + 1 + 1 - 3;
    std::cout << result_int << std::endl; // Output: 0

    // Technique 3: Limit precision with the round() function
    // Pitfall: The result may have unexpected precision due to rounding errors
    double x = 0.1 + 0.1 + 0.1;
    std::cout << x << std::endl;  // Output: 0.30000000000000004

    // Use floor() to round down to the nearest two decimal places
    x = floor((0.1 + 0.1 + 0.1) * 100) / 100;
    std::cout << x << std::endl;  // Output: 0.3

    // Use ceil() to round up to the nearest two decimal places
    x = ceil((0.1 + 0.1 + 0.1) * 100) / 100;
    std::cout << x << std::endl;  // Output: 0.31

    // Technique 4: Use the decimal module for high-precision calculations
    // (Note: decimal.h is not part of the C++ standard library)
    double a = 0.1;
    double b = 0.1;
    double c = 0.1;
    double d = 0.3;
    double x1 = a + b + c - d;
    std::cout << std::fixed << std::setprecision(1) << x1 << std::endl;  // Output: 0.0
    /*
     std::fixed, is an I/O manipulator that sets the output format to fixed-point notation, 
     which means that the number of decimal places will always be the same.
     
     The second part, std::setprecision(1), sets the number of decimal places to 1.
    */
}

