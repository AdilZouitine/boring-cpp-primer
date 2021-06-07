#include <iostream>
#include <string>
#include <sstream>

std::istream &read_stream(std::istream &is)
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
    std::string str;
    std::getline(std::cin, str);
    std::istringstream iss(str);
    read_stream(iss);
    return 0;
}