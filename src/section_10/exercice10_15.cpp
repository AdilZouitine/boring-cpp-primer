#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;
    auto sum = [x](int i)
    { return x + i; };
    std::cout << x << " + " << y << " = " << sum(y) << std::endl;

    return 0;
}
