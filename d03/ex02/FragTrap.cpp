//
// Created by Vadym RADCHENKO on 10/4/18.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_name = "DefaultFR4G-TP";
	quote();
}

FragTrap::~FragTrap() {
//	std::string q[] = {"\"Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\"",
//					   "\"Hey everybody! Check out my package!\"",
//					   "\"Let's get this party started!\"",
//					   "\"Glitching weirdness is a term of endearment, right?\"",
//					   "\"Recompiling my combat code!\"",
//					   "\"This time it'll be awesome, I promise!\"",
//					   "\"Look out everybody! Things are about to get awesome!\""};
	std::cout<< "FragTrap " << this->_name << " died\n";
}

FragTrap::FragTrap(FragTrap const &f_t) {
	*this = f_t;
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_name = "DefaultFR4G-TP";
	quote();
}

FragTrap::FragTrap(std::string	name) {
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_hp = 100;
	this->_maxHp = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_lvl = 1;
	this->_name = name;
	this->_meleeDmg = 30;
	this->_rangeDmg = 20;
	this->_armor = 5;
	quote();
}

FragTrap &FragTrap::operator=(FragTrap const &f_t) {
	this->_hp = f_t._hp;
	this->_maxHp = f_t._maxHp;
	this->_energy = f_t._energy;
	this->_maxEnergy = f_t._maxEnergy;
	this->_lvl = f_t._lvl;
	this->_name = f_t._name;
	this->_meleeDmg = f_t._meleeDmg;
	this->_rangeDmg = f_t._rangeDmg;
	this->_armor = f_t._armor;
	//quote();
	return (*this);
}

FragTrap::FragTrap(unsigned int _hp, unsigned int _maxHp, unsigned int _energy,
				   unsigned int _maxEnergy, unsigned int _lvl,
				   std::string _name, unsigned int _meleeDmg,
				   unsigned int _rangeDmg, unsigned int _armor) {
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_hp = _hp;
	this->_maxHp = _maxHp;
	this->_energy = _energy;
	this->_maxEnergy = _maxEnergy;
	this->_lvl = _lvl;
	this->_name = _name;
	this->_meleeDmg = _meleeDmg;
	this->_rangeDmg = _rangeDmg;
	this->_armor = _armor;
	quote();
}

void FragTrap::quote() {
	std::string q[] = {"\"Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!\"",
					   "\"Hey everybody! Check out my package!\"",
					   "\"Let's get this party started!\"",
					   "\"Glitching weirdness is a term of endearment, right?\"",
					   "\"Recompiling my combat code!\"",
					   "\"This time it'll be awesome, I promise!\"",
					   "\"Look out everybody! Things are about to get awesome!\""};
	std::cout << this->_name << ": "<< q[std::rand() % 7] <<"\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	if (this->_energy >= 25) {
		std::string attacks[] = {"0", "1", "25", "50", "999"};
		std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target
			<< "> with magic, causing <" << attacks[std::rand() % 5] << "> points of damage !\n";
	} else {
		std::cout << "FR4G-TP <" << this->_name << "> has not enough energy.\n";
	}
}

//bool 				FragTrap::_flag = false;