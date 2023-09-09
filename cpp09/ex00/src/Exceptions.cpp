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