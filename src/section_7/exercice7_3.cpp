#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct SalesItem
{
    std::string isbn() const { return bookNo; }
    SalesItem &combine(const SalesItem &);
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

SalesItem &SalesItem::combine(const SalesItem &item)
{
    units_sold += item.units_sold;
    revenue += item.revenue;
    return *this;
}

int main()
{
    return 0;
}