#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const & src);
        WrongAnimal(std::string const & type);
        virtual ~WrongAnimal(void);
        WrongAnimal &operator=(WrongAnimal const &src);
        std::string const &getType(void) const;
        void makeSound(void) const;
};




#endif