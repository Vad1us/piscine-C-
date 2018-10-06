//
// Created by Vadym RADCHENKO on 10/5/18.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_name = "CL4P-TP";
	quote();
}

ClapTrap::~ClapTrap() {
	std::cout<< "ClapTrap " << this->_name << " died\n";
}

ClapTrap::ClapTrap(ClapTrap const &f_t) {
	*this = f_t;
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_name = "CL4P-TP";
	quote();
}

ClapTrap::ClapTrap(std::string	name) {
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

//ClapTrap &ClapTrap::operator=(ClapTrap const &f_t) {
//	this->_hp = f_t._hp;
//	this->_maxHp = f_t._maxHp;
//	this->_energy = f_t._energy;
//	this->_maxEnergy = f_t._maxEnergy;
//	this->_lvl = f_t._lvl;
//	this->_name = f_t._name;
//	this->_meleeDmg = f_t._meleeDmg;
//	this->_rangeDmg = f_t._rangeDmg;
//	this->_armor = f_t._armor;
//	quote();
//	return (*this);
//}

ClapTrap::ClapTrap(unsigned int _hp, unsigned int _maxHp, unsigned int _energy,
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

unsigned int const ClapTrap::getHp() {
	return(this->_hp);
}

unsigned int const ClapTrap::getEnergy() {
	return (this->_energy);
}

unsigned int const ClapTrap::getLvl() {
	return (this->_lvl);
}

std::string const ClapTrap::getName() {
	return (this->_name);
}

unsigned int const ClapTrap::getMeleeDmg() {
	return (this->_meleeDmg);
}
unsigned int const ClapTrap::getRangeDmg() {
	return (this->_rangeDmg);
}

unsigned int const ClapTrap::getArmor() {
	return (this->_armor);
}

void ClapTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target <<
			  "> at range, causing <" << this->_rangeDmg << "> points of damage !\n";
}

void ClapTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP <" << this->_name << "> attacks <" << target <<
			  "> in melee, causing <" << this->_meleeDmg << "> points of damage !\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
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

void ClapTrap::beRepaired(unsigned int amount) {
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

void ClapTrap::quote() {
	std::string q[] = {"\"111\"",
					   "\"222\"",
					   "\"333\"",
					   "\"444\"",
					   "\"555\"",
					   "\"666\"",
					   "\"777\""};
	std::cout << this->_name << ": "<< q[std::rand() % 7] <<"\n";
}

bool 				ClapTrap::_flag = false;