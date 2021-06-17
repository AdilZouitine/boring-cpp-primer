#include <iostream>
#include <list>
#include <vector>
#include <iterator>

void print_container(std::vector<int> vect)
{
    for (const int &value : vect)
        std::cout << value << std::endl;
}

void print_container(std::list<int> li)
{
    for (const int &value : li)
        std::cout << value << std::endl;
}

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::list<int> ilist(std::begin(ia), std::end(ia));
    std::vector<int> ivect(std::begin(ia), std::end(ia));

    std::cout << "ilist" << std::endl;
    print_container(ilist);
    std::cout << "ivect" << std::endl;
    print_container(ivect);

    for (std::list<int>::const_iterator it = ilist.cbegin(); it != ilist.cend();)
    {
        if (*it % 2)
            ++it;
        else
            it = ilist.erase(it);
    }

    for (std::vector<int>::const_iterator it = ivect.cbegin(); it != ivect.cend();)
    {
        if (*it % 2)
            it = ivect.erase(it);
        else
            ++it;
    }

    std::cout << "ilist" << std::endl;
    print_container(ilist);
    std::cout << "ivect" << std::endl;
    print_container(ivect);

    return 0;
}