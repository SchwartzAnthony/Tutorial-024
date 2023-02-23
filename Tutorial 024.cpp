// Tutorial 024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdint>
#include <iostream>

int main()
{
    std::cout << "Enter an Integer: ";
    int x{};
    std::cin >> x; 

    std::cout << "Enter another Integer: ";
    int y{};
    std::cin >> y; 

    std::cout << "The remainder is: " << x % y << '\n'; 
     
    if ((x % y) == 0)
        std::cout << x << " is evenly divislbe by " << y << '\n';
    else
        std::cout << x << " is not evenly divislbe by " << y << '\n';

    return 0;
}