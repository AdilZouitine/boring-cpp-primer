#include <iostream>

int main()
{
    int a(12), b(15);
    auto f = [](const int &elem1, const int &elem2)
    { return elem1 + elem2; };

    std::cout << f(a, b) << std::endl;
    return 0;
}