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

		int containsOnlyAlpha(std::string str);
		int containsOnlyDigit(std::string str);

	public:
		Contact(void);
		~Contact(void);
		int isEmpty(void);
		std::string getInfo(std::string info);
		int setInfo(std::string info, std::string value);
		int displayContactInfo(void);
};

#endif
