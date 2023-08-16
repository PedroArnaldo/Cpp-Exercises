#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::~ScalarConverter(){
}

bool ScalarConverter::isChar(const std::string &value){

	double nbr = std::atof(value.c_str());

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

	if(isInt(value) && isFloat(value) && isDouble(value))
		return true;
	return false;
}

void ScalarConverter::toChar(const std::string &value){
	
	int nbr;
	if (value.length() == 1)
		nbr = static_cast<int>(value[0]);
	else
		nbr = std::atof(value.c_str());
	
	if (!isprint(nbr))
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

	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(nbr) << std::endl;
}

void ScalarConverter::convert(const std::string &literal){

	//created if for 'a' input
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

