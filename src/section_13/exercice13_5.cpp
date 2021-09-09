#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string())
        : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &base)
        : ps(new std::string(*base.ps)), i(base.i) {}
    const std::string &get() const { return *ps; }
    void set(const std::string &s) { *ps = s; }

private:
    std::string *ps;
    int i;
};

int main()
{
    std::string word = "World";
    HasPtr hp1 = word;
    HasPtr hp2 = hp1;
    hp1.set("Hello");

    std::cout << hp1.get() << " " << hp2.get() << std::endl;

    return 0;
}