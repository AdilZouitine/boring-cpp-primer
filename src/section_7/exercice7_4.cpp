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
};

int main()
{
    Person human;
    human.name = "Geof";
    human.address = "Avenue du bolmier";
    cout << human.name << "|" << human.address << endl;
    return 0;
}
