//
// Created by Vadym RADCHENKO on 10/5/18.
//

#include "ScavTrap.hpp"
ScavTrap::ScavTrap() {
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_name = "DefaultSC4V-TP";
	quote();
}

ScavTrap::~ScavTrap() {
	std::cout<< "ScavTrap " << this->_name << " died\n";
}

ScavTrap::ScavTrap(ScavTrap const &f_t) {
	*this = f_t;
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_name = "DefaultSC4V-TP";
	quote();
}

ScavTrap::ScavTrap(std::string	name) {
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

ScavTrap &ScavTrap::operator=(ScavTrap const &f_t) {
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

ScavTrap::ScavTrap(unsigned int _hp, unsigned int _maxHp, unsigned int _energy,
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
//
//unsigned int const ScavTrap::getHp() {
//	return(this->_hp);
//}
//
//unsigned int const ScavTrap::getEnergy() {
//	return (this->_energy);
//}
//
//unsigned int const ScavTrap::getLvl() {
//	return (this->_lvl);
//}
//
//std::string const ScavTrap::getName() {
//	return (this->_name);
//}
//
//unsigned int const ScavTrap::getMeleeDmg() {
//	return (this->_meleeDmg);
//}
//unsigned int const ScavTrap::getRangeDmg() {
//	return (this->_rangeDmg);
//}
//
//unsigned int const ScavTrap::getArmor() {
//	return (this->_armor);
//}

void ScavTrap::quote() {
	std::string q[] = {"\"Say hello to my little friend!\"",
					   "\"Still haven't found the Vault?\"",
					   "\"Rrrrrgh...this isn't working!\"",
					   "Glitching weirdness is a term of",
					   "Recompiling my combat code!",
					   "\"Wanna hear a new dubstep song I wrote? Wub! Wub\" (beatboxing/dubstep)",
					   "\"Unce! Unce! I think I lost the beat... but, Unce! Unce!\" (beatboxing)"};
	std::cout << this->_name << ": "<< q[std::rand() % 7] <<"\n";
}
void ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target <<
			  "> at range, causing <" << this->_rangeDmg << "> points of damage !\n";
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target <<
			  "> in melee, causing <" << this->_meleeDmg << "> points of damage !\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
	if (_hp + _armor < amount) {
		_hp = 0;
		std::cout << "SC4V-TP <" << this->_name << "> took <" << amount <<
				  "> points of damage, reduced by <" << this->_armor << "> armor and dies with <0> hp.\n";
	} else {
		_hp = _hp + _armor - amount;
		std::cout << "SC4V-TP <" << this->_name << "> took <" << amount <<
				  "> points of damage, reduced by <" << this->_armor << "> armor and lives with <" << this->_hp << "> hp.\n";
	}
}
void ScavTrap::beRepaired(unsigned int amount) {
	if (amount + _hp > _maxHp) {
		_hp = _maxHp;
		std::cout << "SC4V-TP <" << this->_name << "> healed up with <" << amount <<
				  "> points, and has <" << this->_hp << "> hp.\n";
	} else {
		_hp += amount;
		std::cout << "SC4V-TP <" << this->_name << "> healed with <" << amount <<
				  "> points, and has <" << this->_hp << "> hp.\n";
	}
}

void ScavTrap::challengeNewcomer(std::string const &target) {
	if (this->_energy >= 25) {
		std::string attacks[] = {"Drink poison",
						   "Bring me unicorn",
						   "Make a backflip",
						   "Count 1234567 x 7654321",
						   "Never give me up"};
		std::cout << "SC4V-TP <" << this->_name << "> challenges a Newcomer <" << target
				  << "> by asking: <" << attacks[std::rand() % 5] << ">\n";
	} else {
		std::cout << "SC4V-TP <" << this->_name << "> has not enough energy.\n";
	}
}

bool 				ScavTrap::_flag = false;