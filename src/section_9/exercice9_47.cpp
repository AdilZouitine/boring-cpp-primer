#include <iostream>
#include <string>

void find_num_alpha_first_of(const std::string &str, const std::string &to_find)
{
    std::string::size_type pos = 0;
    while (pos = str.find_first_of(to_find, pos) != std::string::npos)
        std::cout << "Find character " << str[pos] << " at " << pos << std::endl;
    ++pos;
}

void find_num_alpha_last_of(const std::string &str, const std::string &to_find)
{
    std::string::size_type lastpos = 0;
    std::string::size_type pos = 0;
    while ((pos = str.find_first_not_of(to_find, pos)) != std::string::npos)
    {
        for (auto i = lastpos; i != pos; ++i)
            std::cout << "Find character " << str[i] << " at " << i << std::endl;
        lastpos = ++pos;
    }
    for (auto i = lastpos; i != str.size(); ++i)
        std::cout << "Find character " << str[i] << " at " << i << std::endl;
}

int main()
{

    return 0;
}