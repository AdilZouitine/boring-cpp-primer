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
    int array[] = {0, 1, 2, 3, 4, 5, 6};
    vector<int> v(begin(array), end(array));
    for (auto &elem : v)
        cout << elem << ' ';
    cout << endl;
    return 0;
}