#include "Zombie.hpp"
#include <cstdlib>
void randomChump(std::string name);
Zombie *newZombie(std::string name);

void fun(void)
{
    system("leaks brainzz");
}

int main()
{
    //atexit(fun);
    Zombie hello("ridwane");
    hello.announce();
    Zombie *ret;
    ret = newZombie("second");
    ret->announce();
    delete ret;
    randomChump("third");
    return (0);
}