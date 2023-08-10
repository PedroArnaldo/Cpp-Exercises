#include "AForm.hpp"

AForm::AForm() :
	_name("Dafault"),
	_sign(false),
	_gradeSign(100),
	_gradeExecute(0)
{
	try
	{
		if (this->_gradeSign < 1)
			throw AForm::GradeTooLowException();
		if (this->_gradeSign > 150)
			throw AForm::GradeTooHighException();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n'; 
	}
	catch (const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n'; 
	}
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : 
	_name(name),
	_sign(false),
	_gradeSign(gradeSign),
	_gradeExecute(gradeExecute)
{
	try
	{
		if (gradeSign < 1)
			throw AForm::GradeTooLowException();
		if (gradeSign > 150)
			throw AForm::GradeTooHighException();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n'; 
	}
	catch (const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n'; 
	}
}

AForm::AForm(const AForm& src) :
	_name(src.getName()),
	_sign(src.getSign()),
	_gradeSign(src.getGradeSign()),
	_gradeExecute(src.getGradeExecute())
{
	std::cout << "Form copy constructor called.'" << std::endl;
}

AForm::~AForm()
{
	std::cout << "Form " << this->_name << " is destroyed." << std::endl;
}

AForm&	AForm::operator=(AForm const& rhs)
{
	if (this != &rhs)
	{
		this->_sign = rhs.getSign();
	}
	return *this;
}

std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::getSign() const 
{
	return this->_sign;
}

int AForm::getGradeSign() const
{
	return this->_gradeSign;
}

int AForm::getGradeExecute() const
{
	return this->_gradeExecute;
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() >= this->getGradeSign())
			this->_sign = true;
		else
			throw AForm::GradeTooLowException();
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what(); 
	}
	catch (const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what(); 
	}
}

void AForm::execute(Bureaucrat const& executor) const
{
	if(executor.getGrade() > this->_gradeExecute)
		throw (GradeTooLowException());
	else
		executeForm(executor);
}

std::ostream& operator<<( std::ostream & o, AForm const & i )
{
	o << "Form = " << i.getName() << ", is signature: " << i.getSign() << 
	", " << " grade signature:  " << i.getGradeSign() << ", " << " grade execute: " << 
	i.getGradeExecute() << std::endl;
	return o;
}
