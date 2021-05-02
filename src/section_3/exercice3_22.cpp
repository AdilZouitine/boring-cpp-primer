#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string current;
    vector<string> text;
    while (getline(cin, current))
        text.push_back(current);

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
        for (auto &elem : *it)
            elem = toupper(elem);

    for (auto elem : text)
        if (elem.empty())
            cout << endl;
        else
            cout << elem << ' ';

    return 0;
}