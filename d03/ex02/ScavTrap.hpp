//
// Created by Vadym RADCHENKO on 10/5/18.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
//#include "FragTrap.hpp"

class ScavTrap : public ClapTrap {
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
	void				challengeNewcomer(std::string const & target);
};


#endif //SCAVTRAP_HPP
