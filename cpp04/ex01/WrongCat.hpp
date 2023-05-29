#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		virtual ~WrongCat();

		WrongCat &operator=(WrongCat const & src);

		void makeSound() const;
		std::string getType() const;
	private:

};

#endif