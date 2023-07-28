#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExecute) : 
	_name(name),
	_gradeSign(gradeSign),
	_gradeExecute(gradeExecute)
{
	try
	{
		if (gradeSign < 1 || gradeExecute < 1)
			throw Form::GradeTooLowExeception();
		if (gradeSign > 150 || gradeExecute > 150)
			throw Form::GradeTooHighExecption();
	}
	catch (const Form::GradeTooLowExeception& e)
	{
		std::cerr << e.what() << '\n'; 
	}
	catch (const Form::GradeTooHigh'Exeception& e)
	{
		std::cerr << e.what() << '\n'; 
	}

}

Form::Form(const Form& src)
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
	return this->_gradeSing;
}

int Form::getGradeExecute() const
{
	return this->_gradeExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	try
	{
	
	}
	catch
	{
	}
}

std::ostream& operator<<( std::ostream & o, Form const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

