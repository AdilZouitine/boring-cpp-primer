#include <vector>

int main()
{
    std::vector<int> v;
    std::vector<int> v2 = v;
    std::vector<int> v3(5);
    std::vector<int> v4{1, 2, 3, 4};
    std::vector<int> v5(4, 5);
    std::vector<int> v6(v4.begin(), v4.end());
    return 0;
}