#include <iostream>

int main()
{
    int i;
    int *ptr_i = &i;

    i = 5;

    std::cout << "Value of i : " << i << " Value of the pointer of i "
              << ptr_i << std::endl;
    i = 10;

    std::cout << "Value of i : " << i << " Value of the pointer of i "
              << ptr_i << std::endl;
    return 0;
}