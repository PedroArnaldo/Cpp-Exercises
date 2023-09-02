#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <string>
#include <iostream>

class BitcoinExchange
{
    private:
        std::map<int, float> _btcData;
        std::map<int, float> _btcInput;
        std::string _fileNameData;
        std::string _fileNameInput;
        std::fstream& _inputFile;

    public:
        BitcoinExchange(void);
        BitcoinExchange(std::fstream& inputFile);
        BitcoinExchange(const BitcoinExchange &cpy);
        ~BitcoinExchange();

        BitcoinExchange& operator=(const BitcoinExchange &src);

        bool openFile(std::string file);
        bool validFile(std::string firstLine);
        bool creatData(void);
        
};

#endif BITCOINEXCHANGE_HPP