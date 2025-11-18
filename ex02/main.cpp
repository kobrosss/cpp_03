#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("Biba");
	ClapTrap b("Boba");
	ScavTrap c("Joba");
	FragTrap d("Juan");

	a.attack("Boba");
	b.takeDamage(5);
	c.attack("Boba");
	c.guardGate();
	d.highFivesGuys();

	b.beRepaired(3);
	b.beRepaired(10);

	a.attack("Boba");
	b.takeDamage(10);

	b.beRepaired(5);

	for (int i = 0; i < 11; i++)
		a.attack("Boba");

	return 0;
}
