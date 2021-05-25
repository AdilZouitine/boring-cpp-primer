#include <iostream>

using std::cout;
using std::endl;

void f(int a)
{
    cout << "f1" << endl;
}
void f(int a, int b)
{
    cout << "f2" << endl;
}

void f(double a, double b = 3.14)
{
    cout << "f3" << endl;
}

void f()
{
    cout << "f4" << endl;
}

int main()
{
    // exercice6_51.cpp: In function ‘int main()’:
    // exercice6_51.cpp:27:15: error: call of overloaded ‘f(double, int)’ is ambiguous
    // 27 |     f(2.56, 42);
    //     |               ^
    // exercice6_51.cpp:10:6: note: candidate: ‘void f(int, int)’
    // 10 | void f(int a, int b)
    //     |      ^
    // exercice6_51.cpp:15:6: note: candidate: ‘void f(double, double)’
    // 15 | void f(double a, double b = 3.14)
    //     |      ^
    // f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}