#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>

class BitcoinExchange
{
    private:
        std::map<int, float> _btc;
        std::string _fileName;

    public:
        BitcoinExchange(void);
        BitcoinExchange(std::string fileName);
        BitcoinExchange(const BitcoinExchange &cpy);
        ~BitcoinExchange();

        BitcoinExchange& operator=(const BitcoinExchange &src);

        
};

#endif BITCOINEXCHANGE_HPP