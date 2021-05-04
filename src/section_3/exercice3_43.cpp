#include <iostream>
#include <vector>
#include <iterator>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::vector;

int main()
{
    constexpr size_t c_row = 3;
    constexpr size_t c_col = 4;
    int ia[c_row][c_col] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};

    for (const int(&row)[c_col] : ia)
    {
        for (const int &col : row)
            cout << col << '\t';
        cout << endl;
    }

    for (size_t i = 0; i != c_row; ++i)
    {
        for (size_t j = 0; j != c_col; ++j)
            cout << ia[i][j] << '\t';
        cout << endl;
    }
    for (int(*pr)[c_col] = ia; pr != ia + c_row; ++pr)
    {
        for (int *pc = *pr; pc != *pr + c_col; ++pc)
            cout << *pc << '\t';
        cout << endl;
    }
    return 0;
}