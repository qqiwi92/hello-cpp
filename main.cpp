#include <iostream>

using t = size_t;
int main()
{
    t cntr = 0;
    t a = 0;
    while (std::cin >> a)
    {
        cntr++;
    }
    if (std::cin.eof())
    {
        std::cout << cntr << "\n";
    }
    else if (std::cin.fail())
    {
        std::cerr << "Error\n";
        return 1;
    }
    else
    {
        std::cout << cntr << "\n";
    }
}