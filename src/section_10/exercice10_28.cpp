#include <vector>
#include <deque>
#include <iterator>
#include <algorithm>
#include <iostream>

void print_container(std::vector<int> &v)
{
    for (const auto &i : v)
        std::cout << i << " ";

    std::cout << std::endl;
}

void print_container(std::deque<int> &v)
{
    for (const auto &i : v)
        std::cout << i << " ";

    std::cout << std::endl;
}

int main()
{
    std::vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "Origin vector: ";
    print_container(vi);
    std::cout << std::endl;
    std::deque<int> d1, d2, d3;
    std::cout << "inserter: ";
    std::copy(vi.begin(), vi.end(), std::inserter(d1, d1.end()));
    print_container(d1);

    std::cout << "back_inserter: ";
    std::copy(vi.begin(), vi.end(), std::back_inserter(d2));
    print_container(d2);

    std::cout << "front_inserter: ";
    std::copy(vi.begin(), vi.end(), std::front_inserter(d3));
    print_container(d3);
    std::cout << std::endl;

    //     Origin vector: 1 2 3 4 5 6 7 8 9

    // inserter: 1 2 3 4 5 6 7 8 9
    // back_inserter: 1 2 3 4 5 6 7 8 9
    // front_inserter: 9 8 7 6 5 4 3 2 1

    return 0;
}