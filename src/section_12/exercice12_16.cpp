#include <memory>

int main()
{
    std::unique_ptr<int> p1(new int(12));
    std::unique_ptr<int> p2 = p1;
    return 0;
}