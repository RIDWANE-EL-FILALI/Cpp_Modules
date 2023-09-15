#include "Zombie.hpp"
void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main()
{
    //atexit(fun);
    Zombie hello("ridwane");
    hello.announce();
    Zombie *ret;
    ret = newZombie("second");
    ret->announce();
    randomChump("third");
    delete ret;
    return (0);
}