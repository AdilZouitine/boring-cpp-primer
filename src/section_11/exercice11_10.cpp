#include <iostream>
#include <list>
#include <map>
#include <string>

int main()
{
    std::map<std::string, std::list<int>> words{
        {"bolmier", {1, 2, 3}},
        {"Raph", {4, 5, 7}}};

    for (const auto &w : words)
    {
        std::cout << w.first << " :";
        for (const auto &l : w.second)
        {
            std::cout << " " << l;
        }
        std::cout << std::endl;
    }
    return 0;
}