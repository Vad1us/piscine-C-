//
// Created by Vadym RADCHENKO on 10/5/18.
//

#ifndef EX03_NINJATRAP_HPP
#define EX03_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class NinjaTrap : public virtual ClapTrap {

public:
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(NinjaTrap const &f_t);
	NinjaTrap &operator=(NinjaTrap const &f_t);
	NinjaTrap(std::string	name);
	NinjaTrap(unsigned int _hp, unsigned int _maxHp, unsigned int _energy,
			 unsigned int _maxEnergy, unsigned int _lvl, std::string _name, unsigned int _meleeDmg,
			 unsigned int _rangeDmg, unsigned int _armor);
	void				quote();
	void				ninjaShoebox(ScavTrap & target);
	void				ninjaShoebox(FragTrap & target);

};


#endif //EX03_NINJATRAP_HPP
