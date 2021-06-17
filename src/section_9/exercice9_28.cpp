#include <iostream>
#include <forward_list>
#include <string>

void print(std::forward_list<std::string> &sflist)
{
    for (auto &value : sflist)
        std::cout << value << std::endl;
}

void insert_after_find(std::forward_list<std::string> &sflist,
                       const std::string &to_find,
                       const std::string &to_insert)
{
    std::forward_list<std::string>::iterator prev_it_sflist = sflist.before_begin();
    std::forward_list<std::string>::iterator curr_it_sflist = sflist.begin();
    while (curr_it_sflist != sflist.end())
    {
        if (*curr_it_sflist == to_find)
        {
            sflist.insert_after(curr_it_sflist, to_insert);
            return;
        }
        else
        {
            prev_it_sflist = curr_it_sflist++;
        }
    }
    sflist.insert_after(prev_it_sflist, to_insert);
}

int main()
{
    std::string to_find_1 = "Bolmier", to_find_2 = "Zouzou", to_insert = "Cpp";
    std::forward_list<std::string> sflist{"Hola", "Bolmier", "Me", "Tac"}, sflist_2 = sflist;
    print(sflist);

    insert_after_find(sflist, to_find_1, to_insert);

    print(sflist);

    insert_after_find(sflist_2, to_find_2, to_insert);

    print(sflist_2);

    return 0;
}