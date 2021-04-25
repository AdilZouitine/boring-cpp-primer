#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item_1;
    Sales_item item_2;

    std::cin >> item_1;
    std::cin >> item_2;
    if (item_1.isbn() == item_2.isbn())
    {
        std::cout << item_1 + item_2 << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Item 1 and Item 2 doesn't have thse same ISBN" << std::endl;
        return -1;
    }
}