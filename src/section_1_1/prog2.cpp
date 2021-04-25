#include <iostream>

// Lesson learned allways use std::endl
// at the end of cout procedure because
// it flush the buffer
int main()
{
    // the prefix std:: that the name spaces cout
    // ad endl are defined inside the namespace std
    // Question to me is same for python to say
    // import foo
    // foo.bar()
    std::cout << "Enter two number" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}