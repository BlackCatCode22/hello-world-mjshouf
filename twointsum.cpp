#include <iostream>  // two int with sum

int main()
{
    std::cout << "Enter a number : ";               // ask user for a number
    int x{};                                        // define variable x to hold user input
    std::cin >> x;                                  // get number from keyboard and store it in variable x

    std::cout << "Enter another number : ";         // ask user for a second number
    int y{};                                        // define variable y to hold user input
    std::cin >> y;                                  // get number from keyboard and store it in variable y
    std::cout << x << " plus " << y << " equals " << x+y ;
    return 0;
}
