#include "Form.hpp"

int main(void)
{
	{
		std::cout << "Teste 1: " << std::endl;
		Bureaucrat 	James("James", 42);
		Form 		f1("Form 1", 30, 21);
		try
		{
			std::cout << James << std::endl;
			std::cout << f1 << std::endl;
			f1.beSigned(James);
			std::cout << f1 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what();
		}
		
	}
	{
		std::cout << "\nTeste 2: " << std::endl;
		Bureaucrat 	Peter("Peter", 30);
		Form 		f2("Form 2", 125, 21);
		try
		{
			std::cout << Peter << std::endl;
			std::cout << f2 << std::endl;
			f2.beSigned(Peter);
			std::cout << f2 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what();
		}
	}
	return (0);
}
