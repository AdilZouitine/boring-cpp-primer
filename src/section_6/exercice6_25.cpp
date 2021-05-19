#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    if (argc < 3)
        return -1;
    string args(argv[1]);
    args += argv[2];
    cout << args << endl;
    return 0;
}