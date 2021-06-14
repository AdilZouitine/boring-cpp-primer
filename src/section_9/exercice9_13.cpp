#include <list>
#include <vector>

int main()
{
    std::list<int> l1{1, 2, 3};
    std::vector<int> vi{1, 2, 3};
    std::vector<double> v1(l1.begin(), l1.end());
    std::vector<double> v2(vi.begin(), vi.end());
    return 0;
}