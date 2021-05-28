#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct SalesItem
{
    SalesItem() = default;
    SalesItem(const string &s);
    SalesItem(std::istream &);
    SalesItem(const string &s, unsigned n, double p);
    string isbn() const { return bookNo; }
    SalesItem &combine(const SalesItem &);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

SalesItem::SalesItem(const string &s)
{
    bookNo = s;
    units_sold = 0;
    revenue = 0.0;
}
SalesItem::SalesItem(const string &s, unsigned n, double p)
{
    bookNo = s;
    units_sold = n;
    revenue = n * p;
}

SalesItem::SalesItem(std::istream &is)
{
    double price = 0;
    is >> bookNo >> units_sold >> price;
    revenue = units_sold * price;
}

SalesItem &SalesItem::combine(const SalesItem &item)
{
    units_sold += item.units_sold;
    revenue += item.revenue;
    return *this;
}

std::ostream &print(std::ostream &os, const SalesItem &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << endl;
    return os;
}
int main()
{
    SalesItem d1;
    SalesItem d2("0-201-78345-X");
    SalesItem d3("0-201-78345-X", 5, 2.5);
    SalesItem d4(cin);

    print(cout, d1) << endl;
    print(cout, d2) << endl;
    print(cout, d3) << endl;
    print(cout, d4) << endl;

    return 0;
}
