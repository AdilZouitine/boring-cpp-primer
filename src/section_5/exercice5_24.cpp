#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double divide(int &a, int &b)
{
    if (b == 0)
    {
        throw std::domain_error("Can't divide by 0");
    }
    double divided = a / b;
    return divided;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << divide(a, b) << endl;
}