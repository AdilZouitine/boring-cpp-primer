#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main()
{
    std::list<std::string> vs;
    std::string val;
    std::cout << "Enter your list" << std::endl;
    while (std::cin >> val)
        vs.push_back(val);

    std::cout << "Enter your value to count" << std::endl;
    std::string to_count;
    std::cin >> to_count;
    int counter = std::count(vs.cbegin(), vs.cend(), to_count);
    std::cout << counter << std::endl;
    return 0;
}