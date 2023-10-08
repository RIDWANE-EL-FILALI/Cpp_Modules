#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
    std::cout << "Understanding materia class" << std::endl;
    MateriaSource src;
    src.learnMateria(new Ice());
    src.learnMateria(new Cure());
    src.learnMateria(NULL);
    src.learnMateria(new Cure());
    src.learnMateria(new Ice());
    src.learnMateria(new Cure());
    src.displayKnownRecipes();
    AMateria *ice;
    ice = src.createMateria("ice");
    src.learnMateria(ice);
    AMateria *cure;
    cure = src.createMateria("cure");
    src.learnMateria(cure);
    AMateria *none;
    none = src.createMateria("none");
    src.learnMateria(none);
    std::cout << "Understanding character class" << std::endl;
    Character me;
    AMateria *one;
    one = src.createMateria("ice");
    AMateria *two;
    two = src.createMateria("cure");
    AMateria *three;
    three = src.createMateria("ice");
    AMateria *four;
    four = src.createMateria("cure");
    me.equip(one);
    me.equip(two);
    me.equip(three);
    me.equip(four);
    AMateria *five;
    five = src.createMateria("ice");
    me.equip(five);
    me.displayInventory();
    me.unequip(10);
    me.unequip(0);
    me.unequip(2);
    me.displayInventory();
    me.setName("ME");
    ICharacter *tmp = new Character("YOU");
    me.use(0, *tmp);
    me.use(1, *tmp);
    me.displayInventory();
    me.use(3, *tmp);
    me.displayInventory();

    delete tmp;
    return (0);
}