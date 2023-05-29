#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain &		operator=(Brain const &src);

	private:

};

#endif