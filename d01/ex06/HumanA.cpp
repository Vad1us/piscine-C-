#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon w) {
	this->_name = name;
	this->_weapon = &w;
}

HumanA::~HumanA() {
	
}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << ".\n";
}
