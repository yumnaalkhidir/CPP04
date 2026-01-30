#include "Animal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Animal Default Constructor called" << std::endl;
    _type = "Default";
}

AAnimal::AAnimal(const AAnimal& copy)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    _type = copy._type;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
    std::cout << "Animal Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
    return (_type);
}
