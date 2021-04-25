#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    Sales_item sum_item;

    std::cin >> sum_item;

    while (std::cin >> item)
    {
        if (item.isbn() == sum_item.isbn())
        {
            sum_item += item;
        }
    }

    std::cout << sum_item << std::endl;
    return 0;
}