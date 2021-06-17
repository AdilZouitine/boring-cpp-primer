#include <forward_list>
#include <iostream>

int main()
{
    std::forward_list<int> iflist{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::forward_list<int>::iterator prev_it_iflist = iflist.before_begin();
    std::forward_list<int>::iterator curr_it_iflist = iflist.begin();

    for (const int &value : iflist)
        std::cout << value << std::endl;

    while (curr_it_iflist != iflist.end())
    {
        if (*curr_it_iflist % 2 == 0)
        {
            prev_it_iflist = curr_it_iflist;
            ++curr_it_iflist;
        }
        else
            curr_it_iflist = iflist.erase_after(prev_it_iflist);
    }
    for (const int &value : iflist)
        std::cout << value << std::endl;

    return 0;
}