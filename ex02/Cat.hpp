#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& copy);
        ~Cat();
        void makeSound();
        void setBrain(std::string word, int length);
        void getBrain(int index);
};
#endif
