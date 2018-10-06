//
// Created by Vadym RADCHENKO on 10/5/18.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap() {
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}

	ClapTrap::_name = "DefaultSC4V-TP";
	quote();
}

SuperTrap::~SuperTrap() {
	std::cout<< "SuperTrap " << this->_name << " died\n";
}

SuperTrap::SuperTrap(SuperTrap const &f_t) {
	*this = f_t;
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_name = "DefaultSC4V-TP";
	quote();
}

SuperTrap::SuperTrap(std::string	name) {
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_hp = 100;
	this->_maxHp = 100;
	this->_energy = 50;
	this->_maxEnergy = 50;
	this->_lvl = 1;
	this->_name = name;
	this->_meleeDmg = 20;
	this->_rangeDmg = 15;
	this->_armor = 3;
	quote();
}

SuperTrap &SuperTrap::operator=(SuperTrap const &f_t) {
	this->_hp = f_t._hp;
	this->_maxHp = f_t._maxHp;
	this->_energy = f_t._energy;
	this->_maxEnergy = f_t._maxEnergy;
	this->_lvl = f_t._lvl;
	this->_name = f_t._name;
	this->_meleeDmg = f_t._meleeDmg;
	this->_rangeDmg = f_t._rangeDmg;
	this->_armor = f_t._armor;
	quote();
	return (*this);
}