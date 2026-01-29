#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    _brain = new Brain(*copy._brain);
}

Dog& Dog::operator=(const Dog& copy)
{
    std::cout << "Dog Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy);
        delete _brain;
        _brain = new Brain(*copy._brain);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << _type << " Woof, Woof" << std::endl;
}
