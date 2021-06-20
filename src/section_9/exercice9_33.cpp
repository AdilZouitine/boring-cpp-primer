#include <vector>
#include <iostream>

int main()
{
    std::vector<int> vi;
    std::cout << "Size: " << vi.size()
              << " Capacity : " << vi.capacity() << std::endl;

    vi.push_back(42);
    std::cout << "Size: " << vi.size()
              << " Capacity : " << vi.capacity() << std::endl;

    for (std::vector<int>::size_type index = 0; index != 1337; ++index)
        vi.push_back(index);
    std::cout << "Size: " << vi.size()
              << " Capacity : " << vi.capacity() << std::endl;

    vi.shrink_to_fit();
    std::cout << "Size: " << vi.size()
              << " Capacity : " << vi.capacity() << std::endl;

    return 0;
}