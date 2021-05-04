#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void sum_adjacent(vector<int> &array)
{
    for (auto it = array.cbegin(); it != array.cend() - 1; ++it)
        cout << *it + *(it + 1) << ' ';
    cout << endl;
}

void sum_symetric(vector<int> &array)
{
    auto mid = array.cbegin() + (array.cend() - array.cbegin() + 1) / 2;
    for (auto it = array.cbegin(); it != mid; ++it)
        cout << *it + *(array.cend() - 1 - (it - array.cbegin())) << ' ';
    cout << endl;
}

int main()
{
    vector<int> values;
    int value;
    while (cin >> value)
    {
        values.push_back(value);
    }
    sum_adjacent(values);
    sum_symetric(values);
    return 0;
}