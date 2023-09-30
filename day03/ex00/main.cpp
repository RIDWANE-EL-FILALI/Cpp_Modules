#include "ClapTrap.hpp"

int	main(void) {
	std::string trapName0 = "robot";
	std::string trapName1 = "alien";

	ClapTrap	trap0(trapName0);
	ClapTrap	trap1(trapName1);

	trap0.attack(trapName1);
    trap1.takeDamage(5);
    trap1.beRepaired(5);
    trap1.attack(trapName0);
    trap0.takeDamage(15);
    trap0.beRepaired(10);
    trap0.attack(trapName1);
    trap1.takeDamage(9);
    trap1.beRepaired(9);
    std::cout << "\e[92mtrap1 for the win ha ha ha, aliens always win \e[0m👽" << std::endl;
	return (0);
}