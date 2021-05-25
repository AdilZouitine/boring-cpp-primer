#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int elem_1(const int &a, const int &b)
{
    return a;
}

int main()
{
    vector<int (*)(const int &, const int &)> v;
    return 0;
}