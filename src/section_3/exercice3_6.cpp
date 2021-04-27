#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void loop_replace()
{
    string element;
    cin >> element;
    for (auto &c : element)
    {
        c = 'X';
    }
    cout << element << endl;
}

int main()
{
    loop_replace();
    return 0;
}