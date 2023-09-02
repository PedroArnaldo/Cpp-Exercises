#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 2){
        std::fstream inputFile(argv[1], std::ios::in);
        if (inputFile.fail())
            BitcoinExchange btc(inputFile);
        /*
         1- ler o valores no data.csv
         2- tranforma os valores em maps

        */
    }
    else if (argc == 1)
        std::cout << "Error: could not open file." << std::endl;
    else
        std::cout << "Error: many arguments." << std::endl;
    return 0;
}