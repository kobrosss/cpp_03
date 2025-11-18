#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Biba");
	ClapTrap b("Boba");

	a.attack("Boba");
	b.takeDamage(5);

	b.beRepaired(3);
	b.beRepaired(10);

	a.attack("Boba");
	b.takeDamage(10);

	b.beRepaired(5);

	for (int i = 0; i < 11; i++)
		a.attack("Boba");

	return 0;
}
