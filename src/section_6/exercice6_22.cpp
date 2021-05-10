#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap_ptr(int **ptr_1, int **ptr_2)
{
    int *ptr_temp = *ptr_2;
    *ptr_2 = *ptr_1;
    *ptr_1 = ptr_temp;
}

void swap_ptr_ref(int *&ptr_1, int *&ptr_2)
{
    int *ptr_temp = ptr_2;
    ptr_2 = ptr_1;
    ptr_1 = ptr_temp;
}

int main()
{
    int v1, v2;
    cin >> v1 >> v2;
    int *ptr_1 = &v1, *ptr_2 = &v2;
    swap_ptr(&ptr_1, &ptr_2);
    cout << *ptr_1 << " " << *ptr_2 << endl;
    swap_ptr_ref(ptr_1, ptr_2);
    cout << *ptr_1 << " " << *ptr_2 << endl;
    return 0;
}