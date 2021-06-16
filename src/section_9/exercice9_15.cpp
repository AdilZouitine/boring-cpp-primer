// #include <vector>

// int main()
// {
//     std::vector<int> v1{1, 2, 3}, v2{4, 5, 6, 7};
//     const bool is_equal = v1 == v2;
//     return 0;
// }

#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v1 = {1, 3, 5, 7, 9, 12};
    std::vector<int> v2 = {1, 3, 9};

    std::cout << (v1 < v2 ? "v1 < v2" : "v2 < v1") << std::endl;

    return 0;
}