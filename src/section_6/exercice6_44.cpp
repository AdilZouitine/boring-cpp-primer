#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

inline const bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    string example_1 = "Foo", example_2 = "LongFoo";
    cout << isShorter(example_1, example_2) << endl;
    return 0;
}