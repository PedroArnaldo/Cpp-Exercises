#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExecute) : 
	_name(name),
	_sign(false),
	_gradeSign(gradeSign),
	_gradeExecute(gradeExecute)
{
	try
	{
		if (gradeSign < 1 || gradeExecute < 1)
			throw Form::GradeTooLowException();
		if (gradeSign > 150 || gradeExecute > 150)
			throw Form::GradeTooHighException();
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n'; 
	}
	catch (const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n'; 
	}

}

Form::Form(const Form& src) :
	_name(src.getName()),
	_sign(src.getSign()),
	_gradeSign(src.getGradeSign()),
	_gradeExecute(src.getGradeExecute())
{
	std::cout << "Form copy constructor called.'" << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " is destroyed." << std::endl;
}

Form&	Form::operator=(Form const& rhs)
{
	if (this != &rhs)
	{
		this->_sign = rhs.getSign();
	}
	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSign() const 
{
	return this->_sign;
}

int Form::getGradeSign() const
{
	return this->_gradeSign;
}

int Form::getGradeExecute() const
{
	return this->_gradeExecute;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() >= this->getGradeSign() && bureaucrat.getGrade() > this->getGradeExecute())
			this->_sign = true;
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n'; 
	}
	catch (const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n'; 
	}
}

std::ostream& operator<<( std::ostream & o, Form const & i )
{
	o << "Form = " << i.getName() << std::endl;
	return o;
}

