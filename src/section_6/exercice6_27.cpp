#include <iostream>
#include <iterator>
#include <initializer_list>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> li)
{
    int sum_elem{0};
    for (auto beg = li.begin(); beg != li.end(); ++beg)
        sum_elem += *beg;

    return sum_elem;
}

int main()
{

    cout << sum({0, 1, 2, 3, 4, 5, 6, 7, 8, 9}) << endl;

    return 0;
}