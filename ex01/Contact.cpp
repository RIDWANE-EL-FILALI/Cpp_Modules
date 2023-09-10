#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

Contact::Contact(void) {
	firstname = "";
 	lastname = "";
 	nickname = "";
 	number = "";
 	secret = "";
	return ;
}

Contact::~Contact(void) {
	return ;
}

int Contact::setInfo(std::string info, std::string value)
{
	if (value.empty())
		return (1);
	if (info == "firstname")
	{
		if (containsOnlyAlpha(value) == 1)
			return (std::cout << ANSI_BOLD_RED << "Error: make sure the firstname contains only letters." << ANSI_RESET << std::endl, 1);
        this->firstname = value;
	}
    else if (info == "lastname")
	{
		if (containsOnlyAlpha(value) == 1)
			return (std::cout << ANSI_BOLD_RED << "Error: make sure the lastname contains only letters." << ANSI_RESET << std::endl, 1);
        this->lastname = value;
	}
    else if (info == "nickname")
	{
		if (containsOnlyAlpha(value) == 1)
			return (std::cout << ANSI_BOLD_RED << "Error: make sure the nickname are only letters." << ANSI_RESET << std::endl, 1);
        this->nickname = value;
	}
    else if (info == "number")
	{
		if (containsOnlyDigit(value) == 1)
			return (std::cout << ANSI_BOLD_RED << "Error: make sure the Age is only digits." << ANSI_RESET << std::endl, 1);
        this->number = value;
	}
    else if (info == "secret")
		this->secret = value;
	return (0);
}



std::string Contact::getInfo(std::string info)
{
	if (info == "firstname")
		return (firstname);
	else if (info == "lastname")
		return (lastname);
	else if (info == "nickname")
		return (nickname);
	else if (info == "number")
		return (number);
	else if (info == "secret")
		return (secret);
	return NULL;
}

int Contact::displayContactInfo(void) {
	if (this->isEmpty())
		return (1);
	std::cout << ANSI_BOLD_RED << "+ first name\t: " << this->getInfo("firstname") << std::endl
	<< "+ last name\t: " << this->getInfo("lastname") << std::endl
	<< "+ nickname\t: " << this->getInfo("nickname") << std::endl
	<< "+ phone number\t: " << this->getInfo("number") << std::endl
	<< "+ darkest secret\t: " << this->getInfo("secret") << ANSI_RESET << std::endl;
	return (0);
}

int	Contact::isEmpty(void) {
	if (this->firstname.empty()
		|| this->lastname.empty()
		|| this->nickname.empty()
		|| this->number.empty()
		|| this->secret.empty())
		return (1);
	return (0);
}

int Contact::containsOnlyAlpha(std::string str)
{
	for(int i = 0;str[i];i++)
		if (!std::isalpha(str[i]) && str[i] != ' ' && str[i] != '-')
		   return (1);
	return (0);	
}

int Contact::containsOnlyDigit(std::string str)
{
	for(int i = 0;str[i];i++)
		if (!std::isdigit(str[i]))
			return (1);
	return (0);
}