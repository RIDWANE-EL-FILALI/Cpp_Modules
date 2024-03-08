#include "BitcoinExchange.hpp"

float ft_stof(const std::string& str);

int err(std::string src)
{
    std::cerr << src << std::endl;
    return 1;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return err(INPUT_ERR);
    std::ifstream input_db(av[1], std::ifstream::in);
    if (!input_db.is_open())
        return err(FILE_OPEN_ERR);
    std::ifstream internal_db(INTERNAL_DB, std::ifstream::in);
    if (!internal_db.is_open())
        return err(FILE_DB_ERR);

    BitcoinExchange btc;
    btc.readInternalData(internal_db);
    std::string line;

    std::getline(input_db, line);
    if (line != "date | value")
        return err(BAD_INPUT_HEADER);
    while (std::getline(input_db, line))
    {
        size_t delim = line.find('|');
        if (delim == std::string::npos || line.length() < delim + 2 || line[delim - 1] != ' ' || line[delim + 1] != ' ')
        {
            std::cerr << BAD_INPUT << "\"" << line << "\"" << std::endl;
            continue;
        }

        std::string date = line.substr(0, delim - 1);
        if (!btc.checkFormat(date) || !btc.checkDate(date))
            continue;

        std::string rate_str = line.substr(delim + 2);
        if (!btc.checkRate(rate_str))
            continue;
        float rate = ft_stof(rate_str);
        if (rate < (float)0 || rate > (float)1000)
        {
            std::cerr << OUT_OF_BOUND << " \"" << rate << "\"" << std::endl;
            continue;
        }

        std::cout << date << " => " << rate << " = " << rate * btc.getRate(date) << std::endl;
    }
    internal_db.close();
    input_db.close();
    return (0);
}