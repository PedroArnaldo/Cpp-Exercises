#include "Bureaucrat.hpp"

int main(void)
{

	try
	{
		std::cout <<  "Test 1" << std::endl;
		Bureaucrat john("John", 130);
		std::cout << john;
		john.incrementGrade(180);

	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "####################" << std::endl << std::endl;
	try
	{
		std::cout <<  "Test 2" << std::endl;
		Bureaucrat jack("Jack", 123);
		jack.incrementGrade(1);
		std::cout << jack;
		jack.decrementGrade(124);
		std::cout << jack;

	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
