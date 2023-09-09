#include <iostream>
#include <string>
#include "PhoneBook.hpp"

// Define ANSI escape codes for text formatting
#define ANSI_BOLD_RED "\033[1;31m"
#define ANSI_RESET "\033[0m"
#define ANSI_GREEN "\033[0;32m"

void print_logo(void)
{
    std::cout << std::endl << "\033[32m█▀█ █░█ █▀█ █▄░█ █▀▀ █▄▄ █▀█ █▀█ █▄▀\033[0m" << std::endl;
    std::cout << "\033[32m█▀▀ █▀█ █▄█ █░▀█ ██▄ █▄█ █▄█ █▄█ █░█\033[0m" << std::endl;
}

std::string wlc(void)
{
    std::string input;

    // Print the hello message in bold red with underlining
    std::cout << ANSI_BOLD_RED << "\033[4mHello, user to The crappy PhoneBook, You can use the following commands" << ANSI_RESET << std::endl;

    // Print the available commands in green
    std::cout << ANSI_GREEN << "\tADD" << ANSI_RESET << ": add a user" << std::endl;
    std::cout << ANSI_GREEN << "\tSEARCH" << ANSI_RESET << ": searching the PhoneBook, you may find your grandma here" << std::endl;
    std::cout << ANSI_GREEN << "\tEXIT" << ANSI_RESET << ": to exit and hopefully never comeback" << std::endl;
    std::cout << "-->";
    
    getline(std::cin, input);
	for (int i = 0;input[i];i++)
		input[i] = std::toupper(input[i]);
    return (input);
}

int main(void)
{
	PhoneBook book;
    std::string input;

    input = wlc();
	while (input != "EXIT")
	{
		if (input == "ADD")
			if (input.addContact())
				break ;
		else if (input == "SEARCH")
			if (input.searchContact())
				break ;
		else
			std::cout << ANSI_BOLD_RED << "Are you dumb or something read the prompt above!!" << ANSI_RESET << std::endl;
	}
	std::cout << "goodbye, say hello to your grandma for me" << std::endl;
    return (0);
}


