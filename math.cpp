#include <iostream>
#include "calculator.h"

char getOperator()
{
    std::cout << "Enter an operator: ";
    char ch{};
    std::cin >> ch;

    return ch;
}

double getInput()
{
    std::cout << "Enter a value: ";
    double input{};
    std::cin >> input;

    return input;
}

void printResult(double num1, char operation, double num2 )
{
    double result{};

    if (operation == '+')
        result = num1 + num2;
    else if (operation == '-')
        result = num1 - num2;
    else if (operation == '*')
        result = num1 * num2;
    else if (operation == '/')
        result = num1 / num2;
    else
        std::cout << "Invalid operation!";
    std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << result << '\n';
}

void doMath()
{
    double num1{getInput()};
    double num2{getInput()};
    char operation{getOperator()};

    printResult(num1, operation, num2);
}
