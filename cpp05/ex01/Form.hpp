#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		Form();
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(Form const& src);
		~Form();
		Form& operator=(Form const& rhs);
	
		std::string getName() const;
		bool getSign() const;
		int	getGradeSign() const;
		int	getGradeExecute() const;

		void beSigned(Bureaucrat const& bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw(){
					return ("Form: invalid grade, it's too high.\n");
				}
		};
		
		class GradeTooLowException : public std::exception {
			public:
				const char* what()  const throw(){
					return ("Form: invalid grade, it's too low.\n");
				}
		};

	private:
		const std::string _name;
		bool  _sign;
		const int   _gradeSign;
		const int	_gradeExecute;

};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif
