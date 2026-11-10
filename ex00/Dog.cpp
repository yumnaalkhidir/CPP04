#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
    std::cout << "Dog Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << " Woof, Woof" << std::endl;
}
