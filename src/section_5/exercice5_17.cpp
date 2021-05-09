#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int prefix(vector<int> &arr1, vector<int> &arr2)
{
    for (int i; i < arr1.size(); ++i)
        if (arr1[i] != arr2[i])
            return 0;
    return 1;
}

int main()
{
    vector<int> v1{0, 1, 1, 2}, v2{0, 1, 1, 2, 3, 5, 8};
    if (v1.size() == v2.size())
    {
        if (v1 == v2)
        {
            cout << "Both vector are the same" << endl;
            return 0;
        }
        cout << "Both vector had same length  and not are the same" << endl;
    }
    else if (v1.size() < v2.size())
        if (prefix(v1, v2))
        {
            cout << "V1 is prefix of V2" << endl;
            return 0;
        }
        else
        {
            cout << "No prefix found" << endl;
            return 0;
        }
    else if (prefix(v2, v1))
    {
        cout << "V2 is prefix of V1" << endl;
        return 0;
    }
    else
    {
        cout << "No prefix found" << endl;
        return 0;
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <string>
// #include <sstream>

// void readVector(std::vector<int> &v) {
//   std::string str;
//   std::getline(std::cin, str);
//   std::stringstream ss(str);
//   int i;
//   while(ss >> i)
//     v.push_back(i);
//   //for (const auto &e : v)
//   //  std::cout << e << " ";
//   //std::cout << std::endl;
// }

// bool isPrefix(const std::vector<int> &v1, const std::vector<int> &v2) {
//   auto it1 = v1.cbegin(), it2 = v2.cbegin();
//   for (; it1 != v1.cend() && it2 != v2.cend(); ++it1, ++it2)
//     if (*it1 != *it2)
//       break;
//   return it1 == v1.cend() || it2 == v2.cend();
// }

// int main() {
//   std::vector<int> v1, v2;
//   readVector(v1);
//   readVector(v2);
//   std::cout << (isPrefix(v1, v2) ? "true" : "false") << std::endl;

//   return 0;
// }