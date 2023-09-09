#ifndef CONTACT_H
#define CONTACT_H


#include <string>

class Contact {
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string number;
		std::string secret;

		int containsOnlyAlpha(std::string input);
		int containsOnlyDigit(std::string input);

	public:
		Contact(void);
		~Contact(void);
		int isEmpty(void);
		std::string getInfo(std::string info);
		void setInfo(std::string info, std::string value);

}

		










#endif
