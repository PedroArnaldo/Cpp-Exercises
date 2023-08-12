#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	AForm("RobotomyRequestForm", 72, 42),
	_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm():
	AForm("RobotomyRequestForm", 72, 42),
	_target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
	AForm(src)
{
	this->_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if ( this != &rhs )
	{
		AForm::operator=(rhs);
		this->_target = rhs._target;
	}
	return *this;
}

void RobotomyRequestForm::executeForm() const
{
	std::srand(std::time(NULL));
	std::cout << "Vrrrrrrrrrrrrrrrrrr!" << std::endl;

	int randomNumber = std::rand();

	if (!(randomNumber % 2))
		std::cout << this->_target << " has been robotomized!" << std::endl;
	else 
		std::cout << this->_target << " has not been robotomized!" << std::endl;
}