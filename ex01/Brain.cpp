#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain Copy Constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];

}

Brain& Brain::operator=(const Brain& copy)
{
    std::cout << "Brain Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}