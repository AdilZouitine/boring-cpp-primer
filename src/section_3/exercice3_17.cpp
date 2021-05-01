#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void uppercase_string()
{
    string word;
    vector<string> upper_words;
    while (cin >> word)
    {
        for (auto &c : word)
            c = toupper(c);
        upper_words.push_back(word);
    }

    for (string uw : upper_words)
        cout << uw << ' ';
    cout << endl;
}

int main()
{
    uppercase_string();
    return 0;
}