#include "ScalarConverter.hpp"

bool ScalarConverter::isExtremeValues(const std::string &value){
	
	std::string specialValues[8] = {
		"-inf",
		"+inf",
		"inf",
		"inff",
		"nan",
		"nanf",
		"-inff",
		"+inff"
	};

	for (size_t i = 0; i < 8; i++)
	{
		if(specialValues[i] == value)
			return true;
	}
	return false;
}

bool ScalarConverter::isValid(const std::string &value){

	if (!(value.length() > 1 && std::atof(value.c_str()) == 0))
		return true;
	return false;
}

bool ScalarConverter::isNum(const std::string &value){

	int qtDot = 0;

	for (size_t i = 0; i < value.length(); i++)
	{
		if (i == 0 && value[i] == '-')
			continue;
		if (value[i] == '.' && qtDot == 0){
			qtDot++;
			continue;
		}
		if (value[value.length()-1] == 'f')
			continue;
		if (!isdigit(value[i]))
			return false;
	}
	return true;
}

void ScalarConverter::toChar(double value){


	if (value < CHAR_MIN || value > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(value))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

void ScalarConverter::toInt(double value){

	if (value < INT_MIN || value > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void ScalarConverter::toFloat(double value){

	double max = std::numeric_limits<float>::max();

	if (value < -max || value > max)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(value) << "f" << std::endl;
}

void ScalarConverter::toDouble(double value){
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(value) << std::endl;
}

void ScalarConverter::printString(const std::string &value){

	double nbr = 0;

	if (value.length() == 1 && !std::isdigit(value[0]))
		nbr = static_cast<int>(value[0]);
	else
		nbr = std::atof(value.c_str());
	
	toChar(nbr);
	toInt(nbr);
	toFloat(nbr);
	toDouble(nbr);
}

void ScalarConverter::printExtremeValues(void){
	
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void ScalarConverter::convert(const std::string &literal){

	if (isExtremeValues(literal))
		printExtremeValues();
	else if ((isValid(literal) && isNum(literal)) || literal.length() == 1)
		printString(literal);
	else
		std::cout << "warning: value error." << std::endl;
}

