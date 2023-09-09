#include "../includes/Exceptions.hpp"

const char* cannotOpenfile::what() const throw(){
    return "Error: cannot open file.";
}

const char* errorDataBase::what() const throw(){
    return "Error: database invalid.";
}

const char* dateInvalid::what() const throw(){
    return "Error: date Invalid.";
}

const char* manyArguments::what() const throw(){
    return "Error: many arguments.";
}

const char* noArg::what() const throw(){
    return "Error: could not open file.";
}

const char* errorInputFile::what() const throw(){
    return "Error: inputfile invalid.";
}

const char* lineInvalidFormat::what() const throw(){
    return "Error: line invalid format.";
}

badInput::badInput(std::string line)
{
    this->message = "Error: bad input => ";
    this->message.append(line);
}

badInput::~badInput() throw()
{
}

const char* badInput::what() const throw(){
    return this->message.c_str();
}

const char* notPositiveNum::what() const throw(){
    return "Error: not a positive number.";
}

const char* LargeNum::what() const throw(){
    return "Error: too large a number.";
}

const char* notFound::what() const throw(){
    return "Error: no value found.";
}