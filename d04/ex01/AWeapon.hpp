//
// Created by Vadym RADCHENKO on 10/5/18.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP

#include <iostream>
class AWeapon
{
protected:
	std::string	_name;
	int			_damage;
	int			_APcost;
public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &w);
	~AWeapon();
	std::string getName() const;
	AWeapon &operator=(AWeapon const &w);
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif //EX01_AWEAPON_HPP
