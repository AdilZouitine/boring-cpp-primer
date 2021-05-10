#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap_ptr(int *a, int *b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void swap_reference(int &a, int &b)
{
    int tmp;
    tmp = b;
    b = a;
    a = tmp;
}

int main()
{
    int a, b;
    cout << "Pointer mode" << endl;
    cout << "Enter a, b" << endl;
    cin >> a >> b;
    swap_ptr(&a, &b);
    cout << a << " " << b << endl;

    cout << "Reference mode" << endl;
    cout << "Enter a, b" << endl;
    cin >> a >> b;
    swap_reference(a, b);
    cout << a << " " << b << endl;

    return 0;
}