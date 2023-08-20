#include "ClassGenerate.hpp"

ClassGenerate::ClassGenerate(void){
}

ClassGenerate::ClassGenerate(ClassGenerate const &cpy){
	*this = cpy;
}

ClassGenerate::~ClassGenerate(void){
}

ClassGenerate& ClassGenerate::operator=(ClassGenerate const &src){
	if (this != &src)
		*this = src;
	return *this;
}

static void message(std::string str){
	std::cout << GREEN << str << END << std::endl;
}

Base* ClassGenerate::generate(void){
	std::srand((unsigned)time(NULL));

	int choice = std::rand() % 3;

	if (choice == 0)
		return (message("A"), new A());
	else if (choice == 1)
		return (message("B"), new B());
	else if (choice == 2)
		return (message("C"), new C());
	return NULL;
}

void ClassGenerate::identify(Base *p){
	
	if (dynamic_cast<A*>(p) != NULL)
		message("Class A");
	else if(dynamic_cast<B*>(p) != NULL)
		message("Class B");
	else if(dynamic_cast<C*>(p) != NULL)
		message("Class C");
	else
		std::cout << RED << "Error cast" << END << std::endl;
}

void ClassGenerate::identify(Base &p){
	
	if (dynamic_cast<A*>(&p) != NULL)
		message("Class A");
	else if(dynamic_cast<B*>(&p) != NULL)
		message("Class B");
	else if(dynamic_cast<C*>(&p) != NULL)
		message("Class C");
	else
		std::cout << RED << "Error cast" << END << std::endl;
}
