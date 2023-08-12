#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("Shrubbery", 145, 137)
{
	this->_target = "default";
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

void ShrubberyCreationForm::executeForm() const
{
	std::string nameFile = this->_target + "_shrubbery";
	std::ofstream file(nameFile.c_str());

	if (file.is_open())
	{
		file << "              # #### ####\n";
        file << "            ### \\/#|### |/####\n";
        file << "           ##\\/#/ \\||/##/_/##/_#\n";
        file << "         ###  \\/###|/ \\/ # ###\n";
        file << "       ##_\\_#\\_\\## | #/###_/_####\n";
        file << "     ## #### # \\ #| /  #### ##/##\n";
    	file << "      __#_--###`  |{,###---###-~\n";
        file << "               \\ }{\n";
        file << "                 }}{\n";
        file << "                 }}{\n";
        file << "                 }}{\n";
        file << "                 {{}\n";
        file << "           , -=-~{ .-^- _\n";
        file << "                 `}\n";
        file << "                  {\n";
        file << std::endl;

        file.close();
	} 
	else 
		throw ShrubberyCreationForm::OpenFile();
}
