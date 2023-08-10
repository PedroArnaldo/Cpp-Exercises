#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("Shrubbery", 145, 137)
{
	this->_target = "void";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("Shrubbery", 145, 137)
{
	this->_target = target;	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	AForm(src)
{
	this->_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if ( this != &rhs )
	{
		this->AForm::operator=(rhs);
		this->_target = rhs._target;
	}
	return *this;
}

void ShrubberyCreationForm::executeForm(Bureaucrat const& executor) const
{
	(void) executor;
	std::string nameFile = this->_target + "_shrubbery";
	std::ofstream file(nameFile.c_str());

	if (file.is_open())
	{
		file << "      /\\\n";
        file << "     //\\\\\n";
        file << "   ////\\\\\\\\\n";
        file << "  /////\\\\\\\\\\\n";
        file << " //////\\\\\\\\\\\\\\\n";
        file << "    ///\\\\\\\n";
    	file << "      ||||\n";
        file << "      ||||\n";
        file << "      ||||\n";
        file << std::endl;

        file.close();
	} 
	else 
		throw ShrubberyCreationForm::OpenFile();
}
