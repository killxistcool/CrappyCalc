#include <iostream>
#include "operations.h"

// Addition
void doAddition(int num1, int num2) // Add the two numbers
{
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
}

// Subtraction
void doSubtraction(int num1, int num2) // Subtract the two numbers
{
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
}

// Multiplication
void doMultiplication(int num1, int num2) // Multiply the two numbers
{
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
}

// Division
void doDivision(int num1, int num2) // Divide the two numbers
{
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
}
