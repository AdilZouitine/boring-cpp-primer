#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> read_file(std::string path)
{
    std::vector<std::string> output_vector;
    std::ifstream input(path);
    std::string word;
    while (input >> word)
        output_vector.push_back(word);
    return output_vector;
}

int main()
{
    std::string path = "text_for_exercice_8_4.txt";
    std::vector<std::string> file_vector;
    file_vector = read_file(path = path);
    for (auto const &line : file_vector)
    {
        std::cout << line << std::endl;
    }
    return 0;
}