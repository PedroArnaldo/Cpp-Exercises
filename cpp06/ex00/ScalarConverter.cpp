#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::~ScalarConverter(){
}

bool ScalarConverter::isSpecialValues(const std::string &value){
	
	std::string specialValues[6] = {
		"-inf",
		"+inf",
		"nan",
		"nanf",
		"-inff",
		"+inff"
	};
	for (size_t i = 0; i < specialValues->length(); i++)
	{
		if(specialValues[i] == value)
			return true;
	}
	return false;
}

bool ScalarConverter::isChar(const std::string &value){

	double nbr = std::atof(value.c_str());

	//verificar se o tamanho é igual a um ou se for uma string se tem somente números

	if (nbr < CHAR_MIN || nbr > CHAR_MAX)
		return false;
	else
		return true;
}

bool ScalarConverter::isInt(const std::string &value){
	
	for (size_t i = 0; i < value.length(); i++)
	{
		if (value[i] == '-' && i == 1)
			continue;
		if (!isdigit(value[i]))
			return false;
	}
	return true;
}

bool ScalarConverter::isFloat(const std::string &value){

	for (size_t i = 0; i < value.length(); i++)
	{
		if (i == 1 && value[i] == '-')
			continue;
		if (value[i] == '.')
			continue;
		if (value[value.length()-1] == 'f')
			continue;
		if (!isdigit(value[i]))
			return false;
	}
	return true;
}

bool ScalarConverter::isDouble(const std::string &value){

	for (size_t i = 0; i < value.length(); i++)
	{
		if (i == 1 && value[i] == '-')
			continue;
		if (value[i] == '.')
			continue;
		if (!isdigit(value[i]))
			return false;
	}
	return true;
}

bool ScalarConverter::isNum(const std::string &value){

	if(value.length() == 1 && !isdigit(value[0]))
	{
		std::cout << "int: " << static_cast<int>(value[0]) << std::endl;
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(value[0]) << "f" << std::endl;
		std::cout << "double: " << std::setprecision(2) << std::fixed << static_cast<double>(value[0]) << std::endl;	
		return false;
	}

	if(isInt(value) && isFloat(value) && isDouble(value))
		return true;
	return false;
}

void ScalarConverter::toChar(const std::string &value){

	int nbr = std::atof(value.c_str());

	std::cout << "nbr " << nbr << std::endl;

	if (value.length() == 1 && !isdigit(value[0]))
		std::cout << "char: '" << static_cast<char>(value[0]) << "'" << std::endl;
	else if (isprint(value[0]) && value.length() == 1)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
}

void ScalarConverter::toInt(const std::string &value){
	
	double nbr = std::atof(value.c_str());

	if (nbr < INT_MIN || nbr > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
}

void ScalarConverter::toFloat(const std::string &value){
	
	double nbr = std::atof(value.c_str());

	double max = std::numeric_limits<float>::max();
	if (nbr < -max || nbr > max)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(nbr) << "f" << std::endl;
}

void ScalarConverter::toDouble(const std::string &value){
	
	double nbr = std::atof(value.c_str());

	std::cout << "double: " << std::setprecision(2) << std::fixed << static_cast<double>(nbr) << std::endl;
}

void ScalarConverter::toSpecialValues(const std::string &value){
	
	double nbr = std::atof(value.c_str());

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(nbr) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(2) << std::fixed << static_cast<double>(nbr) << std::endl;
}

void ScalarConverter::convert(const std::string &literal){

	//created if for 'a' input
	if(isSpecialValues(literal))
		toSpecialValues(literal);
	else{
		if (isChar(literal))
			toChar(literal);
		else
			std::cout << "char: impossible\n";
		if (isNum(literal))
		{
			toInt(literal);
			toFloat(literal);
			toDouble(literal);
		}
	}
}

