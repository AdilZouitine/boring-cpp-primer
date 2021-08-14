#include <iostream>
#include <map>
#include <vector>
#include <string>

void add_family(std::map<std::string, std::vector<std::string>> &family_map, const std::string &name)
{
    if (family_map.find(name) == family_map.end())
    {
        family_map[name] = std::vector<std::string>();
        return;
    }
    std::cout << "Name " << name << " Already in the input map" << std::endl;
}

void add_children(std::map<std::string, std::vector<std::string>> &family_map, const std::string &name, const std::string &first_name)
{
    if (family_map.find(name) != family_map.end())
    {
        family_map[name].push_back(first_name);
        return;
    }

    std::cout << "Note added because the name " << name << " is not in the input map" << std::endl;
}

// Example from jaege/cpp_primer
int main()
{
    std::map<std::string, std::vector<std::string>> families;
    add_family(families, "Zhang");
    add_family(families, "Li");
    add_family(families, "Wang");
    add_family(families, "Zhang"); // Error

    add_children(families, "Zhang", "San");
    add_children(families, "Zhang", "Bao");
    add_children(families, "Zhang", "Tian");
    add_children(families, "Li", "Si");
    add_children(families, "Wang", "Wu");
    add_children(families, "Wang", "San");
    add_children(families, "Zhao", "Liu"); // Error

    for (const auto &family : families)
        for (const auto &name : family.second)
            std::cout << family.first << " " << name << std::endl;

    return 0;
}