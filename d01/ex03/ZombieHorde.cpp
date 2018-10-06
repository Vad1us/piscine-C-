#include "ZombieHorde.hpp"


void	ZombieHorde::announce() {
	int i;

	i = 0;
	while (i < this->_size)
	{
		this->_army[i].announce();
		i++;
	}
}

ZombieHorde::ZombieHorde(int i) {
	this->_army = new Zombie[i];
	this->_size = i;
}

ZombieHorde::~ZombieHorde() {
	std::cout << "The horde died with honor.\n";
	delete[] this->_army;
}