//
// Created by Vadym RADCHENKO on 10/5/18.
//

#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap();
	~SuperTrap();
	SuperTrap(SuperTrap const &f_t);
	SuperTrap &operator=(SuperTrap const &f_t);
	SuperTrap(std::string	name);
	SuperTrap(unsigned int _hp, unsigned int _maxHp, unsigned int _energy,
			 unsigned int _maxEnergy, unsigned int _lvl, std::string _name, unsigned int _meleeDmg,
			 unsigned int _rangeDmg, unsigned int _armor);
	void				quote();
	void				challengeNewcomer(std::string const & target);
};


#endif //EX04_SUPERTRAP_HPP
