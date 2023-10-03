#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	std::string clap = "alien";
	std::string scav = "robot";
    std::string Frag = "vampire";
    std::cout << "now the battle that everyone was waiting for, the battle of the century" << std::endl;
    std::cout << "The battle between aliens and robots and vampires" << std::endl;
    std::cout << "one can't help himself only to wonder who's gonna be the last soldier" << std::endl;

    ClapTrap	alien(clap);
	ScavTrap	robot(scav);
    FragTrap    vampire(Frag);


    alien.attack(scav);
    robot.takeDamage(8);
    robot.beRepaired(8);
    robot.attack(Frag);
    vampire.takeDamage(3);
    vampire.beRepaired(3);
    vampire.attack(clap);
    alien.takeDamage(20);
    alien.beRepaired(10);
    vampire.attack(scav);
    robot.takeDamage(30);
    robot.beRepaired(20);
    robot.guardGate();
    vampire.highFivesGuys();
    std::cout << "as we all expected vampires will win hazaaa !!!" << std::endl;
    return (0);
}