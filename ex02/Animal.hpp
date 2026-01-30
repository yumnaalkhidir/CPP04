#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <cstring>

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const AAnimal& copy);
        AAnimal& operator=(const AAnimal& copy);
        std::string getType() const;
        virtual ~AAnimal();
        virtual  void makeSound() = 0;
    
};
#endif