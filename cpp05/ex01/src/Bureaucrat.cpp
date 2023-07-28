#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) :
	_name(name),
	_grade(grade)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
	
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Bureaucrat " << this->getName() << " is born." << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) :	
	_name(src.getName()), 
	_grade(src.getGrade())
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->getName() << " is destroyed." << std::endl;
}

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	std::cout << "Bureaucrat assignation constructor called." << std::endl;
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
		this->_grade = grade;	
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::incrementGrade(int value)
{	
	try
	{
		if (this->_grade + value > 150)
			throw Bureaucrat::GradeTooHighException();
		else
			setGrade(this->_grade + value);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::decrementGrade(int value)
{	
	try
	{
		if (this->_grade - value < 1)
			throw Bureaucrat::GradeTooLowException();
		else
			this->setGrade(this->_grade - value);
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream &operator<<(std::ostream & o, Bureaucrat const &i)
{
	o << "Name: " << i.getName() <<  ", bureaucrat grade: " << i.getGrade() << "." <<std::endl;
	return o;
}

