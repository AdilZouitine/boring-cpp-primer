#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

int main()
{
    std::vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = std::accumulate(vi.cbegin(), vi.cend(), 0);
    std::cout << "Sum is equals to : " << sum << std::endl;
    return 0;
}