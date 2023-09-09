#include "../includes/Date.hpp"
#include <iostream>

Date::Date()
{}

Date::Date(const Date &cpy)
{
    (void) cpy;
}

Date& Date::operator=(const Date &src)
{
    (void) src;
    return (*this);
}

Date::~Date()
{}

bool Date::isValidDate(unsigned int year, unsigned int month, unsigned int day)
{   
    if (year > MAX_YEAR || year < MIN_YEAR)
        return false;
    if (month > MAX_MONTH || month < MIN_MONTH)
        return false;
    if (day > MAX_DAY || day < MIN_DAY)
        return false;
    if (year == 2009 && month == 1 && day < 3)
        return false;
    return true;
}

static bool isNumStr(std::string num, size_t len)
{
    if (num.size() != len)
        return false;
    for (size_t i = 0; i < num.size(); i++)
    {
        if (!std::isdigit(num[i]))
            return false;
    }
    return true;
}

unsigned int Date::convertDate(std::string date)
{
    if (date.size() != 10 && date[4] != '-' && date[7] != '-')
        throw dateInvalid();

    size_t firstDash = date.find('-');
    size_t secondDash = date.find('-', firstDash + 1);
    unsigned int dateValue = 0;

    if (firstDash != std::string::npos && secondDash != std::string::npos)
    {
        std::string year = date.substr(0, firstDash);
        std::string month = date.substr(firstDash + 1, secondDash - firstDash - 1);
        std::string day  = date.substr(secondDash + 1);

        if (!isNumStr(year, 4) || !isNumStr(month, 2) || !isNumStr(day, 2))
            throw dateInvalid();

        unsigned int _year = static_cast<unsigned int>(std::atof(year.c_str()));
        unsigned int _month = static_cast<unsigned int>(std::atof(month.c_str()));
        unsigned int _day = static_cast<unsigned int>(std::atof(day.c_str()));
        
        if (!isValidDate(_year, _month, _day))
            throw dateInvalid();
        
        dateValue = (_year * 100 + _month) * 100 + _day;
    }
    else
        throw dateInvalid();
    return dateValue;
}