#include <iostream>
#include <string>

struct Sales_item
{
    std::string book_num;
    unsigned unit_sold = 0;
    double revenue = 0.0;
};

int exo_120()
{
    double price = 0;
    Sales_item item;
    while (std::cin >> item.book_num >> item.unit_sold >> price)
    {
        item.revenue = price * item.unit_sold;
        std::cout << "Book number : " << item.book_num << " Number of unit sold :"
                  << item.unit_sold << " Total revenue is : " << item.revenue
                  << std::endl;
    }
    return 0;
}

int exo_121()
{
    Sales_item item_1, item_2;
    std::cout << "Enter the first item" << std::endl;

    std::cin >> item_1.book_num >> item_1.unit_sold;

    std::cout << "Enter the second item" << std::endl;
    std::cin >> item_2.book_num >> item_2.unit_sold;

    std::cout << "Enter the price" << std::endl;
    double price = 0.0;
    std::cin >> price;
    item_1.revenue = item_1.unit_sold * price;
    item_2.revenue = item_2.unit_sold * price;

    if (item_1.book_num == item_2.book_num)
    {
        double sum_revenue = 0;
        unsigned sum_item_sold = 0;

        sum_revenue = item_1.revenue + item_2.revenue;
        sum_item_sold = item_1.unit_sold + item_2.unit_sold;

        if (sum_item_sold != 0)
        {
            std::cout
                << "The Sales item sum is : " << sum_revenue << std::endl;
            std::cout << "Value per unit: " << sum_revenue / sum_item_sold
                      << std::endl;
        }

        return 0;
    }

    std::cout << "Both item must have same ISBN number" << std::endl;
    return -1;
}

int exo_122()
{
    Sales_item total, current_item;
    double sum_transaction = 0.0;
    double price = 0.0;
    std::string current_book_num;

    if (std::cin >> total.book_num >> total.unit_sold >> price)
    {
        total.revenue = total.unit_sold * price;
        while (std::cin >> current_item.book_num >> current_item.unit_sold)
        {
            if (total.book_num == current_item.book_num)
            {
                total.unit_sold += current_item.unit_sold;
                total.revenue += current_item.revenue;
            }
            else
            {
                std::cout << "Both item must have same ISBN number" << std::endl;
                return -1;
            }
        }
    }
    std::cout << "Book number : " << total.book_num << " Number of unit sold :"
              << total.unit_sold << " Total revenue is : " << total.revenue
              << std::endl;
    return 0;
}

int main()
{
    exo_120();
    exo_121();
    exo_122();
    return 0;
}