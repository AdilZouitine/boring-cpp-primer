#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void part_1()
{
    string elem_1, elem_2;
    cout << "Enter elem 1" << endl;
    cin >> elem_1;
    cout << "Entern elem 2" << endl;
    cin >> elem_2;

    if (elem_1 == elem_2)
    {
        cout << "Elem_1 and Elem_2 are the same" << endl;
    }
    else if (elem_1 > elem_2)
    {
        cout << "Elem 1 is larger than Elem 2" << endl;
    }
    else
    {
        cout << "Elem 2 is larger than Elem 1" << endl;
    }
}

void part_2()
{
    string elem_1, elem_2;
    cout << "Enter elem 1" << endl;
    cin >> elem_1;
    cout << "Entern elem 2" << endl;
    cin >> elem_2;

    if (elem_1.size() == elem_2.size())
    {
        cout << "Elem_1 and Elem_2 have same lenght" << endl;
    }
    else if (elem_1.size() > elem_2.size())
    {
        cout << "Elem 1 is longer than Elem 2" << endl;
    }
    else
    {
        cout << "Elem 2 is longer than Elem 1" << endl;
    }
}

int main()
{
    part_1();
    part_2();
    return 0;
}