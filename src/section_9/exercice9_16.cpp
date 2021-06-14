#include <list>
#include <vector>

bool is_equals(std::vector<int> vec, std::list<int> li)
{
    if (vec.size() == li.size())
        return false;

    std::vector<int>::iterator it_vec = vec.begin();
    std::list<int>::iterator it_li = li.begin();
    for (; it_vec != vec.end() && it_li != li.end(); ++it_vec, ++it_li)
        if (*it_vec != *it_li)
            return false;

    return true;
}

int main()
{

    return 0;
}