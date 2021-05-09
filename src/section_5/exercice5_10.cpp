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
        switch (c)
        {
        case 'A':
        case 'a':
            ++a_cpt;
            break;
        case 'E':
        case 'e':
            ++e_cpt;
            break;
        case 'I':
        case 'i':
            ++i_cpt;
            break;

        case 'O':
        case 'o':
            ++o_cpt;
            break;
        case 'U':
        case 'u':
            ++u_cpt;
            break;
        case 'Y':
        case 'y':
            ++y_cpt;
            break;
        default:
            break;
        }
    }
    cout << "Number of a is : " << a_cpt << endl;
    cout << "Number of e is : " << e_cpt << endl;
    cout << "Number of i is : " << i_cpt << endl;
    cout << "Number of o is : " << o_cpt << endl;
    cout << "Number of u is : " << u_cpt << endl;
    cout << "Number of y is : " << y_cpt << endl;
    return 0;
}