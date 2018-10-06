#include "Zombie.hpp"

void Zombie::announce() {
	std::string cry[] = {"Braiiiiiiinnnssss...",  "Die!!!", "Kill me, please...", "Run for your life!!!", "You cant run from heaven..."};
	std::cout << "<" << this->_name << "(" << this->_type << ")" << ">" << cry[rand() % 5] << "\n";
}

Zombie::Zombie()
{
	std::string names[] = {"Bob", "Frank", "Lessie", "Baobab", "Jakiro", "Tony Stark", "Cucumber", "Bilbo Beggins", "Pikachu",
		"Deineris", "Viktor Reznov"};
	this->_name = names[std::rand() % 11];
	std::string types[] = {"Slayer", "Archer", "Mage", "Commander", "Hackerman"};
	this->_type = types[std::rand() % 5];
	std::cout << this->_name << " is CREATED.\n";
}
Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << this->_name << " is CREATED.\n";
}

Zombie::~Zombie() {
	std::cout << this->_name << " DIED.\n";
}

