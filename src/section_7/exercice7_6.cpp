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

std::istream &read(std::istream &is, SalesItem &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
}

std::ostream &print(std::ostream &os, const SalesItem &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

SalesItem add(const SalesItem &lhs, const SalesItem &rhs)
{
    SalesItem sum = lhs;
    sum.combine(rhs);
    return sum;
}

int main()
{
    return 0;
}