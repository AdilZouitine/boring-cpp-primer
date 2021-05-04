#include <iostream>
#include <vector>
#include <iterator>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

int main()
{
    vector<int> v{0, 1, 2, 3, 4, 5, 6};
    int array[v.size()];
    int *bg = array;
    int *ed = array + v.size();
    for (auto &i : v)
        *bg++ = i;

    for (bg = array; bg != ed; ++bg)
        cout << *bg << ' ';
    cout << endl;
    return 0;
}