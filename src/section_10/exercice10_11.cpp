#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

void print_vector(std::vector<std::string> &vs)
{
    for (const auto &str : vs)
        std::cout << str << std::endl;
    std::cout << std::endl;
}

bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

void elimDups(std::vector<std::string> &words)
{
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main()
{
    std::vector<std::string> vs{"bonjour", "hello", "salam", "bonjour", "Konichiwa"};
    print_vector(vs);
    elimDups(vs);
    print_vector(vs);
    std::stable_sort(vs.begin(), vs.end(), isShorter);
    return 0;
}