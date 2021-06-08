#include <iostream>
#include <vector>

std::vector<int>::const_iterator found(std::vector<int>::const_iterator it, std::vector<int>::const_iterator end, int value)
{
    for (; it != end; ++it)
        if (*it == value)
            return it;
    return end;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4};
    int value_1 = 3, value_2 = 5;
    std::vector<int>::const_iterator found_v1 = found(vec.cbegin(), vec.cend(), value_1);
    std::vector<int>::const_iterator found_v2 = found(vec.cbegin(), vec.cend(), value_2);
    if (found_v1 == vec.end())
        std::cout << "Not found" << std::endl;
    else
        std::cout << "Found " << *found_v1 << "at " << found_v1 - vec.cbegin() << std::endl;

    if (found_v2 == vec.end())
        std::cout << "Not found" << std::endl;
    else
        std::cout << "Found " << *found_v2 << "at " << found_v2 - vec.cbegin() << std::endl;

    return 0;
}