#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 4;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "a = " << c << ", b = " << d << std::endl;
	std::cout << "min(a, b) = " << ::min(c, d) << std::endl;
	std::cout << "max(a, b) = " << ::max(c, d) << std::endl;

	return (0);
}

