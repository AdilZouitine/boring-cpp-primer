#include <iostream>
#include <map>
#include <string>

int main()
{
    std::string word;
    std::map<std::string, size_t> counter;
    while (std::cin >> word)
        ++counter[word];

    for (const auto &w : counter)
        std::cout << "Word : " << w.first << " Count : " << w.second << std::endl;
    return 0;
}