#include <string>

using std::string;

bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;

    auto size = (str1.size() < str2.size())
                    ? str1.size()
                    : str2.size();
}

int main()
{
    return 0;
}