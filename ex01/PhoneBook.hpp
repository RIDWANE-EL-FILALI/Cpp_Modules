#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>

class PhoneBook {
	private:
		int index;
		Contact contactlist[8];
		
		void displayContactByIndex(std::string input);
		void displayContactTable(void);
		void printContactInfoToTable(int index);
		void printTableString(std::string str);

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void addContact(void);
		void DisplayContact(int index);
		void searchContact(void);
};

#endif
