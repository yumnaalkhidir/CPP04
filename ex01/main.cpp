#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    {

        const Animal* i = new Cat();
        i->makeSound();
        delete i;
        const Animal* j = new Dog();
        j->makeSound();
        delete j;
    }
    {
        Animal *zoo[4];
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
    std::cout << "-------------------------------------" << std::endl;
    {
        Dog d1;
        d1.setBrain("hello", 3);
        Dog d2 = d1;
        d1.setBrain("hi", 5);
        d1.getBrain(3);
        d2.getBrain(3);
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Cat c1;
        c1.setBrain("play", 3);
        Cat c2;
        c2 = c1;
        c1.setBrain("sleep", 5);
        c1.getBrain(3);
        c2.getBrain(3);
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Cat c1;
        c1.setBrain("42", 3);
        c1 = c1;
        c1.setBrain("abu dhabi", 5);
        c1.getBrain(3);
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Dog *d1 = new Dog();
        d1->setBrain("food", 10);
        Dog d = *d1;
        delete d1;
        d.getBrain(10);
    }
}