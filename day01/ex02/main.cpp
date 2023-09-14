#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR;
    stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "\033[1;34;4mPrinting The memory addresses :\033[0m" << std::endl;
    std::cout << "str-variable :" << &str << std::endl;
    std::cout << "stringPTR :" << stringPTR << std::endl;
    std::cout << "stringREF :" << &stringREF << std::endl;

    std::cout << "\033[1;34;4mPrinting The values :\033[0m" << std::endl;
    std::cout << "str-variable :" << str << std::endl;
    std::cout << "stringPTR :" << *stringPTR << std::endl;
    std::cout << "stringREF :" << stringREF << std::endl;

    return (0);
}