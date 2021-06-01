#include <iostream>
#include <string>

class SalesItem
{

public:
    std::string bookNo;
    unsigned unit_sold;
    double revenue;
    SalesItem(std::string s, unsigned cnt, double rev) : bookNo(s), unit_sold(cnt), revenue(rev * cnt) {}
    SalesItem(std::string s) : SalesItem(s, 0, 0) {}
    SalesItem(std::istream &is) { read(is, *this); }
};

int main()
{
    SalesItem first_item(std::cin);  // SalesItem(std::istream &is);
    SalesItem next;                  // SalesItem(std::string s = "");
    SalesItem last("9-999-99999-9"); // SalesItem(std::string s = "");
    return 0;
}