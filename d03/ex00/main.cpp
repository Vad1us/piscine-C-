#include <iostream>
#include "FragTrap.hpp"

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
	pika3->takeDamage(104);
	delete pika3;
}