#include <iostream>  // Input name results in greeting'
#include <string>

int main()
{
    std::cout  << "What is your name? " ;   // ask user name
    std::string name ;                      // declare variable name to hold user input
    std::cin >> name ;                      // get number from keyboard and store it in variable name

    std::cout << "Hello " << name << "! Welcome aboard. " ;
    return 0;
}
