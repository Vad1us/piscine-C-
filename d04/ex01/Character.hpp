//
// Created by Vadym RADCHENKO on 10/6/18.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int 		_AP;
	AWeapon		*_w;
	Character();
public:
	Character(Character const &c);
	Character(std::string const & name);
	~Character();
	Character &operator=(Character const &c);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string		getName() const;
	int 			getAp() const;
	AWeapon			*getWeapon() const;
};

std::ostream &operator<<(std::ostream &o, Character const &c);

#endif //EX01_CHARACTER_HPP
