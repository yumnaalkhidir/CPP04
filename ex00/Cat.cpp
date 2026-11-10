#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Cat Copy Constructor called" << std::endl;

}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "Cat Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        Animal::operator=(copy);
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << " Meow, Meow" << std::endl;
}
