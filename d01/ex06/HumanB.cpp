#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
}

HumanB::~HumanB() {
	
}

void	HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << ".\n";
}

void	HumanB::setWeapon(Weapon w) {
	_weapon = &w;
}