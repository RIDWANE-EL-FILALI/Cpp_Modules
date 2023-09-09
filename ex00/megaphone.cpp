#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    std::string message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (ac > 1)
    {
        while (av[i])
        {
            std::string s(av[i]);
            for (size_t i = 0; i < s.length(); i++)
                s[i] = toupper(s[i]);
            std::cout << s;
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << message << std::endl;
    return (0);
}