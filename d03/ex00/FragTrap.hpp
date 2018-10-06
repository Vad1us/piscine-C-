//
// Created by Vadym RADCHENKO on 10/4/18.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP


#include <iostream>
#include <random>
class FragTrap {
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
	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				vaulthunter_dot_exe(std::string const & target);
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


#endif //EX00_FRAGTRAP_HPP
