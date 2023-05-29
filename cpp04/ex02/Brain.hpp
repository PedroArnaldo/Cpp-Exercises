#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class Brain
{

	public:
		Brain();
		Brain(const Brain &src);
		~Brain();
	
		Brain &operator=(Brain const &src);
		std::string& getIdea();

	private:
		std::string ideas[100];

};

#endif