#include <iostream>
#include <vector>

bool found(std::vector<int>::const_iterator it, std::vector<int>::const_iterator end, int value)
{
    for (; it != end; ++it)
        if (*it == value)
            return true;
    return false;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4};
    int value_1 = 3, value_2 = 5;
    std::cout << found(vec.cbegin(), vec.cend(), value_1) << std::endl;
    std::cout << found(vec.cbegin(), vec.cend(), value_2) << std::endl;

    return 0;
}