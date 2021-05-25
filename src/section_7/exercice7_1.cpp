#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct SalesItem
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

void print_SalesItem(const SalesItem &elem)
{
    cout << "Item :"
         << elem.bookNo << " Unit sold:" << elem.units_sold
         << " Revenue:" << elem.revenue << endl;
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
            total.units_sold += trans.units_sold;
            total.revenue += trans.revenue;
        }
        else
        {
            print_SalesItem(total);
            total.bookNo = trans.bookNo;
            total.units_sold = trans.units_sold;
            total.revenue = trans.revenue;
        }
    }
    print_SalesItem(total);
    return 0;
}