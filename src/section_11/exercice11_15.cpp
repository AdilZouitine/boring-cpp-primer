#include <map>
#include <iostream>

int main()
{
    std::map<int, int> mi;
    int a, b;
    while (std::cin >> a >> b)
    {
        std::map<int, int>::iterator it = mi.find(a);
        if (it != mi.end())
            it->second = b;
        else
            mi.insert({a, b});
    }
    for (std::map<int, int>::const_iterator it = mi.cbegin(); it != mi.cend(); ++it)
        std::cout << it->first << " : " << it->second << std::endl;

    return 0;
}