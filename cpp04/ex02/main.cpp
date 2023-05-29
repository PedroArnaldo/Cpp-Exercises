#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
    //Animal a;
    Animal *a1 = new Cat();
    Animal *a2 = new Dog();

    delete a1;
    delete a2;


    Animal *array[6];

    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
            array[i] = new Cat();
        else
            array[i] = new Dog(); 

    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << array[i]->getType() << std::endl;
        array[i]->makeSound();
        delete array[i];
    }
    

    Dog *rex = new Dog();

    std::cout << rex->think() << std::endl;

    std::cout << "Deep Copie" << std::endl;

    Dog flocos;
    Dog flocoscClone = flocos;

    std::cout << flocos.think() << std::endl;
    std::cout << &flocos << std::endl;
    std::cout << flocoscClone.think() << std::endl;
    std::cout << &flocoscClone << std::endl;

    delete rex;    
    return 0;
}