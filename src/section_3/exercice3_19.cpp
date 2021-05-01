#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print_int(const vector<int> &array)
{
    cout << array.size() << endl;

    for (int elem : array)
    {
        cout << elem << endl;
    }
}

int main()
{
    vector<int> v1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v2(10, 42);
    vector<int> v3;
    vector<int> v4(10);

    for (int i = 0; i < 10; i++)
    {
        v3.push_back(42);
    }

    for (int &elem : v4)
        elem = 42;

    cout << "v1" << endl;
    print_int(v1);

    cout << "v2" << endl;
    print_int(v2);

    cout << "v3" << endl;
    print_int(v3);

    cout << "v4" << endl;
    print_int(v4);

    return 0;
}