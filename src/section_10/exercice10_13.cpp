#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

bool isMore5(const std::string &str)
{
    return str.size() > 5;
}

int main()
{
    std::vector<std::string> words;
    for (std::string s; std::cin >> s; words.push_back(s))
    {
    }
    auto long_bg = std::partition(words.begin(), words.end(), isMore5);
    for (auto it = words.begin(); it != long_bg; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}