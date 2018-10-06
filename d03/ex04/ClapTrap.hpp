//
// Created by Vadym RADCHENKO on 10/5/18.
//

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP

#include <iostream>
#include <random>

class ClapTrap {
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(ClapTrap const &f_t);
	//ClapTrap &operator=(ClapTrap const &f_t);
	ClapTrap(std::string	name);
	ClapTrap(unsigned int _hp, unsigned int _maxHp, unsigned int _energy,
			 unsigned int _maxEnergy, unsigned int _lvl, std::string _name, unsigned int _meleeDmg,
			 unsigned int _rangeDmg, unsigned int _armor);
	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	unsigned int const	getHp();
	unsigned int const	getEnergy();
	unsigned int const	getLvl();
	std::string const	getName();
	unsigned int const	getMeleeDmg();
	unsigned int const	getRangeDmg();
	unsigned int const	getArmor();
private:
	void				quote();
protected:
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


#endif //EX02_CLAPTRAP_HPP
