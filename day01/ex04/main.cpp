//#include "main.hpp"
#include <iostream>
#include <string>
#include <fstream>

std::string customReplace(std::string &input, std::string s1, std::string s2)
{
    std::string result;
    size_t pos = 0;
    while (pos < input.length())
    {
        size_t foundPos = input.find(s1, pos);
        if (foundPos == std::string::npos)
        {
            result += input.substr(pos);
            break ;
        }
        result += input.substr(pos, foundPos - pos);
        result += s2;
        pos = foundPos + s1.length();
    }
    return result;
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string output_filename = filename + ".replace";
        std::ofstream output_file(output_filename);
        if (!output_file)
        {
            std::cerr << "Unable to open the output file." << std::endl;
            return (1);
        }
        std::ifstream inputFile(filename);
        if (!inputFile)
        {
            std::cerr << "Unable to open the in file." << std::endl;
            return (1);
        }
        std::string line;
        while (std::getline(inputFile, line))
        {
            line = customReplace(line, s1, s2);
            output_file << line << std::endl;
        }
        output_file.close();
        inputFile.close();
        std::cout << "Replacement completed. Output written to " << output_filename << std::endl;
    }
    else
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    return (0);
}