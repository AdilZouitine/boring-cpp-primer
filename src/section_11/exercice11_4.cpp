#include <iostream>
#include <map>
#include <string>
#include <algorithm>

int main()
{
    std::string word;
    std::map<std::string, size_t> counter;
    while (std::cin >> word)
    {
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        ++counter[word];
    }
    for (const auto &w : counter)
        std::cout << "Word : " << w.first << " Count : " << w.second << std::endl;
    return 0;
}
