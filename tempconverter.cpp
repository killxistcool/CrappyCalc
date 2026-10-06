#include <iostream>
#include "calculator.h"

void doConversion()
{
    std::cout << "Enter a temperate to convert to Celsius: ";
    double celsius{}; // temperature input
    std::cin >> celsius;

    double fahrenheit{celsius * 9 / 5 + 32};
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.";

}


