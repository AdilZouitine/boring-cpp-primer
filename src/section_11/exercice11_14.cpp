#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

// TODO: Finish

void add_family(std::map<std::string, std::vector<std::pair<std::string, std::string>>> &family_map, const std::string &name)
{
    if (family_map.find(name) == family_map.end())
    {
        family_map[name] = std::vector<std::pair<std::string, std::string>>();
        return;
    }
    std::cout << "Name " << name << " Already in the input map" << std::endl;
}

void add_children(std::map<std::string, std::vector<std::pair<std::string, std::string>>> &family_map, const std::string &name, const std::pair<std::string, std::string> &children_info)
{
    if (family_map.find(name) != family_map.end())
    {
        family_map[name].push_back(children_info);
        return;
    }

    std::cout << "Note added because the name " << name << " is not in the input map" << std::endl;
}

// Example from jaege/cpp_primer
int main()
{
    std::map<std::string, std::vector<std::pair<std::string, std::string>>> families;
    add_family(families, "Zhang");
    add_family(families, "Li");
    add_family(families, "Wang");
    add_family(families, "Zhang"); // Error

    add_children(families, "Zhang", std::make_pair("San", "1 st september"));
    add_children(families, "Zhang", std::make_pair("Bao", "1 st september"));
    add_children(families, "Zhang", std::make_pair("Tian", "1 st september"));
    add_children(families, "Li", std::make_pair("Si", "1 st september"));
    add_children(families, "Wang", std::make_pair("Wu", "1 st september"));
    add_children(families, "Wang", std::make_pair("San", "1 st september"));
    add_children(families, "Zhao", std::make_pair("Liu", "1 st september")); // Error

    for (const auto &family : families)
        for (const auto &name : family.second)
            std::cout << family.first << "   name: " << name.first << " Birthday :" << name.second << std::endl;

    return 0;
}