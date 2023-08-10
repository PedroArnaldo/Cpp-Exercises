#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

		void executeForm(Bureaucrat const& executor) const;
	
		class OpenFile : public std::exception {
			public:
				const char* what() const throw(){
					return ("Error open file.\n");
				}
		};

	private:
		std::string _target;

};

#endif