#include <list>
#include <string>
#include <vector>

int main()
{
    std::list<char *> char_list{"hello", "world", "bolmier"};
    std::vector<std::string> string_vector;
    string_vector.assign(char_list.begin(), char_list.end());
    return 0;
}