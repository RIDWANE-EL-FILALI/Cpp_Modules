#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <string>
#include <iomanip>
#define ANSI_BOLD_RED "\033[1;31m"
#define ANSI_RESET "\033[0m"
#define ANSI_GREEN "\033[0;32m"
#define ANSI_BOLD_YELLOW "\033[1;33m"
#define ANSI_BOLD_BLUE "\033[1;34m"


class PhoneBook {
	private:
		int index;
		Contact contactlist[8];
		
		int displayContactByIndex(std::string input);
		void displayContactTable(void);
		void printContactInfoToTable(int index);
		void printTableString(std::string str);
		std::string	getInput(std::string prompt);
		std::string	trimBlank(std::string str);
		void	incrementIndex(void);

	public:
		PhoneBook(void);
		~PhoneBook(void);

		int addContact(void);
		void DisplayContact(int index);
		int searchContact(void);
};

#endif
