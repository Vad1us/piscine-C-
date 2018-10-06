#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
public:
	std::string type;
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(std::string type);
	Zombie * newZombie(std::string name); 
	Zombie * randomChump();
};

#endif