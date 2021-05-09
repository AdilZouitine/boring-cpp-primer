#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double divide(int &a, int &b)
{
    double divided = a / b;
    return divided;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << divide(a, b) << endl;
}