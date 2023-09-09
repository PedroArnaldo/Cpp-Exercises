#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>

class cannotOpenfile: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class errorDataBase: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class dateInvalid: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class manyArguments: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class noArg:public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class errorInputFile:public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class lineInvalidFormat:public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class badInput:public std::exception
{
    public: 
        virtual const char* what() const throw();
};

#endif