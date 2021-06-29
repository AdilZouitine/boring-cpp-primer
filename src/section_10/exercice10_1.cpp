#include <algorithm>
#include <iostream>
#include <vector>
#include <typeinfo>

int main()
{
    std::vector<int> vi;
    int val;
    std::cout << "Enter your vector" << std::endl;
    while (std::cin >> val)
        vi.push_back(val);

    std::cout << "Enter your value to count" << std::endl;
    int to_count;
    std::cin >> to_count;
    int counter = std::count(vi.cbegin(), vi.cend(), to_count);
    std::cout << counter << std::endl;
    return 0;
}