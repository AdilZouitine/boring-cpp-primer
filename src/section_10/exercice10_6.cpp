#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vi{
        1,
        1,
        1,
        1,
        1,
    };
    std::fill_n(vi.begin(), vi.size(), 0);
    return 0;
}