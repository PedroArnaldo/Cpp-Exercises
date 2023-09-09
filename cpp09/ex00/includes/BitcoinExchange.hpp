#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <sstream>
#include <cctype>
#include <string>
#include <iostream>
#include "../includes/Exceptions.hpp"
#include "../includes/Date.hpp"

#define DATABASE "./dataBase/data.csv"

class BitcoinExchange
{
    private:
        std::map<unsigned int, float> _dataBase;
        void getDataBase(std::string dataBase);

    public:
        BitcoinExchange(void);
        BitcoinExchange(std::string dataBase);
        BitcoinExchange(const BitcoinExchange &cpy);
        ~BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange &src);

        void validLine(std::string line);
        void printValues(std::string filename);
        void search(unsigned int datevalue, float amount, std::string date);
        
};

#endif