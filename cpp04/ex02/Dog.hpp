#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog &operator=(Dog const & src);

		void makeSound() const;
		std::string think() const;
	
	private:
		Brain *brain;
};

#endif