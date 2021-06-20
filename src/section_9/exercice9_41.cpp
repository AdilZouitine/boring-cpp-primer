#include <string>
#include <vector>
#include <iostream>

int main()
{

    std::vector<char> vs;
    char word;
    while (std::cin >> word)
        vs.push_back(word);

    std::string init_string(vs.begin(), vs.end());
    std::cout << init_string << std::endl;
    return 0;
}