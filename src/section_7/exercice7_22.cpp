#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Person
{
    friend std::istream &read(std::istream &is, Person &people);
    // friend std::ostream &print(std::ostream &os, Person &people);

public:
    Person() : name(""), address("") {}
    Person(const string &n) : name(n) {}
    Person(const string &n, const string &a) : name(n), address(a) {}
    Person(std::istream &);
    // const because it doesn't change the object
    string get_name() const { return name; }
    string get_address() const { return address; }

private:
    string name;
    string address;
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

Person::Person(std::istream &is)
{
    read(is, *this);
}

int main()
{
    Person h1;
    Person h2("geoffrey", "Bolmier avenue");
    Person h3("Geofrey");
    Person h4(cin);
    print(std::cout, h1) << endl;
    print(std::cout, h2) << endl;
    print(std::cout, h3) << endl;
    print(std::cout, h4) << endl;
    return 0;
}