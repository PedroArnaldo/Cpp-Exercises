#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include  "Brain.hpp"
# include <stdlib.h>

class Cat : public Animal
{

	public:

		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat &operator=(Cat const &src);

		void makeSound() const;
		std::string& think();

	private:
		Brain *brain;
};

#endif