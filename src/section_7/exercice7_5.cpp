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

int main()
{
    Person human;
    human.name = "Geof";
    human.address = "Avenue du bolmier";
    cout << "Name : " << human.get_name() << endl;
    cout << "Address : " << human.get_address() << endl;
    return 0;
}