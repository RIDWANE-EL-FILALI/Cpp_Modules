#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void) {
	index = -1;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

std::string	PhoneBook::trimBlank(std::string str) {
	std::string	blank = " \t\n\r\v\f";
	size_t		start;
	size_t		end;

	start = str.find_first_not_of(blank);
	end = str.find_last_not_of(blank);
	if (start == end)
		return (str);
	return (str.substr(start, end - start + 1));
}

std::string	PhoneBook::getInput(std::string prompt) {
	std::string	input;

	std::cout << ANSI_GREEN << "Please enter " << prompt << ANSI_RESET << ANSI_BOLD_BLUE << " > " << ANSI_RESET;
	if (!std::getline(std::cin, input) || std::cin.eof()) {
		std::cout << std::endl;
		return(std::string());
	}
	input = trimBlank(input);
	return (input);
}

void	PhoneBook::incrementIndex(void) {
	index++;
	if (index > 7) {
		index = 0;
	}
}

int PhoneBook::addContact(void)
{
	std::string input;

	incrementIndex();
	while (1)
	{
		input = getInput("The first name");
		if (!this->contactlist[index].setInfo("firstname", input))
			break ;
	}
	while (1)
	{
		input = getInput("The last name");
		if (!this->contactlist[index].setInfo("lastname", input))
			break ;
	}
	while (1)
	{
		input = getInput("The nickname");
		if (!this->contactlist[index].setInfo("nickname", input))
			break ;
	}
	while (1)
	{
		input = getInput("The phone number");
		if (!this->contactlist[index].setInfo("number", input))
			break ;
	}
	while (1)
	{
		input = getInput("The darkest secret");
		if (!this->contactlist[index].setInfo("secret", input))
			break ;
	}
	std::cout << ANSI_BOLD_YELLOW <<  "Successfully saved the contact to the PhoneBook" << ANSI_RESET << std::endl;
	return (0);
}

int PhoneBook::searchContact(void)
{
	std::string input;

	if (index == -1)
	{
		std::cout << ANSI_BOLD_YELLOW <<  "there is no contact yet in the PhoneBook make sure to add some" << ANSI_RESET << std::endl;
		return (0);
	}
	this->displayContactTable();
	input = getInput("The index of the contact you desire to display");
	if (input.empty())
		return (1);
	this->displayContactByIndex(input);
	return (0);
}		

void PhoneBook::displayContactTable(void)
{
	std::cout << ANSI_BOLD_BLUE << "+----------+----------+----------+----------+" << std::endl
	<< "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
	<< "+----------+----------+----------+----------+" << std::endl;
	for(int i = 0;i<8;i++)
	{
		if (this->contactlist[i].isEmpty())
            break;
        std::string firstName = this->contactlist[i].getInfo("firstname");
        std::string lastName = this->contactlist[i].getInfo("lastname");
        std::string nickname = this->contactlist[i].getInfo("nickname");
        if (firstName.length() > 10) {
            firstName.resize(9);
            firstName += ".";
        }
        if (lastName.length() > 10) {
            lastName.resize(9);
            lastName += ".";
        }
        if (nickname.length() > 10) {
            nickname.resize(9);
            nickname += ".";
        }
        std::cout << "|" << std::setw(10) << i << "|"
                  << std::setw(10) << firstName << "|"
                  << std::setw(10) << lastName << "|"
                  << std::setw(10) << nickname << "|"
                  << std::endl
                  << "+----------+----------+----------+----------+" << std::endl;
    }
    std::cout << ANSI_RESET << std::endl;
    return;
}

int PhoneBook::displayContactByIndex(std::string input)
{
	int index;

	if (input.length() == 1 && std::isdigit(input[0]))
	{
		index = input[0] - '0';
		if (index >= 0 && index <= 7)
		{
				if (!this->contactlist[index].displayContactInfo())
					return (0);
				else
					return (std::cout << ANSI_BOLD_RED << "Error: No record at index [" << index << "]" << ANSI_RESET << std::endl, 1);
		}
	}
	std::cout << ANSI_BOLD_RED << "you didn't enter a valid index" << ANSI_RESET << std::endl;
	return (1);
}