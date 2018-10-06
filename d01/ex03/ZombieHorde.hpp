#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int i);
	~ZombieHorde();
	void	announce();
private:
	Zombie	*_army;
	int		_size;
};

#endif
