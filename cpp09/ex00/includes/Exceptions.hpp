#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>
#include <string>

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

class noArg: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class errorInputFile: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class lineInvalidFormat: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class badInput: public std::exception
{
    private:
        std::string message;
    public:
        virtual ~badInput() throw();
        badInput(std::string line);
        virtual const char* what() const throw();
};

class notPositiveNum: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class LargeNum: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

class notFound: public std::exception
{
    public: 
        virtual const char* what() const throw();
};

#endif