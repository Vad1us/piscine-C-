#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	Weapon		*_weapon;
	std::string	_name;
public:
	void	attack();
	HumanA(std::string name, Weapon w);
	~HumanA();
};

#endif