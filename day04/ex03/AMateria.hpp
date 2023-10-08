#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharcater;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(void);
        AMateria(AMateria const &src);
        AMateria(std::string const &type);
        virtual ~AMateria(void);
        AMateria &operator=(AMateria const &src);
        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &targer);
};




#endif