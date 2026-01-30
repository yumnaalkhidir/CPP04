#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        ~Dog();
        void makeSound() const;
        void setBrain(std::string word, int length);
        void getBrain(int index);
};
#endif
