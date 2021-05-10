#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool check_capital(const string &str)
{
    for (char const &c : str)
        if (isupper(c))
            return true;
    return false;
}

void all_lower(string &str)
{
    for (char &c : str)
    {
        if (c >= 'A' && c <= 'Z')
            c -= 'A' - 'a';
    }
}

int main()
{
    string chain;
    cout << "Enter a string" << endl;
    getline(cin, chain);
    cout << "Capital letter is present: " << check_capital(chain) << endl;
    all_lower(chain);
    cout << "To lower" << endl;
    cout << chain << endl;
}