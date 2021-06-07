#include <iostream>
#include <string>

std::istream &read_steam(std::istream &is)
{
    is.clear();
    std::string current_str;

    while (is >> current_str)
        std::cout << current_str << " ";
    std::cout << std::endl;
    return is;
}

int main()
{
    read_steam(std::cin);
    return 0;
}