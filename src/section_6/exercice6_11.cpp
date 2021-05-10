#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(int &value)
{
    value = 0;
}

int main()
{
    int val = 42;
    cout << "Val is equals : " << val << endl;
    cout << "Reset ..." << endl;
    reset(val);
    cout << "Val is equals : " << val << endl;
    return 0;
}