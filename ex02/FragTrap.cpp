#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << "FragTrap "<< _name << " was created!" << std::endl;

}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< _name << " was destroyed!" << std::endl;
}
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}


