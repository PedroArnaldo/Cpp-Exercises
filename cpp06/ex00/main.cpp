#include "ScalarConverter.hpp"

int main(void)
{
	std::string str = "2147483648.3412f";
	std::string str1 = "asdf";
	ScalarConverter::convert(str1);
	return (0);
}
