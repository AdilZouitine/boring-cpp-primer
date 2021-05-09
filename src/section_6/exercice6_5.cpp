#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int &n)
{
    if (n < 0)
        return -n;
    return n;
}

int main()
{
    cout << abs(-10) << " " << abs(10) << endl;
    return 0;
}