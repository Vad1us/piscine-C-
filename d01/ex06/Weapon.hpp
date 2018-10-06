#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string _type;
	std::string &_tref;
public:
	Weapon(std::string w);
	~Weapon();
	std::string const	&getType();
	void	setType(std::string w);
};

#endif