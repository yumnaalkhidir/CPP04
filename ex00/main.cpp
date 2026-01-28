#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    {    
        Animal a;
        a.makeSound();
        Cat c;
        c.makeSound();
        Dog d;
        d.makeSound();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Animal *a = new Animal();
        a->makeSound();
        delete a;
        Dog *dog = new Dog();
        a = dog;
        a->makeSound();
        delete a;
        a = new Cat();
        a->makeSound();
        delete a;

    }
    std::cout << "-------------------------------------" << std::endl;
    {
        Cat c;
        Animal& a = c;
        a.makeSound();
        Dog d;
        Animal& a2 = d;
        a2.makeSound();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
}