#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_int_vector(vector<int> &array)
{
    for (auto elem : array)
        cout << elem << " ";
    cout << endl;
}

int main()
{
    vector<int> array(10);
    for (int i = 0; i < 10; ++i)
        cin >> array[i];

    for (auto it = array.begin(); it != array.end(); ++it)
        *it *= 2;

    print_int_vector(array);

    return 0;
}