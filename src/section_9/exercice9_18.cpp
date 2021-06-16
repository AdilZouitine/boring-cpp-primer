#include <deque>
#include <iostream>
#include <string>

int main()
{
    std::string current_str;
    std::deque<std::string> container;
    while (std::cin >> current_str)
        container.push_back(current_str);

    std::cout << std::endl;
    for (std::deque<std::string>::const_iterator it = container.cbegin(); it != container.cend(); ++it)
        std::cout << *it << std::endl;
    return 0;
}