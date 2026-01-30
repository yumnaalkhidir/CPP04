#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor called" << std::endl;
    _type = "Cat";
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

void Cat::makeSound()
{
    std::cout << _type << " Meow, Meow" << std::endl;
}

void Cat::setBrain(std::string word, int length)
{
    if (length > 100)
    {
        std::cerr << "Ideas array can't be more than a 100." << std::endl;
        return ;
    }
    for (int i = 0; i < length; i++)
        _brain->ideas[i] = word;
}

void Cat::getBrain(int index)
{
    if (index > 100)
    {
        std::cerr << "Ideas array can't be more than a 100." << std::endl;
        return ;
    }
    std::cout << "[ ";
    for(int i = 0; i < index; i++)
    {
        std::cout << _brain->ideas[i];
        if (i+1 != index)
            std::cout << ", ";
    }
    std::cout << " ]" << std::endl;
}
