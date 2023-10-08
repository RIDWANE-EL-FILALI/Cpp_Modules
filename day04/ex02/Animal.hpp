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
        virtual ~Animal(void);
        Animal(Animal &src);
        Animal &operator=(Animal &src);
        virtual void makeSound(void) const = 0;
};


#endif