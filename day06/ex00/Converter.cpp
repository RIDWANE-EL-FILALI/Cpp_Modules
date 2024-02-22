#include "Converter.hpp"

ScalarConverter::~ScalarConverter() {
    std::cout << "Default destructor called" << std::endl;
}


ScalarConverter::ScalarConverter() {
    std::cout << "Default constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& src) {
    std::cout << "Copy assignment operator called" << std::endl;
    (void)src;
    return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter& src) {
    std::cout << "Default destructor with arguments called" << std::endl;
    *this = src;
}

void	printDouble(double d)
{
	char c = static_cast<char>(d);
	if (std::isnan(d) || std::isinf(d) || d < CHAR_MIN || d > CHAR_MAX)
		std::cout << "char:	impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char:	'" << c << "'" << std::endl;
	else
		std::cout << "char:	Non displayable" << std::endl;
	if (std::isnan(d) || std::isinf(d) || d > (double)INT_MAX || d < (double)INT_MIN)
		std::cout << "int:	impossible" << std::endl;
	else
		std::cout << "int:	" << static_cast<int>(d) << std::endl;
	if (d - static_cast<int>(d) == 0)
	{
		std::cout << "float:	" << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double:	" << d << ".0" <<  std::endl;
	}
	else
	{
		std::cout << "float:	" << static_cast<float>(d) << 'f' << std::endl;
		std::cout << "double:	" << d << std::endl;
	}
}

void	printFloat(float f)
{
	char c = static_cast<char>(f);
	if (std::isnan(f) || std::isinf(f) || f < CHAR_MIN || f > CHAR_MAX)
		std::cout << "char:	impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "char:	'" << c << "'" << std::endl;
	else
		std::cout << "char:	Non displayable" << std::endl;
	if (std::isnan(f) || std::isinf(f) || f > (float)INT_MAX || f < (float)INT_MIN)
		std::cout << "int:	impossible" << std::endl;
	else
		std::cout << "int:	" << static_cast<int>(f) << std::endl;
	if (f - static_cast<int>(f) == 0)
	{
		std::cout << "float:	" << f << ".0f" << std::endl;
		std::cout << "double:	" << static_cast<double>(f) << ".0" <<  std::endl;
	}
	else
	{
		std::cout << "float:	" << f << 'f' << std::endl;
		std::cout << "double:	" << static_cast<double>(f) << std::endl;
	}
}

void	printInt(long i)
{
	char c = static_cast<char>(i);
	if (std::isprint(c))
		std::cout << "char:	'" << c << "'" << std::endl;
	else if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "char:	impossible" << std::endl;
	else
		std::cout << "char:	Non displayable" << std::endl;
	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int:	impossible" << std::endl;
	else
		std::cout << "int:	" << i << std::endl;
	std::cout << "float:	" << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double:	" << static_cast<double>(i) << ".0" << std::endl;
}

void	printChar(char c)
{	
	if (std::isprint(c))
		std::cout << "char:	'" << c << "'" << std::endl;
	else
		std::cout << "char:	Non displayable" << std::endl;
	std::cout << "int:	" << static_cast<int>(c) << std::endl;
	std::cout << "float:	" << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double:	" << static_cast<double>(c) << ".0" << std::endl;
}

std::string	getType(const std::string input)
{
	if (input.empty())
		return "empty";
	else if (input.length() == 1 && !std::isdigit(input[0]))
		return "char";
	else
	{
		char* endptr = NULL;
		std::strtol(input.c_str(), &endptr, 10);
		if (*endptr == '\0') {
			return "int";
		}
		else
		{
			endptr = NULL;
			std::strtod(input.c_str(), &endptr);
			if (*endptr == '\0') {
				return "double";
			}
			else
			{
				endptr = NULL;
				std::strtof(input.c_str(), &endptr);
				if ((endptr[0] == 'f' && endptr[1] == 0)) {
					return "float";
				}
				else {
					return "unknown";
				}
			}
		}
	}
}

void ScalarConverter::convert(const std::string input)
{	
	std::string type = getType(input);
	if (type == "char")
	{
		char c = input[0];
		printChar(c);
	}
	else if (type == "int")
	{
		long l = std::atol(input.c_str());
		printInt(l);
	}
	else if (type == "float") {
		float f = std::strtof(input.c_str(), NULL);
		printFloat(f);
	} else if (type == "double") {
		double d = std::strtod(input.c_str(), NULL);
		printDouble(d);
	} else
	{
		if (errno){
			std::perror("Error");
		}else
			std::cout << "type: " + type << std::endl;
	}
}