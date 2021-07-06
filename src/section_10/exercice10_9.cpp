#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void print_vector(std::vector<std::string> &vs)
{
    for (const auto &str : vs)
        std::cout << str << std::endl;
    std::cout << std::endl;
}

void elimDups(std::vector<std::string> &words)
{
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main()
{
    std::vector<std::string> vs{"bonjour", "hello", "salam", "bonjour"};
    print_vector(vs);
    elimDups(vs);
    print_vector(vs);
    return 0;
}