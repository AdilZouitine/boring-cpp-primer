#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vi{1, 2, 3, 4, 5};
    std::vector<int>::const_reverse_iterator c_r_vi_begin = vi.crbegin();
    // while (c_r_vi_begin != vi.crend())
    // {
    //     std::cout << *c_r_vi_begin << " ";
    //     ++c_r_vi_begin;
    // }
    for (; c_r_vi_begin != vi.crend(); ++c_r_vi_begin)
        std::cout << *c_r_vi_begin << " ";

    std::cout << std::endl;
    return 0;
}