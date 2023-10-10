/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fila <rel-fila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:40:43 by rel-fila          #+#    #+#             */
/*   Updated: 2023/10/08 18:48:30 by rel-fila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void further_tests_if_your_hard_headed(void)
{
    Dog *pitbull = new Dog();
    Cat *lisley = new Cat();
    pitbull->getBrain()->setIdea(0, "bite, bite, bite");
    pitbull->getBrain()->setIdea(1, "bark, bark, bark");
    lisley->getBrain()->setIdea(0, "pete me Human !");
    lisley->getBrain()->setIdea(1, "meow, meow, meow");
    std::cout << "\033[42mnormal assignning ideas to objects\033[0m" << std::endl;
    std::cout << "\033[33mpitbull idea : \033[0m" << pitbull->getBrain()->getIdea(0) << std::endl;
    std::cout << "\033[33mlisley idea : \033[0m" << lisley->getBrain()->getIdea(0) << std::endl;
    std::cout << "\033[33mpitbull idea : \033[0m" << pitbull->getBrain()->getIdea(1) << std::endl;
    std::cout << "\033[33mlisley idea : \033[0m" << lisley->getBrain()->getIdea(1) << std::endl;
    std::cout << "\033[42mTrying to create a copy of every object\033[0m" << std::endl;
    Dog *copydog = new Dog(*pitbull);
    Cat *copycat = new Cat(*lisley);
    std::cout << "\033[33mcopydog idea : \033[0m" << copydog->getBrain()->getIdea(0) << std::endl;
    std::cout << "\033[33mcopycat idea : \033[0m" << copycat->getBrain()->getIdea(0) << std::endl;
    std::cout << "\033[33mcopydog idea : \033[0m" << copydog->getBrain()->getIdea(1) << std::endl;
    std::cout << "\033[33mcopycat idea : \033[0m" << copycat->getBrain()->getIdea(1) << std::endl;
    std::cout << "\033[42mchanging dog and cat ideas to see if the ideas will also change for the copy's\033[0m" << std::endl;
    pitbull->getBrain()->setIdea(0, "changed ::bite, bite, bite");
    pitbull->getBrain()->setIdea(1, "changed ::bark, bark, bark");
    lisley->getBrain()->setIdea(0, "changed ::pete me Human !");
    lisley->getBrain()->setIdea(1, "changed ::meow, meow, meow");
    std::cout << "\033[42mPrinting the changes made for the original cat and dog\033[0m" << std::endl;
    std::cout << "\033[33mpitbull idea : \033[0m" << pitbull->getBrain()->getIdea(0) << std::endl;
    std::cout << "\033[33mlisley idea : \033[0m" << lisley->getBrain()->getIdea(0) << std::endl;
    std::cout << "\033[33mpitbull idea : \033[0m" << pitbull->getBrain()->getIdea(1) << std::endl;
    std::cout << "\033[33mlisley idea : \033[0m" << lisley->getBrain()->getIdea(1) << std::endl;
    std::cout << "\033[42mPrinting the changes made for the copy's\033[0m" << std::endl;
    std::cout << "\033[33mcopydog idea : \033[0m" << copydog->getBrain()->getIdea(0) << std::endl;
    std::cout << "\033[33mcopycat idea : \033[0m" << copycat->getBrain()->getIdea(0) << std::endl;
    std::cout << "\033[33mcopydog idea : \033[0m" << copydog->getBrain()->getIdea(1) << std::endl;
    std::cout << "\033[33mcopycat idea : \033[0m" << copycat->getBrain()->getIdea(1) << std::endl;
    delete pitbull;
    delete lisley;
    delete copycat;
    delete copydog;
}

// void testnot(void)
// {
//     Animal *bird = new Animal();
//     bird->makeSound();
//     delete bird;
// }

int main()
{
    std::cout << "Animal farm with no brains " << std::endl;
    std::cout << "---------------------------" << std::endl;
    Animal *animalfarm[9] = {NULL};
    std::cout << "Creating a hord of animal/'s half cat's and the other half is dogs" << std::endl;
    for(int i = 0;i < 8 / 2; i++)
    {
        animalfarm[i] = new Cat();
    }
    for(int i = 4; i< 8; i++)
    {
        animalfarm[i] = new Dog();
    }
    std::cout << "The horde is making soo much noise" << std::endl;
    std::cout << "\033[33m";
    for(int i = 0; i<8; i++)
    {
        animalfarm[i]->makeSound();
    }
    std::cout << "\033[0m";
    std::cout << "now kill all of them to have some good night sleep" << std::endl;
    for(int i = 0;animalfarm[i]; i++)
        delete animalfarm[i];

    // further tests
    // further_tests_if_your_hard_headed();

    // this test below should not compile
    // testnot();

    return 0;
}