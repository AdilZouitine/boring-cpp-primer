#include <algorithm>
#include <vector>
#include <list>
#include <iostream>

int main()
{
    std::vector<int> vec;
    std::list<int> lst;
    int i;
    while (std::cin >> i)
        lst.push_back(i);
    vec.resize(lst.size());
    std::copy(lst.cbegin(), lst.cend(), vec.begin());

    std::vector<int> vec2;
    // vec.reserve(10);
    vec2.resize(10);
    std::fill_n(vec2.begin(), 10, 0);
    return 0;
}