#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    _type = "Default";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    _type = copy._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        this->_type = copy._type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Generic WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}
