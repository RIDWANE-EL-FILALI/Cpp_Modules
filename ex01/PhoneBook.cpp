#include "PhoneBook.hpp"
#include <iostream>

PhoneBook(void) {
	index = -1;
	return ;
}

PhoneBook(void) {
	return ;
}

int addContact(void)
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
	std::cout << "Successfully saved the contact to the PhoneBook" << std::endl;
	return (0);
}

int searchContact(void)
{
	std::string input;

	if (index == -1)
	{
		std::cout << "there is no contact yet in the PhoneBook make sure to add some" << std::endl;
		return (0);
	}
	this->displayContactTable();
	input = getInput("The index of the contact you desire to display");
	if (input.empty())
		return (1);
	this->displayContactByIndex(input);
	return (0);
}		

void displayContactTable(void)
{
	std::cout << "+----------+----------+----------+----------+" << std::endl
	<< "|  INDEX   |FIRST NAME| LAST NAME| NICKNAME |" << std::endl
	<< "+----------+----------+----------+----------+" << std::endl;
	for(int i = 0;i<8;i++)
	{
		if (this->contactlist[i].isEmpty())
			break ;
		std::cout << "|" << std::setw(10) << i << "|";
		if (this->contactlist[i].getInfo("firstname").length() > 10) {
			this->contactlist[i].getInfo("firstname").resize(9);
			this->contactlist[i].getInfo("firstname") += ".";
		}
		std::cout << std::setw(10) << this->contactlist[i].getInfo("firstname") << "|";
		if (this->contactlist[i].getInfo("lastname").length() > 10) {
			this->contactlist[i].getInfo("lastname").resize(9);
			this->contactlist[i].getInfo("lastname") += ".";
		}
		std::cout << std::setw(10) << this->contactlist[i].getInfo("lastname") << "|";
		if (this->contactlist[i].getInfo("nickname").length() > 10) {
			this->contactlist[i].getInfo("nickname").resize(9);
			this->contactlist[i].getInfo("nickname") += ".";
		}
		std::cout << std::setw(10) << this->contactlist[i].getInfo("nickname") << "|";
		std::cout	<< std::endl
				<< "+----------+----------+----------+----------+" << std::endl;
	}
	std::cout << std::endl;
	return ;
}

int displayContactByIndex(std::string input)
{
	int index;

	if (input.length() == 1 && std::isdigit(input[0]))
	{
		index = input[0] - '0';
		if (index >= 0 && index <= 7)
		{
				if (this->contactlist[index].displayContactInfo())
					return (0);
				else
					return (std::cout << "Error: No record at index [" << index << "]" << std::endl, 1);
		}
	}
	std::cout << "you didn't enter a valid index" << std::endl;
	return (1);
}

int displayContactInfo(void) {
	if (this->isEmpty())
		return (1);
	std::cout << "+ first name\t: " << this->getInfo(firstname) << std::endl
	<< "+ last name\t: " << this->getInfo(lastname) << std::endl
	<< "+ nickname\t: " << this->getInfo(nickname) << std::endl
	<< "+ phone number\t: " << this->getInfo(number) << std::endl
	<< "+ darkest secret\t: " << this->getInfo(secret) << std::endl;
	return (0);
}