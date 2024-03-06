#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

#define INPUT_ERR "Usage: <program_name> <file_to_be_checked>"
#define FILE_OPEN_ERR "Probleme with openning the file entered !"
#define FILE_DB_ERR "Probleme with openning the data_base file !"
#define INTERNAL_DB "./data.csv"
#define BAD_INPUT "ERROR: bad input => "
#define YEAR_NOT_ON_DB "Error : the year does not exist in the data_base"
#define MONTH_NOT_ON_DB "Error : the month does not exist in the data_base"
#define DAY_NOT_ON_DB "Error : the day does not exist in the data_base"
#define INCORRECT_DATE_ERR "Error : incorrect date => "
#define INVALID_RATE_ERR "Error : invalid rate"
#define NOT_A_POSITIVE_ERR "Error : not a positive number"
#define TOO_LARGE_ERR "Error : too large number." 



class BitcoinExchange
{
    public:
        BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange &src);
        BitcoinExchange& operator=(const BitcoinExchange &src);
        ~BitcoinExchange(void);
        void readInternalData(std::ifstream& src);
        bool checkFormat(const std::string &date);
        bool checkDate(const std::string &date);
        bool checkRate(const std::string &src);
        float getRate(const std::string& date);

    private:
        std::map<std::string, float> dataBase;

};














#endif