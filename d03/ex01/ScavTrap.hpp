//
// Created by Vadym RADCHENKO on 10/5/18.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
//#include "FragTrap.hpp"

class ScavTrap {
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap const &f_t);
	ScavTrap &operator=(ScavTrap const &f_t);
	ScavTrap(std::string	name);
	ScavTrap(unsigned int _hp, unsigned int _maxHp, unsigned int _energy,
			 unsigned int _maxEnergy, unsigned int _lvl, std::string _name, unsigned int _meleeDmg,
			 unsigned int _rangeDmg, unsigned int _armor);
	void				quote();
	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				challengeNewcomer(std::string const & target);
//	unsigned int const	getHp();
//	unsigned int const	getEnergy();
//	unsigned int const	getLvl();
//	std::string const	getName();
//	unsigned int const	getMeleeDmg();
//	unsigned int const	getRangeDmg();
//	unsigned int const	getArmor();
private:
	static bool 		_flag;
	unsigned int		_hp;
	unsigned int		_maxHp;
	unsigned int 		_energy;
	unsigned int 		_maxEnergy;
	unsigned int 		_lvl;
	std::string			_name;
	unsigned int 		_meleeDmg;
	unsigned int 		_rangeDmg;
	unsigned int 		_armor;
};


#endif //SCAVTRAP_HPP
