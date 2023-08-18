#include "ScalarConverter.hpp"

bool isFloat(const std::string &value){

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


bool isSpecialValues(const std::string &value){
	
	std::cout << "teste 2: " << static_cast<int>(value[0]) << std::endl;

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

	if (!(value.length() > 1 && std::atof(value.c_str()) == 0))
		return true;
	return false;
}

int main(int argc, char **argv)
{
	// 	ScalarConverter::convert(argv[1]);
	if (argc == 2)
		std::cout << "teste: " << (isSpecialValues(argv[1]) && isFloat(argv[1])) << std::endl;


	return (0);
}
