#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int add(const int &a, const int &b)
{
    return a + b;
}
int sub(const int &a, const int &b)
{
    return a - b;
}

int mult(const int &a, const int &b)
{
    return a * b;
}

int div(const int &a, const int &b)
{
    if (b != 0)
        return a / b;
    else
        throw std::runtime_error("Divide by 0.");
}

int main()
{
    vector<int (*)(const int &, const int &)> v;
    v.push_back(add);
    v.push_back(mult);
    v.push_back(div);
    v.push_back(sub);

    int a = 12, b = 6;
    for (auto const &fn : v)
        cout << fn(a, b) << endl;

    return 0;
}