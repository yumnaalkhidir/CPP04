#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;

}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    std::cout << "WrongCat Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        WrongAnimal::operator=(copy);
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << " Meow, Meow" << std::endl;
}
