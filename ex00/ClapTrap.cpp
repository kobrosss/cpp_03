#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) :
	Name(name), hitPoints(10), energyPoints(10), attackDamage(0)
	{
		std::cout << "ClapTrap " << this->Name << " created! " << std::endl;
	}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Name << " destroyed! " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->energyPoints <= 0 || this-> hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->Name << "has no energy or hit points" << std::endl;
		return;
	}

}

