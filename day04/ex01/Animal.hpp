#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(std::string &Type);
        virtual ~Animal(void);
        Animal(Animal &src);
        Animal &operator=(Animal &src);
        std::string const &getType(void) const;
        virtual void makeSound(void) const;
};


#endif