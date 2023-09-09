#ifndef DATE_HPP
#define DATE_HPP

#include <string>
#include <stdlib.h>
#include "Exceptions.hpp"

#define MAX_YEAR 9999
#define MIN_YEAR 2009
#define MAX_MONTH 12
#define MIN_MONTH 1
#define MAX_DAY 32
#define MIN_DAY 1

class Date
{
    private:
        Date();
        Date(const Date &cpy);
        Date &operator=(const Date &src);
        
    
    public:
        ~Date();
        static bool isValidDate(unsigned int year, unsigned int month, unsigned int day);
        static unsigned int convertDate(std::string date);
};

#endif