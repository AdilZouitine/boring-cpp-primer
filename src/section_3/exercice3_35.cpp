#include <iostream>
#include <iterator>

using std::begin;
using std::cout;
using std::end;
using std::endl;

int main()
{
    int array[10];
    for (int *it_b = begin(array), *it_e = end(array); it_b != it_e; ++it_b)
        *it_b = 0;

    for (int elem : array)
        cout << elem << ' ';
    cout << endl;
    return 0;
}