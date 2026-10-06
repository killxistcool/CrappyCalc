#include <iostream>
#include "calculator.h"

// converts Celsius to Fahrenheit
void doConversion()
{
    std::cout << "Enter a temperate to convert to Celsius: ";
    double celsius{};
    std::cin >> celsius;

    double fahrenheit{celsius * 9 / 5 + 32};
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.";

}


