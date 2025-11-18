#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout << "ScavTrap "<< _name << " was created!" << std::endl;

}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< _name << " was destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " is dead and cannot attack!" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy to attack!" << std::endl;
		return;
	}

	_energyPoints--;
	std::cout << "ScavTrap " << _name
			<< " attacks " << target
			<< ", causing " << _attackDamage
			<< " points of damage!" << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}

