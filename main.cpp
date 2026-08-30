#include <iostream>
#include "operations.h"
#include "input.h"

// Creates a calculator which the user can use for various mathematical operations.
int main()
{
    int num1{getInputFromUser()};
    int num2{getInputFromUser()};

    doAddition(num1, num2);
    doSubtraction(num1, num2);
    doMultiplication(num1, num2);
    doDivision(num1, num2); 

    return 0;
}

