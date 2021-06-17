#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v{1, 2, 3, 4}, v_void;

    std::vector<int>::const_iterator it = v.cbegin(), it_void = v_void.cbegin();

    std::cout << "v" << std::endl;
    std::cout << *it << std::endl;
    // std::cout << "v void" << std::endl;
    // std::cout << *it_void << std::endl;

    std::cout << "v" << std::endl;
    std::cout << v.front() << std::endl;
    // std::cout << "v void" << std::endl;
    // std::cout << v_void.front() << std::endl;

    std::cout << "v" << std::endl;
    std::cout << v.back() << std::endl;
    // std::cout << "v void" << std::endl;
    // std::cout << v_void.back() << std::endl;

    std::cout << "v" << std::endl;
    std::cout << v[0] << std::endl;
    // std::cout << "v void" << std::endl;
    // std::cout << v_void[0] << std::endl;
    return 0;
}