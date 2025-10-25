#include <iostream>

using t = size_t;
int main()
{
    t cntr = 0;
    t a = 0;
    std::cin >> a;
    if (std::cin.eof())
    {
        std::cout << cntr << "\n";
    }
    else if (std::cin.fail())
    {
        std::cerr << "Error\n";
        return 1;
    }
}