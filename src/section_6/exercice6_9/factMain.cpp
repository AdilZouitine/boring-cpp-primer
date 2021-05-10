#include <iostream>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter an integer : " << endl;
    int n, fact_n;
    cin >> n;
    fact_n = fact(n);

    cout << "Factorial is : " << fact_n << endl;
    return 0;
}