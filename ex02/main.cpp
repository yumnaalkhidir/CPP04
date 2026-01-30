#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    {
        AAnimal* i = new Cat();
        std::cout << i->getType() << std::endl;
        i->makeSound();
        delete i;

        AAnimal* j = new Dog();
        std::cout << j->getType() << std::endl;
        j->makeSound();
        delete j;
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        AAnimal *zoo[4];
        for (int i = 0; i < 4; i++)
        {
            if (i % 2 == 0)
                zoo[i] = new Dog();
            else
                zoo[i] = new Cat();
            std::cout << "Animal #" << i + 1 << " type: " << zoo[i]->getType() << std::endl;
            zoo[i]->makeSound();
        }
        for (int i = 0; i < 4; i++)
        {
            delete zoo[i];
        }        
    }
}