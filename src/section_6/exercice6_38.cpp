#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

auto arrPtr(int i) -> int (&)[5]
{
    return i % 2 ? odd : even;
}

int main()
{
    int i;
    std::cin >> i;

    int(&arr)[5] = arrPtr(i);
    int *arr2 = arrPtr(i);

    std::cout << arr[0] << " " << arr2[0] << std::endl;
    return 0;
}