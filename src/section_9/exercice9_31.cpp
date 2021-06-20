#include <list>
#include <forward_list>
#include <iostream>

void remove_even_duplicate_odd(std::list<int> &li)
{
    for (std::list<int>::iterator it = li.begin(); it != li.end();)
    {
        if (*it % 2)
        {
            it = li.insert(it, *it);
            ++it;
            ++it;
        }
        else
            it = li.erase(it);
    }
}

void remove_even_duplicate_odd(std::forward_list<int> &fli)
{
    for (std::forward_list<int>::iterator pre = fli.before_begin(), cur = fli.begin(); cur != fli.end();)
    {
        if (*cur % 2)
        {
            pre = fli.insert_after(pre, *cur);
            ++pre;
            ++cur;
        }
        else
            cur = fli.erase_after(pre);
    }
}