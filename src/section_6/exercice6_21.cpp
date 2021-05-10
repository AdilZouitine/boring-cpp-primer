#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int larger(const int &val, const int *ptr)
{
    if (val > *ptr)
        return val;
    return *ptr;
}

int main()
{
    int v1, v2;
    cin >> v1 >> v2;
    int *ptr_v2 = &v2;

    cout << larger(v1, ptr_v2) << endl;
    return 0;
}