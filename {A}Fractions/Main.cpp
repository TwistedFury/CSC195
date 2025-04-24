#include <iostream>
#include "Fraction.h"

using namespace mathlib;

int main()
{
    Fraction<int> fraction1{ 18, 5 };
    std::cout << fraction1 << std::endl;

    Fraction<int> fraction2{ 15, 6 };
    std::cout << fraction2 << std::endl;
    std::cout << "simplify: " << fraction2.Simplify() << std::endl;

    std::cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    std::cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Fraction<long> fraction3; // It's a long, because I can.
    std::cout << "input fraction (numerator - denominator): \n";
    std::cin >> fraction3;
    std::cout << fraction3 << std::endl;
    std::cout << fraction3.ToFloat() << std::endl;
}

// JUST SO YOU KNOW, THIS ASSIGNMENT WAS PAIN. STREAM OPERATORS TOOK A COUPLE OF HOURS TO FIGURE OUT