#include <iostream>

int main()
{
    std::cout << "Enter two integer" << std::endl;
    int number_1 = 0, number_2 = 0;
    std::cin >> number_1 >> number_2;

    if (number_1 == number_2)
    {
        return 0;
    }

    if (number_1 < number_2)
    {
        int temp;
        temp = number_1;
        number_1 = number_2;
        number_2 = temp;
    }

    while (number_2 < number_1 - 1)
    {
        ++number_2;
        std::cout << number_2 << std::endl;
    }

    return 0;
}