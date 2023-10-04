#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test_in_subject2(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;
    return ;
}

void test_in_subject(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;
    return ;
}

int main()
{
    std::cout << "\033[1;31mThis is the subject test 1\033[0m" << std::endl; 
    test_in_subject();
    std::cout << "\033[1;31mThis is the subject test but with wronganimal\033[0m" << std::endl;
    test_in_subject2();
    return 0;
}