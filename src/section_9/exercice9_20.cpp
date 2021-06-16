#include <list>
#include <deque>
#include <iostream>

void print_deque(const std::deque<int> &container)
{
    for (auto &c : container)
        std::cout << c << std::endl;
}

int main()
{
    std::list<int> list_int;
    std::deque<int> d1, d2;
    int current_int;
    while (std::cin >> current_int)
        list_int.push_back(current_int);

    for (std::list<int>::const_iterator it = list_int.cbegin(); it != list_int.cend(); ++it)
        if (*it % 2 == 0)
            d1.push_back(*it);
        else
            d2.push_back(*it);
    std::cout << "Even-valued" << std::endl;
    print_deque(d1);
    std::cout << "Odd" << std::endl;
    print_deque(d2);

    return 0;
}