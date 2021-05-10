#include <iostream>
#include <iterator>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;

void print(int const &i)
{
    cout << i << endl;
}

void print(const int *beg, const int *end)
{
    while (beg != end)
    {
        cout << *beg++ << endl;
    }
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(i);
    print(begin(j), end(j));
    return 0;
}