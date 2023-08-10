#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
   Bureaucrat bc("Jade", 21);
   ShrubberyCreationForm form1("file");

   form1.beSigned(bc);

   form1.execute(bc);

   return (0);
}