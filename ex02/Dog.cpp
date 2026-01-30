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

void Dog::makeSound()
{
    std::cout << _type << " Woof, Woof" << std::endl;
}

void Dog::setBrain(std::string word, int length)
{
    if (length > 100)
    {
        std::cerr << "Ideas array can't be more than a 100." << std::endl;
        return ;
    }
    for (int i = 0; i < length; i++)
        _brain->ideas[i] = word;
}

void Dog::getBrain(int index)
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
