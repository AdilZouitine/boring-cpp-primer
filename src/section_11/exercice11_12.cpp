#include <iostream>
#include <string>
#include <utility>
#include <vector>

void print_vector(std::vector<std::pair<std::string, int>> &vec_pair)
{
    for (std::pair<std::string, int> &p : vec_pair)
        std::cout << p.first << " , " << p.second << std::endl;
}

int main()
{
    std::vector<std::pair<std::string, int>> vec_pair;
    std::string str;
    int i;
    while (std::cin >> str >> i)
        vec_pair.push_back(std::make_pair(str, i));

    print_vector(vec_pair);
    return 0;
}