#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string text;
    cin >> text;
    int a_cpt = 0, e_cpt = 0, i_cpt = 0, o_cpt = 0, u_cpt = 0, y_cpt = 0;

    for (auto const &c : text)
    {
        if (c == 'a')
            ++a_cpt;
        else if (c == 'e')
            ++e_cpt;
        else if (c == 'i')
            ++i_cpt;
        else if (c == 'o')
            ++o_cpt;
        else if (c == 'u')
            ++u_cpt;
        else if (c == 'y')
            ++y_cpt;
    }
    cout << "Number of a is : " << a_cpt << endl;
    cout << "Number of e is : " << e_cpt << endl;
    cout << "Number of i is : " << i_cpt << endl;
    cout << "Number of o is : " << o_cpt << endl;
    cout << "Number of u is : " << u_cpt << endl;
    cout << "Number of y is : " << y_cpt << endl;
    return 0;
}