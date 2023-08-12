#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	return *this;
}

static AForm *makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm *makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static std::string toLower(std::string str)
{
	std::string result = str;
	for (size_t i = 0; i < result.length(); i++)
	{
		result[i] = std::tolower(result[i]);
	}
	return result;
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	///mexer ou não na criação do form
	std::string name = toLower(form);

	std::string forms[3] = {
		"shrubbery",
		"robotomy",
		"presidential"
	};

	AForm *(*funcs[3])(std::string) = {
		&makeShrubberyCreationForm,
		&makeRobotomyRequestForm,
		&makePresidentialPardonForm
	};

	for (size_t i = 0; i < 3; i++)
	{
		if (forms[i] == name)
		{
			std::cout << "Intern creates " << form << std::endl;
			return (funcs[i](target));
		}
	}
	
	throw AForm::ErrorNotExits();
}
