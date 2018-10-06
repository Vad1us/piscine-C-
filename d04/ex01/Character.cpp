//
// Created by Vadym RADCHENKO on 10/6/18.
//

#include "Character.hpp"

Character::Character() {

}

Character::~Character() {

}

Character::Character(Character const &c) {
	*this = c;
}

Character::Character(std::string const &name) : _name(name){
	this->_AP = 40;
	this->_w = NULL;
}

void Character::attack(Enemy *e) {
	if (this->getAp() >= this->getWeapon()->getAPCost()) {
		std::cout << this->getName() << " attacks " << e->getType()
				  << " with a " << this->getWeapon()->getName() << "\n";
		this->_AP -= this->getWeapon()->getAPCost();
		this->getWeapon()->attack();
		e->takeDamage(this->getWeapon()->getDamage());
	} else {
		std::cout << this->getName() << " cant attack " << e->getType()
				  << ": not enough AP\n";
	}
}

Character& Character::operator=(Character const &c) {
	this->_name = c._name;
	this->_AP = c._AP;
	this->_w = c._w;
	return (*this);
}

void Character::recoverAP() {
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

std::string Character::getName() const {
	return (this->_name);
}

int Character::getAp() const {
	return (this->_AP);
}

AWeapon *Character::getWeapon() const {
	return (this->_w);
}

void Character::equip(AWeapon *w) {
	this->_w = w;
}

std::ostream &operator<<(std::ostream &o, Character const &c) {
	if (c.getWeapon())
		o << c.getName() << " has " << c.getAp() << " AP and wields a " << c.getWeapon()->getName() << "\n";
	else
		o << c.getName() << " has " << c.getAp() << " AP and is unarmed\n";
	return (o);
}