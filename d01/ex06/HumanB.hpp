#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	Weapon	*_weapon;
	std::string	_name;
public:
	void	attack();
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon w);
};

#endif