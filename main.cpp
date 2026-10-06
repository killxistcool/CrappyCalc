#include <iostream>
#include "calculator.h"

// runs the chosen option from main()
void doAnswer(int ans)
{
    if (ans == 1)
        doConversion();
    else if (ans == 2)
        doMath();
    else if (ans == 3)
        doFibonacci();
    else if (ans == 4)
        std::cout << "Exiting...";
    else
        std::cout << "That's not a valid option!";
}

// User enters a number (1-4) and that number will be forwarded to doAnswer() (ex: num 1 = Temp conversion)
int main()
{
    std::cout << "Welcome to Crappy Calc! What would you like to do? (1-4)\n";
    std::cout << "1. Temperature Conversion\n";
    std::cout << "2. Math\n";
    std::cout << "3. Fibonacci Calculation\n";
    std::cout << "4. Exit\n" << '\n';
    std::cout << "Decision: ";

    int ans{};
    std::cin >> ans;
    doAnswer(ans);

    return 0;
}
