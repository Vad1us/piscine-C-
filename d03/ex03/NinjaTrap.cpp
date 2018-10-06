//
// Created by Vadym RADCHENKO on 10/5/18.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_name = "DefaultNINJA-TP";
	quote();
}

NinjaTrap::~NinjaTrap() {
	std::cout<< "NinjaTrap " << this->_name << " died\n";
}

NinjaTrap::NinjaTrap(NinjaTrap const &f_t) {
	*this = f_t;
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_name = "DefaultNINJA-TP";
	quote();
}

NinjaTrap::NinjaTrap(std::string	name) {
	if (this->_flag == false) {
		srand(time(NULL));
		this->_flag = true;
	}
	this->_hp = 60;
	this->_maxHp = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_lvl = 1;
	this->_name = name;
	this->_meleeDmg = 60;
	this->_rangeDmg = 5;
	this->_armor = 0;
	quote();
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &f_t) {
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

NinjaTrap::NinjaTrap(unsigned int _hp, unsigned int _maxHp, unsigned int _energy,
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

void NinjaTrap::quote() {
	std::string q[] = {"\"Give us open ports for remote access or give us death!\"",
					   "\"See how our enemies crumble beneath the wheel of the claptrap Robolution!\"",
					   "\"He who controls the means of production controls the government, and that power belongs in the hands of the proletaria-trap!\"",
					   "\"We are the claptraps and we are legion! Viva la Robolution!\"",
					   "\"The rallying call of liberation: 'Error 404! File not found! Error 404! File not found!\"",
					   "\"01010110 01001001 01010110 01000001 00100000 01001100 01000001 00100000 01010010 01001111 01010010 01001111 01001100 01010101 01010100 01001001 01001111 01001110\"",
					   "\"VIVA LA ROROLUTION\""};
	std::cout << this->_name << ": "<< q[std::rand() % 7] <<"\n";
}

void NinjaTrap::ninjaShoebox(ScavTrap & target) {
	if (this->_energy >= 25) {
		std::string attacks[] = {"\"Beat it, fleshbag!\"",
								 "\"Eat it, fleshbag!\"",
								 "\"Pincer Attack!\"",
								 "\"Punch punch! Fight!\"",
								 "\"Target disassembled.\""};
		std::cout << "NINJA-TP  <" << this->_name << "> is screaming: " << attacks[std::rand() % 5]
		<< " at <" << target.getName() << "> so he makes his attacks more powerfull, from <" << this->_rangeDmg << "> to <"
		<< (this->_rangeDmg + (2 * target.getArmor())) << "> range dmg,\nand from <" << this->_meleeDmg << "> to <" << (this->_meleeDmg + (2 * target.getArmor()));
				"> melee dmg.\n";
		this->_rangeDmg += (2 * target.getArmor());
		this->_meleeDmg += (2 * target.getArmor());
	} else {
		std::cout << "ninjaShoebox-TP <" << this->_name << "> has not enough energy.\n";
	}
}

void NinjaTrap::ninjaShoebox(FragTrap & target) {
	if (this->_energy >= 25) {
		std::string attacks[] = {"\"Beat it, fleshbag!\"",
								 "\"Eat it, fleshbag!\"",
								 "\"Pincer Attack!\"",
								 "\"Punch punch! Fight!\"",
								 "\"Target disassembled.\""};
		std::cout << "NINJA-TP  <" << this->_name << "> is screaming: " << attacks[std::rand() % 5]
				  << " at <" << target.getName() << "> so he makes his attacks more powerfull, from <" << this->_rangeDmg << "> to <"
				  << (this->_rangeDmg + (2 * target.getArmor())) << "> range dmg,\nand from <" << this->_meleeDmg << "> to <" << (this->_meleeDmg + (2 * target.getArmor()));
		"> melee dmg.\n";
		this->_rangeDmg += (2 * target.getArmor());
		this->_meleeDmg += (2 * target.getArmor());
	} else {
		std::cout << "ninjaShoebox-TP <" << this->_name << "> has not enough energy.\n";
	}
}