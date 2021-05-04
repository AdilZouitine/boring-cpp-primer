#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int array[5] = {0, 1, 2, 3, 4};
    int array_copy[5];

    for (int i = 0; i < 5; ++i)
        array[i] = array_copy[i];

    vector<int> v1;
    for (int i = 0; i < 5; ++i)
        v1.push_back(i);

    vector<int> v2(v1);
    return 0;
}