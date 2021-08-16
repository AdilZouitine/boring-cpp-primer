#include <iostream>
#include <vector>
#include <memory>

typedef std::shared_ptr<std::vector<int>> vi_s_ptr;

vi_s_ptr VectorFactory()
{
    return std::make_shared<std::vector<int>>();
}

void set_vector(vi_s_ptr vi)
{
    for (int i; std::cin >> i; vi->push_back(i))
    {
    }
}

void print_vector(vi_s_ptr vi)
{
    for (auto &val : *vi)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::shared_ptr<std::vector<int>> ptr = VectorFactory();
    set_vector(ptr);
    print_vector(ptr);

    return 0;
}