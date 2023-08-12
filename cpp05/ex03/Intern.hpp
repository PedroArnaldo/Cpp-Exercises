#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern(Intern const &src);
		~Intern();
		Intern &operator=(Intern const &rhs);

		AForm *makeForm(std::string form, std::string target);
	private:

};

#endif