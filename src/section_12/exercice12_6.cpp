#include <iostream>
#include <vector>

std::vector<int> *VectorFactory()
{
    return new std::vector<int>;
}

void set_vector(std::vector<int> *vi)
{
    for (int i; std::cin >> i; vi->push_back(i))
    {
    }
}

void print_vector(std::vector<int> *vi)
{
    for (auto &val : *vi)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> *ptr = VectorFactory();
    set_vector(ptr);
    print_vector(ptr);
    delete ptr;
    return 0;
}