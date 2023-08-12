#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

int main(void)
{
   { 
      std::cout <<  GREEN<< "Test 00\n\n" << RESET; 
      try
      {
         Bureaucrat bc("Jade", 2);
         ShrubberyCreationForm form1("file");
         RobotomyRequestForm   form2("Robot");
         PresidentialPardonForm form3("Presidential");
         
         bc.executeForm(form1);
         std::cout << "Shrubbery test:" << GREEN << " pass." << RESET << std::endl;

         bc.executeForm(form2);
         std::cout << "RobotomyRequest test:" << GREEN << " pass." << RESET << std::endl;

         bc.executeForm(form3);
         std::cout << "PresidentialPardon test:" << GREEN << " pass." << RESET << std::endl;
      }
      catch(const std::exception& e)
      {
         std::cerr << RED << e.what() << '\n' << RESET;
      }
      
   }
   { 
      std::cout <<  GREEN<< "Test 01\n\n" << RESET; 
      try
      {
         Bureaucrat bc("Michael", 152);
         ShrubberyCreationForm form1("file");
         RobotomyRequestForm   form2("Robot");
         PresidentialPardonForm form3("Presidential");
         
         form1.execute(bc);
         std::cout << "Shrubbery test:" << GREEN << " pass." << RESET << std::endl;

         form2.execute(bc);
         std::cout << "RobotomyRequest test:" << GREEN << " pass." << RESET << std::endl;

         form3.execute(bc);
         std::cout << "PresidentialPardon test:" << GREEN << " pass." << RESET << std::endl;
      }
      catch(const std::exception& e)
      {
         std::cerr << RED << e.what() << '\n' << RESET;
      }
      
   }
   { 
      std::cout <<  GREEN<< "Test 02\n\n" << RESET; 
      try
      {
         Bureaucrat bc("Sampaoli", 71);
         ShrubberyCreationForm form1("file");
         RobotomyRequestForm   form2("Robot");
         PresidentialPardonForm form3("Presidential");
         
         form1.execute(bc);
         std::cout << "Shrubbery test:" << GREEN << " pass." << RESET << std::endl;

         form2.execute(bc);
         std::cout << "RobotomyRequest test:" << GREEN << " pass." << RESET << std::endl;

         form3.execute(bc);
         std::cout << "PresidentialPardon test:" << GREEN << " pass." << RESET << std::endl;
      }
      catch(const std::exception& e)
      {
         std::cerr << RED << e.what() << '\n' << RESET;
      }
      
   }
   { 
      std::cout <<  GREEN<< "Test 03\n\n" << RESET; 
      try
      {
         Bureaucrat bc("Satoshi Nakamoto", 26);
         ShrubberyCreationForm form1("file");
         RobotomyRequestForm   form2("Robot");
         PresidentialPardonForm form3("Presidential");
         
         form1.execute(bc);
         std::cout << "Shrubbery test:" << GREEN << " pass." << RESET << std::endl;

         form2.execute(bc);
         std::cout << "RobotomyRequest test:" << GREEN << " pass." << RESET << std::endl;

         form3.execute(bc);
         std::cout << "PresidentialPardon test:" << GREEN << " pass." << RESET << std::endl;
      }
      catch(const std::exception& e)
      {
         std::cerr << RED << e.what() << '\n' << RESET;
      }
      
   }

   return (0);
}