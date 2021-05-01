#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> values;
    int value;
    while (cin >> value)
    {
        values.push_back(value);
    }

    // adjacent sum
    cout << "Adjacent Sum" << endl;
    for (int index = 1; index < values.size(); index++)
    {
        cout << values[index - 1] + values[index] << endl;
    }

    // Mirror sum
    cout << "Mirror Sum" << endl;
    unsigned max_size = values.size();

    for (int index = 0; index < values.size() / 2; index++)
    {
        cout << values[index] + values[max_size - index - 1] << endl;
    }

    return 0;
}