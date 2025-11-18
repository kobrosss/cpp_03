#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created! " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed! " << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot attack!" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy to attack!" << std::endl;
		return;
	}

	_energyPoints--;
	std::cout << "ClapTrap " << _name
			<< " attacks " << target
			<< ", causing " << _attackDamage
			<< " points of damage!" << std::endl;
}
void ClapTrap ::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " amount of Damage!" << std::endl;

	if (_hitPoints < (int)amount)
	{
		_hitPoints = 0;
		std::cout << "CalpTrap" << this->_name << " destroyed!" << std::endl;
	}
	else
		_hitPoints -= amount;
}

void ClapTrap ::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot be repaired... R.I.P." << std::endl;
		return;
	}

	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to repair himself!" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;

	std::cout << "ClapTrap " << _name << " repairs himself and gains " << amount
			  << " hit points! (now has " << _hitPoints << " HP)" << std::endl;
}
