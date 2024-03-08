#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& src)
{
    this->dataBase = src.dataBase;
    return (*this);
}

BitcoinExchange::~BitcoinExchange(void) {};

float ft_stof(const std::string& src)
{
    float num;
    std::stringstream ss(src);

    ss >> num;
    return (num);
}

float BitcoinExchange::getRate(const std::string& date)
{
    if (this->dataBase.count(date) > 0)
        return this->dataBase.at(date);
    if (date < (this->dataBase.begin())->first)
        return (this->dataBase.lower_bound(date))->second; 
    return (--this->dataBase.lower_bound(date))->second;
}

static unsigned int ft_stou(const std::string& str)
{
    unsigned int num;
    std::stringstream ss(str);

    ss >> num;
    return num;
}

void BitcoinExchange::readInternalData(std::ifstream& src)
{
    std::string line;
    size_t delim;

    std::getline(src, line);
    while (std::getline(src, line))
    {
        delim = line.find(',');
        std::string rate = line.substr(delim + 1);
        this->dataBase[line.substr(0, delim)] = ft_stof(rate);
    }
    src.close();
}

bool BitcoinExchange::checkFormat(const std::string &date)
{
    if (date.empty())
        return false;
    
    size_t first_hyphen = date.find('-');
    size_t second_hyphen = date.find('-', first_hyphen + 1);

    if (first_hyphen == std::string::npos || second_hyphen == std::string::npos || date.find_first_not_of("0123456789-") != std::string::npos)
    {
        std::cerr << BAD_INPUT << "\"" << date << "\"" << '\n';
        return false;
    }
    return true;
}

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool BitcoinExchange::checkDate(const std::string &date)
{
    std::string s;
    int year, month, day;
    std::istringstream ss(date);
    int i = 0;

    while (std::getline(ss, s, '-'))
    {
        if (i == 0)
        {
            year = ft_stou(s);
            if (year < 2009 || s.length() > 4)
            {
                std::cerr << YEAR_NOT_ON_DB << " \"" << date << "\"" << std::endl;
                return false;
            }
        }
        if (i == 1)
        {
            month = ft_stou(s);
            if (month < 1 || month > 12 || s.length() > 2)
            {
                std::cerr << MONTH_NOT_ON_DB << " \"" << date << "\"" << std::endl;
                return false;
            }
        }
        if (i == 2)
        {
            day = ft_stou(s);
			if ((day < 1 || day > 31 || s.length() > 2)
			||  (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)))
			{
				std::cerr << DAY_NOT_ON_DB << " \"" << date << "\"" << std::endl;
				return false;
			}
            if ((month == 2 && isLeapYear(year) && day > 29) || (month == 2 && !isLeapYear(year) && day > 28))
            {
                std::cerr << DAY_DOES_NOT_EXIST << "\"" << date << "\"" << std::endl;
                return false;
            }
        }
        i += 1;
    }
    if (i != 3)
	{
		std::cerr << INCORRECT_DATE_ERR << "\"" << date << "\"" << '\n';
		return false;
	}
    return true;
}

bool BitcoinExchange::checkRate(const std::string &src)
{
    if (src.empty() || src.find_first_not_of("0123456789.-") != std::string::npos
	||  src.at(0) == '.' || src.find('.', src.length() - 1) != std::string::npos)
		std::cerr << INVALID_RATE_ERR << "\"" << src << "\"" << std::endl;
	else if (src.at(0) == '-')
		std::cerr << NOT_A_POSITIVE_ERR << std::endl;
	else if ((src.find('.') > 10 && src.length() > 10) || (src.length() == 10 && src > "2147483647"))
		std::cerr << TOO_LARGE_ERR << std::endl;
	else
		return true;
	return false;
}
