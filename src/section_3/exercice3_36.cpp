#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec_array{0, 1, 2}, vec_array_2{0, 1, 2};
    int array[] = {0, 1, 2}, array_2[] = {0, 1, 2};
    bool is_equal = true;
    for (int i = 0; i < 3; ++i)
        if (array[i] != array_2[i])
        {
            is_equal = false;
            break;
        }
    cout << is_equal << endl;
    cout << (array == array_2) << endl;
    return 0;
}