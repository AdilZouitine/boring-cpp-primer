#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void get_line()
{
    string line;
    while (getline(cin, line))
    {
        cout << line << endl;
    }
}

void get_word()
{
    string word;
    while (cin >> word)
    {
        cout << word << endl;
    }
}

int main()
{
    get_line();
    get_word();
    return 0;
}