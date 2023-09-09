#include "Contact.hpp"

Contact(void) {
	firstname = "";
 	lastname = "";
 	nickname = "";
 	number = "";
 	secret = "";
	return ;
}

~Contact(void) {
	std::cout << "Contact struct distructed !!" << std::endl;
	return ;
}

int containsOnlyAlpha(std::string str)
{
	for(int i = 0;str[i];i++)
		if (!std::isalpha(str[i]) && str[i] != ' ' && str[i] != '-')
		   return (1);
	return (0);	
}

int containsOnlyDigit(std::string str)
{
	for(int i = 0;str[i];i++)
		if (!std::isdigit(str[i]))
			return (1);
	return (0);
}

int setInfo(std::string info, std::string value)
{
	if (value.empty())
		return (1);
	if (info == "firstname")
	{
		if (containsOnlyAlpha(value) == 1)
			return (std::cout << "Error: make sure the firstname contains only letters." << std::endl, 1);
        this->firstname = value;
	}
    else if (info == "lastname")
	{
		if (containsOnlyAlpha(value) == 1)
			return (std::cout << "Error: make sure the lastname contains only letters." << std::endl, 1);
        this->lastname = value;
	}
    else if (info == "nickname")
	{
		if (containsOnlyAlpha(value) == 1)
			return (std::cout << "Error: make sure the nickname are only letters." << std::endl, 1);
        this->nickname = value;
	}
    else if (info == "number")
	{
		if (containsOnlyDigit(value) == 1)
			return (std::cout << "Error: make sure the Age is only digits." << std::endl, 1);
        this->number = value;
	}
    else if (info == "secret")
		this->secret = value;
	return (0);
}



std::string getInfo(std::string info)
{
	if (info == "firstname")
		return (firsname);
	else if (info == "lastname")
		return (lastname);
	else if (info == "nickname")
		return (nickname);
	else if (info == "number")
		return (number);
	else if (info == "secret")
		return (secret);
}