#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	//std::srand (time(NULL));
	FragTrap pika("Claptrap1111");;
	FragTrap pika2("Claptrap");
	FragTrap *pika3 = new FragTrap(pika2);
	FragTrap pika4[4];
	pika.takeDamage(35);
	pika.vaulthunter_dot_exe("Team R");
	pika.vaulthunter_dot_exe("Team R");
	pika.vaulthunter_dot_exe("Team R");
	pika.vaulthunter_dot_exe("Team R");
	pika.beRepaired(20);
	pika.rangedAttack("Cat");
	pika.meleeAttack("Bulbasaur");
	pika.takeDamage(100);
	pika3->takeDamage(99);

 	std::cout << "\n\n";
	ScavTrap sctrap("scvtrp");;
	ScavTrap sctrap2("scvtrp2");
	ScavTrap *sctrap3 = new ScavTrap(sctrap2);
	ScavTrap sctrap4[4];
	sctrap.takeDamage(35);
	sctrap.beRepaired(20);
	sctrap.challengeNewcomer("BigBoy");
	sctrap.challengeNewcomer("BigBoy");
	sctrap.challengeNewcomer("BigBoy");
	sctrap.challengeNewcomer("BigBoy");
	sctrap.rangedAttack("Grandma");
	sctrap.meleeAttack("Dog");
	sctrap.takeDamage(100);
	sctrap3->takeDamage(99);
	std::cout << "\n";
	delete pika3;
	delete sctrap3;
}