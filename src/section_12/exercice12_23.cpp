#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string strtmp;
    std::cout << "Write first string" << std::endl;
    std::cin >> strtmp;
    const char *c1 = strtmp.c_str();

    std::cout
        << "Write second string" << std::endl;
    std::string strtmp2;

    std::cin >> strtmp2;
    const char *c2 = strtmp2.c_str();
    char *c3 = new char[std::strlen(c1) + std::strlen(c2) + 1];
    std::strcpy(c3, c1);
    std::strcat(c3, c2);
    std::cout << c3 << std::endl;
    delete[] c3;
    return 0;
}