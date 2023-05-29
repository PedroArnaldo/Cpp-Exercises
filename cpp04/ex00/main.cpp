#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << std::endl;
    std::cout << "Test Wrog Class";
    std::cout << std::endl << std::endl;

    const WrongAnimal *wAnimal = new WrongAnimal();
    const WrongAnimal *wCat = new WrongCat();  

    std::cout << wAnimal->getType() << " " << std::endl;
    std::cout << wCat->getType() << " "  << std::endl;
    wAnimal->makeSound();
    wCat->makeSound();

    delete wAnimal;
    delete wCat;


    std::cout << std::endl << std::endl;
    std::cout << "Test Cat Class";
    std::cout << std::endl << std::endl;

    const Cat* tom = new Cat();
    std::cout << tom->getType() << " "<< std::endl;
    tom->makeSound();

    delete tom;

    return 0;
}