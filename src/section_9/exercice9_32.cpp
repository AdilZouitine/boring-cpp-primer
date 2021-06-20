#include <vector>
using std::vector;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<int>::iterator bg = v.begin();
    while (bg != v.end())
    {
        ++bg;
        bg = v.insert(bg, 42);
        ++bg;
    }

    return 0;
}
