#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		Bureaucrat &		operator=( Bureaucrat const & rhs );
		
		std::string getName() const;
		int getGrade() const;
		void setGrade(int grade);
		void incrementGrade(int value);
		void decrementGrade(int value);

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw(){
					return ("Invalid grade, it's too high.\n");
				}
		};
		
		class GradeTooLowException : public std::exception {
			public:
				const char* what()  const throw(){
					return ("Invalid grade, it's too low.\n");
				}
		};

	private:
		const std::string _name;
		int _grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif 
