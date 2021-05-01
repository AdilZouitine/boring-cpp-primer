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

void print_string(const vector<string> &array)
{
    cout << array.size() << endl;

    for (string elem : array)
    {
        cout << elem << endl;
    }
}

int main()
{
    vector<int> v1;              // a
    vector<int> v2(10);          // b
    vector<int> v3(10, 42);      //  c
    vector<int> v4{10};          //  d
    vector<int> v5{10, 42};      //  e
    vector<string> v6{10};       // f
    vector<string> v7{10, "hi"}; // g

    cout << "V1" << endl;
    print_int(v1);

    cout << "V2" << endl;
    print_int(v2);

    cout << "V3" << endl;
    print_int(v3);

    cout << "V4" << endl;
    print_int(v4);

    cout << "V5" << endl;
    print_int(v5);

    cout << "V6" << endl;
    print_string(v6);

    cout << "V7" << endl;
    print_string(v7);

    return 0;
}