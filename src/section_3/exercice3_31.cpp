#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int array[10];
    for (int i = 0; i < 10; ++i)
    {
        array[i] = i;
        cout << array[i] << ' ';
    }
    cout << endl;
    return 0;
}