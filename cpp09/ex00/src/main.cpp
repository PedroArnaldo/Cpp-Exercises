#include "../includes/BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    try
    {
        if (argc == 2)
        {
            BitcoinExchange btc(DATABASE);

            btc.printValues(argv[1]);
            /*
            1- ler o valores no data.csv
            2- tranforma os valores em maps

            */
        }//tranforma em classes excption
        else if (argc == 1)
            throw noArg();
        else
            throw manyArguments();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}