#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	std::string clap = "alien";
	std::string scav = "robot";

    ClapTrap	alien(clap);
	ScavTrap	robot(scav);

    robot.attack(clap);
    alien.takeDamage(20);
    alien.beRepaired(20);
    robot.guardGate();
    std::cout << "Robot for the win !!!! 👽" << std::endl;

    
    // alien.attack(scav);
    // robot.takeDamage(190);
    // robot.beRepaired(100);
    // robot.attack(clap);
    // robot.guardGate();
    // std::cout << "alien for the win !!!! 👽" << std::endl;
	return (0);
}