#include <iostream>

using t = size_t;

bool isPyth(const t a, const t b, const t c)
{
    return (a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b);
}
int main()
{
    t cntr = 0;

    t current = 0, b = 0, c = 0;
    while (std::cin >> current)
    {
        cntr += isPyth(c, b, current);
        c = b;
        b = current;
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