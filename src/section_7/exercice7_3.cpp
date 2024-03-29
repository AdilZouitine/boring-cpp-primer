#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct SalesItem
{
    string isbn() const { return bookNo; }
    SalesItem &combine(const SalesItem &);
    void print_SalesItem();
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

SalesItem &SalesItem::combine(const SalesItem &item)
{
    units_sold += item.units_sold;
    revenue += item.revenue;
    return *this;
}

void SalesItem::print_SalesItem()
{
    cout << "Item :"
         << this->bookNo << " Unit sold:" << this->units_sold
         << " Revenue:" << this->revenue << endl;
}

int main()
{
    SalesItem total, trans;
    double price;
    cin >> total.bookNo >> total.units_sold >> price;
    total.revenue = total.units_sold * price;
    while (cin >> trans.bookNo >> trans.units_sold >> price)
    {
        trans.revenue = trans.units_sold * price;
        if (total.bookNo == trans.bookNo)
        {
            total.combine(trans);
        }
        else
        {
            total.print_SalesItem();
            total.bookNo = trans.bookNo;
            total.units_sold = trans.units_sold;
            total.revenue = trans.revenue;
        }
    }
    total.print_SalesItem();
    return 0;
}