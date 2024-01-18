#include <iostream>  // int number value doubled

int main()
{
    std::cout << "Enter a number: ";    // ask user for a number
    int x{};                            // define variable x to hold user input
    std::cin >> x;                      // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';
    std::cout << "Doubled that is " << x*2 << '\n';
    return 0;
}
