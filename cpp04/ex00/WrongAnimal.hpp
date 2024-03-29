#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal();

		WrongAnimal &operator=(WrongAnimal const & src);

		std::string getType() const;
		void 		makeSound() const;

	protected:
		std::string type;

};

#endif