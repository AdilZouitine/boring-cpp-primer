#include <vector>

int main()
{
    std::vector<int> v1{1, 2, 3}, v2{4, 5, 6, 7};
    const bool is_equal = v1 == v2;
    return 0;
}