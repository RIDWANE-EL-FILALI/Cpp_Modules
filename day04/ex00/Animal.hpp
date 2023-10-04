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
        ~Animal(void);
        Animal(Animal &src);
        Animal &operator=(Animal &src);
};


#endif