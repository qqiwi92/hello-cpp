#include <iostream>
#include <limits>
using t = size_t;

t get_max_boundary()
{
    return std::numeric_limits<t>::max();
}

t multiply(const t a, const t b)
{
    if (a > get_max_boundary() / b)
    {
        throw std::overflow_error("max overflow");
        return 0;
    }
    return a * b;
}
t sum(const t a, const t b)
{
    if (a > get_max_boundary() - b)
    {
        throw std::overflow_error("max overflow");
        return 0;
    }
    return a + b;
}

bool isPyth(const t a, const t b, const t c)
{
    bool first_part = multiply(a, a) == multiply(b, b) + multiply(c, c);
    bool second_part = first_part || (multiply(b, b) == multiply(a, a) + multiply(c, c));
    bool third_part = second_part || (multiply(c, c) == multiply(a, a) + multiply(b, b));
    return third_part;
}
int main()
{
    t cntr = 0;
    std::cout << get_max_boundary() << "\nto check overflows run with this number\n";
    t current = 0, b = 0, c = 0;
    std::cin >> c >> b;
    while (std::cin >> current)
    {
        try
        {
            cntr += isPyth(c, b, current);
        }
        catch (...)
        {
            return 2;
        }
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