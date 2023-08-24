#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2){
		ScalarConverter::convert(argv[1]);
		return (1);
	}
	else
		std::cout << "Invalid parameter." << std::endl;
	return (0);
}
