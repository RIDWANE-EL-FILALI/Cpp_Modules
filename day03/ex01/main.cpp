#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	std::string scav1 = "CT-1";
	std::string scav2 = "CT-2";

	ScavTrap	alien(scav1);
	ScavTrap	robot(scav2);

    alien.attack(scav2);
    robot.takeDamage(5);
    robot.beRepaired(9);
    robot.attack(scav1);
    alien.takeDamage(15);
    alien.beRepaired(10);
    alien.attack(scav2);
    robot.takeDamage(20);
    robot.beRepaired(20);
    std::cout << "Aliens for the win !!!! 👽" << std::endl;
	return (0);
}