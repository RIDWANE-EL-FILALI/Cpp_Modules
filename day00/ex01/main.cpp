#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"


void print_logo(void)
{
    std::cout << std::endl << "\033[32m\t\t█▀█ █░█ █▀█ █▄░█ █▀▀ █▄▄ █▀█ █▀█ █▄▀\033[0m" << std::endl;
    std::cout << "\033[32m\t\t█▀▀ █▀█ █▄█ █░▀█ ██▄ █▄█ █▄█ █▄█ █░█\033[0m" << std::endl;
}

std::string wlc(void)
{
    static int a;
    std::string input;

    if (a == 0)
    {
        std::cout << ANSI_BOLD_RED << "\033[4mHello, user to The crappy PhoneBook, You can use the following commands" << ANSI_RESET << std::endl;
        std::cout << ANSI_GREEN << "\tADD" << ANSI_RESET << ": add a user" << std::endl;
        std::cout << ANSI_GREEN << "\tSEARCH" << ANSI_RESET << ": searching the PhoneBook, you may find your grandma here" << std::endl;
        std::cout << ANSI_GREEN << "\tEXIT" << ANSI_RESET << ": to exit and hopefully never comeback" << std::endl;
        a++;
    }
    std::cout << ANSI_BOLD_BLUE << "-->" << ANSI_RESET;
    
    getline(std::cin, input);
	for (int i = 0;input[i];i++)
		input[i] = std::toupper(input[i]);
    return (input);
}

int main(void)
{
	PhoneBook book;
    std::string input;

    print_logo();
	while (1)
	{
        input = wlc();
		if (input == "ADD")
        {
			if (book.addContact())
				break ;
        }
		else if (input == "SEARCH")
        {
			if (book.searchContact())
				break ;
        }
		else if (input == "EXIT")
        {
            std::cout << ANSI_GREEN << "goodbye, say hello to your grandma for me" << ANSI_RESET << std::endl;
            break;
        }
        else
            std::cout << ANSI_BOLD_RED << "Are you dumb or something read the prompt above!!" << ANSI_RESET << std::endl;
    }
    return (0);
}


