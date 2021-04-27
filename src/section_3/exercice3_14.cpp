#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int value;
    vector<int> sequence_int;
    while (cin >> value)
    {
        sequence_int.push_back(value);
    }
    return 0;
}