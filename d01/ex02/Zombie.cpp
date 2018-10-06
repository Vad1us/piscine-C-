#include "Zombie.hpp"

void Zombie::announce() {
	std::string cry[] = {"Braiiiiiiinnnssss...",  "Die!!!", "Kill me, please...", "Run for your life!!!", "You cant run from heaven..."};
	std::cout << "<" << this->_name << "(" << this->_type << ")" << ">" << cry[std::rand() % 5] << "\n";
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << this->_name << " is CREATED.\n";
}

Zombie::~Zombie() {
	std::cout << this->_name << " DIED.\n";
}

