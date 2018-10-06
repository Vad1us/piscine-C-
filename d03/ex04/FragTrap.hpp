//
// Created by Vadym RADCHENKO on 10/4/18.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP


#include <iostream>
#include <random>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap();
	~FragTrap();
	FragTrap(FragTrap const &f_t);
	FragTrap &operator=(FragTrap const &f_t);
	FragTrap(std::string	name);
	FragTrap(unsigned int _hp, unsigned int _maxHp, unsigned int _energy,
		unsigned int _maxEnergy, unsigned int _lvl, std::string _name, unsigned int _meleeDmg,
		unsigned int _rangeDmg, unsigned int _armor);
	void				quote();
	void				vaulthunter_dot_exe(std::string const & target);
};


#endif //EX00_FRAGTRAP_HPP
