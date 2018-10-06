//
// Created by Vadym RADCHENKO on 10/6/18.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !\n";
}

SuperMutant::SuperMutant(SuperMutant const &e) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !\n";
	*this = e;
	//void(e);
}

SuperMutant::SuperMutant(int hp, std::string const &type) : Enemy(170, type) {
	std::cout << "Gaaah. Me want smash heads !\n";
}

SuperMutant::~SuperMutant() {
 std::cout << "Aaargh ...\n";
}

void SuperMutant::takeDamage(int dmg) {
	Enemy::takeDamage(dmg - 3);
}
