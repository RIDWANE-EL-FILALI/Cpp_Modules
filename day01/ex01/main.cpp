#include "Zombie.hpp"
Zombie *zombieHorde(int N, std::string name);

int main()
{
    Zombie *herd = zombieHorde(10, "ridwane");
    for(int i = 0; i < 10; i++)
        herd[i].announce();
    delete[] herd;
    return (0);
}