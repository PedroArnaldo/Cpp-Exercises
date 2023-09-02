#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) :
    _fileNameData("data.csv"),
    _fileNameInput("default")
{

}

BitcoinExchange::BitcoinExchange(std::fstream& inputFile) :
   _inputFile(inputFile)
{

}

bool BitcoinExchange::openFile(std::string file){
    
    std::ifstream inputFile(file.c_str());

    if (!inputFile.is_open()){
        std::cerr << "" << std::endl;
        return false;
    }
}