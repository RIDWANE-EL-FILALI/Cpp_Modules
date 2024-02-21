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

void ScalarConverter::convert(const std::string &literal) {
        // Attempt conversion to char
        try {
            char charValue = static_cast<char>(std::stoi(literal));
            if (isprint(charValue)) {
                std::cout << "- char  : '" << charValue << "'" << std::endl;
            } else {
                std::cout << "- char  : non displayable character" << std::endl;
            }
        } catch (const std::invalid_argument& e) {
            std::cout << "char: impossible" << std::endl;
        }
        // Conversion to int
        try {
            int intValue = std::stoi(literal);
            std::cout << "- int   : " << intValue << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cout << "- int   : impossible" << std::endl;
        }
        // Conversion to float
        try {
            float floatValue = std::stof(literal);
            std::cout << "- float : " << floatValue;
            if (literal == "+inf" || literal == "-inf" || literal == "nan")
                std::cout << literal;
            else if (literal.find(".") != std::string::npos)
                std::cout << "f" << std::endl;
            else
                std::cout << ".0f" << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cout << "- float : impossible" << std::endl;
        }
        // Conversion to double
        try {
            double doubleValue = std::stod(literal);
            std::cout << "- double: " << doubleValue;
            if (literal.find(".") != std::string::npos)
                std::cout << std::endl;
            else
                std::cout << ".0" << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cout << "double: impossible" << std::endl;
        }
    }




