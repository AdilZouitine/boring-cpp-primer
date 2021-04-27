#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void concatenate_sting()
{
    string total, current;
    while (cin >> current)
    {
        total += current;
    }
    cout << total << endl;
}

// too lazy for conding the part 2
int main()
{
    concatenate_sting();
    return 0;
}