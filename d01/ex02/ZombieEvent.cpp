#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent() {
	std::cout << this->type << "Event is created.\n";
}

ZombieEvent::~ZombieEvent() {
	std::cout << this->type << "Event died.\n";
}

void ZombieEvent::setZombieType(std::string type)  {
	this->type = type;
}

Zombie * ZombieEvent::newZombie(std::string name) {
	Zombie  * zomb = new Zombie(name, this->type);
	return(zomb);
}

Zombie * ZombieEvent::randomChump() {
	std::string names[] = {"Bob", "Frank", "Lessie", "Baobab", "Jakiro", "Tony Stark", "Cucumber", "Bilbo Beggins", "Pikachu",
		"Deineris", "Viktor Reznov"};
	std::string name = names[std::rand() % 11];
	Zombie * zomb = newZombie(name);
	zomb->announce();
	return(newZombie(name));
}