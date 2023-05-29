#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal(std::string type);
		Animal(Animal const &src);
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );

		std::string const& getType(void) const;
		virtual void makeSound() const = 0;

	protected:
		std::string type;

};

#endif