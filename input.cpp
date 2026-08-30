#include <iostream>
#include "input.h"

int getInputFromUser()
{
    std::cout << "Enter an integer value: ";
    int input{};
    std::cin >> input;

    return input;
}
