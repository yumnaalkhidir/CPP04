#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called" << std::endl;
    _type = "Default";
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    _type = copy._type;
}

Animal& Animal::operator=(const Animal& copy)
{
    std::cout << "Animal Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Generic Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
    return (_type);
}
