#ifndef MATERIA_HPP
#define MATERIA_HPP

#include <iostream>
#include "Character.hpp"
class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(const AMateria& copy);
        AMateria& operator=(const AMateria& copy);
        ~AMateria();
        std::string const& getType() const;
        virtual AMateria* clone() = 0;
        virtual void use(ICharacher& target);
};
#endif