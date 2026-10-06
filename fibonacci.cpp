// Caculates the fibonacci number, based on the input (ex: wantedNumber == 5, 5 Fibonacci numbers get printed)
#include <iostream>
#include "calculator.h"

void doFibonacci()
{
    int wantedNumber{};
    std::cout << "Enter the amount of numbers you want (max 47): ";
    std::cin >> wantedNumber;

    int a{0};
    int b{1};

    while (wantedNumber)
    {
        if (wantedNumber <= 47)
            {
                wantedNumber = wantedNumber - 1;
                std::cout << a << ", ";
                int nextNum{a + b};
                a = b;
                b = nextNum;
            }
        else
            return;
    }

}
