#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int &n)
{
    int product = 1;
    for (int i = 1; i <= n; ++i)
        product *= i;
    return product;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}