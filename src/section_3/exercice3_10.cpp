#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void replace_punctuation()
{
    string element;
    if (cin >> element)
    {
        for (char &c : element)
        {
            if (not ispunct(c))
            {
                cout << c;
            }
        }
        cout << endl;
    }
}

int main()
{
    replace_punctuation();
    return 0;
}