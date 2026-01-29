#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor called" << std::endl;
    _type = "Cat";
    std::cout << "f" << std::endl;
    _brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    _brain = new Brain(*copy._brain);
}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "Cat Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy);
        delete _brain;
        _brain = new Brain(*copy._brain);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete _brain;
}

void Cat::makeSound() const
{
    std::cout << _type << " Meow, Meow" << std::endl;
}
