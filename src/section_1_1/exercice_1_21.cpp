#include <iostream>
#include "Sales_item.h"

using namespace std;
int main()
{
    Sales_item item_1; 
    Sales_item item_2;

    cin >> item_1;
    cin >> item_2;
    if (item_1.isbn() == item_2.isbn())
    {
        cout << item_1 + item_2 << endl;
    }
    else
    {
        cout << "Item 1 and Item 2 doesn't have thse same ISBN" << endl;
    }


    
    return 0;
}