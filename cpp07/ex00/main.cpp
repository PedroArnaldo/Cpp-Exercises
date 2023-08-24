#include "whatever.hpp"
#include "iostream"

int main(void)
{
	int a = 2;
	int b = 4;

	std::cout << "Test Int" << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";


	std::cout << "Test String" << std::endl;
	::swap(c, d);
	std::cout << "a = " << c << ", b = " << d << std::endl;
	std::cout << "min(a, b) = " << ::min(c, d) << std::endl;
	std::cout << "max(a, b) = " << ::max(c, d) << std::endl;

	float af = 2.2312;
	float bf = 2.2313;
	
	std::cout << "Test Float" << std::endl;
	::swap(af, bf);
	std::cout << "a = " << af << ", b = " << bf << std::endl;
	std::cout << "min(a, b) = " << ::min(af, bf) << std::endl;
	std::cout << "max(a, b) = " << ::max(af, bf) << std::endl;
	return (0);
}

