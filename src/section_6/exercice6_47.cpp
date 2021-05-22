#include <iostream>
#include <vector>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::iterator;
using std::vector;

void print_content_recursive(const vector<int>::iterator beg, const vector<int>::iterator end)
{
#ifndef NDEBUG
    cerr << "In function" << __func__ << ":" << end - beg << std::endl;
#endif
    if (beg == end)
        return;
    cout << *beg << endl;
    return print_content_recursive(beg + 1, end);
}

int main()
{
    vector<int> v{34, 23, 1, 3, 5, 7};

    print_content_recursive(v.begin(), v.end());
    return 0;
}