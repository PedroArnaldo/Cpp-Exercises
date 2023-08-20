#include "ClassGenerate.hpp"

int main(void)
{
	ClassGenerate cg;
	Base *base;

	std::cout << "Test" << std::endl;
	std::cout << "Generate class: ";
	base = cg.generate();
	std::cout <<"Address class: " << base << std::endl;
	
	std::cout << "Identify ptr: ";
	cg.identify(base);

	std::cout << "Identify ref: ";
	cg.identify(*base);

	delete base;	
	return 0;
}
