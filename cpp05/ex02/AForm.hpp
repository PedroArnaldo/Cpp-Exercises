#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

	public:
		AForm();
		AForm(std::string name, int gradeSign, int gradeExecute);
		AForm(AForm const& src);
		~AForm();
		AForm& operator=(AForm const& rhs);
	
		std::string getName() const;
		bool getSign() const;
		int	getGradeSign() const;
		int	getGradeExecute() const;

		void beSigned(Bureaucrat const& bureaucrat);
		void execute(Bureaucrat const& executor) const;
		virtual void executeForm(Bureaucrat const& executor) const = 0;

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

std::ostream &operator<<(std::ostream &o, AForm const &i);

#endif
