#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{

}

BitcoinExchange::BitcoinExchange(std::string dataBase)
{
    getDataBase(dataBase);
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy)
{
    _dataBase = cpy._dataBase;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &src)
{
    _dataBase = src._dataBase;
    return (*this);
}

void BitcoinExchange::getDataBase(std::string dataBase)
{
    std::ifstream file(dataBase.c_str());
    std::string line;
    float price;
    std::string dateStr;
    unsigned int dateInt;

    if (file.is_open())
    {
        std::getline(file, line);
        if (line != "date,exchange_rate")
            throw errorDataBase();
        std::getline(file, line);
        while (file)
        {
            try
            {
                size_t pos = line.find(",");
                if (pos != std::string::npos)
                {
                    dateStr = line.substr(0, pos);
                    dateInt = Date::convertDate(dateStr);
                    price = static_cast<float>(std::atof(line.substr(pos+1).c_str()));
                    this->_dataBase.insert(std::pair<unsigned int, float>(dateInt, price));
                }
                std::getline(file, line);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
        }
    }
    else
        throw cannotOpenfile();
}

void BitcoinExchange::validLine(std::string line)
{
    std::string date;
    size_t pos = line.find("|");
    if (pos != std::string::npos)
    {
        date = line.substr(0, pos - 1);
        if (date.size() != 10)
            throw badInput(line);
        if (date[4] != '-' || date[7] != '-')
            throw badInput(line);
        for (size_t i = 0; i < date.size(); i++)
        {
            if(i == 4 || i == 7)
                continue;
            if (!std::isdigit(date[i]))
                throw badInput(line);
        }
        
        std::string value = line.substr(pos+1);
        if (!value.empty() && value[0] == ' ')
        {
            value = value.substr(1);
            float result;
            std::istringstream iss(value);
            iss >> std::noskipws >> result;
            if (iss.fail() || !iss.eof())
                throw badInput(line);
        }
        else
            throw badInput(line);
    }
    else
       throw badInput(line);
}

void BitcoinExchange::search(unsigned int datevalue, float amount, std::string date)
{
    if (amount < 0)
        throw notPositiveNum();
    if (amount > 1000)
        throw LargeNum();

    std::map<unsigned int, float>::iterator it = this->_dataBase.find(datevalue);

    if (it != this->_dataBase.end())
    {
        double value = it->second;
        std::cout << date << " => " << amount << " = " << amount * value << std::endl;
    }
    else
    {
        it = this->_dataBase.lower_bound(datevalue);
        if (it != this->_dataBase.begin())
        {
            --it;
             double value = it->second;
            std::cout << date << " => " << amount << " = " << amount * value << std::endl;
        }
        else
            throw notFound();
    }
}   

void BitcoinExchange::printValues(std::string filename)
{
    std::ifstream file(filename.c_str());
    std::string line;
    std::string date;
    std::string amount;
    unsigned int dateValue;
    double amountValue;

    if (file.is_open())
    {
        std::getline(file, line);
        if (line != "date | value")
            throw errorInputFile();
        while (std::getline(file, line))
        {
            try
            {
                if (line != "")
                {
                    validLine(line);
                    size_t pos = line.find("|");
                    date = line.substr(0, pos-1);
                    dateValue = Date::convertDate(date);
                    amount = line.substr(pos+1);
                    amountValue = static_cast<float>(std::atof(amount.c_str()));
                    search(dateValue, amountValue, date);
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
        }
    }
    else
        throw cannotOpenfile();
}