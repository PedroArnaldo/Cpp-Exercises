#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW "\033[0;33m"

int main(void)
{
   {
      try 
      {
         std::cout << YELLOW << "FIRST TEST" << RESET << std::endl;	
         Intern noNameIntern;
         AForm* form1;
         AForm* form2;
         AForm* form3;
         form1 = noNameIntern.makeForm("Robotomy", "wall");
         std::cout << *form1 << std::endl;
         form2 = noNameIntern.makeForm("Presidential", "big Wall");
         std::cout << *form2 << std::endl;
         form3 = noNameIntern.makeForm("Shrubbery", "supreme Wall");
         std::cout << *form3 << std::endl;
         delete form1;
         delete form2;
         delete form3;

      }
      catch (std::exception& e)
      {
         std::cerr << e.what() << std::endl;
      }
   }
   {
      try
      {
         std::cout << std::endl << YELLOW << "SECOND TEST" << RESET << std::endl;
         Intern noNameIntern;
         AForm* fake;
      
         fake = noNameIntern.makeForm("marvin", "Reblox");
         std::cout << fake << std::endl;
      }
      catch (std::exception& e)
      {
         std::cerr << e.what() << std::endl;
      }
   }
	return (0);
}