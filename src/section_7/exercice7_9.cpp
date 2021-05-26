#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Person
{
    string name;
    string address;
    // const because it doesn't change the object
    string get_name() const { return name; }
    string get_address() const { return address; }
};

std::istream &read(std::istream &is, Person &people)
{
    is >> people.name >> people.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &people)
{
    os << people.get_name() << " " << people.get_address();
    return os;
}

int main()
{
    Person human;
    read(std::cin, human);
    print(std::cout, human) << endl;
    return 0;
}