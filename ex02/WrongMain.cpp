#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {    
        WrongAnimal a;
        a.makeSound();
        WrongCat c;
        c.makeSound();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        WrongAnimal *a = new WrongAnimal();
        a->makeSound();
        delete a;
        a = new WrongCat();
        a->makeSound();
        delete a;
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        WrongCat c;
        WrongAnimal& a = c;
        a.makeSound();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        meta->makeSound();
        delete meta;
        delete i;
    }
}