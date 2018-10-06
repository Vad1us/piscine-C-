//
// Created by Vadym RADCHENKO on 10/5/18.
//

#include "AWeapon.hpp"

AWeapon::AWeapon() {

}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name),
	_APcost(apcost) , _damage(damage) {

}

AWeapon::AWeapon(AWeapon const &w) {
	*this = w;
}

AWeapon::~AWeapon() {

}

int AWeapon::getAPCost() const {
	return (this->_APcost);
}

int AWeapon::getDamage() const {
	return (this->_damage);
}

std::string AWeapon::getName() const {
	return (this->_name);
}

AWeapon& AWeapon::operator=(AWeapon const &w) {
	this->_name = w._name;
	this->_damage = w._damage;
	this->_APcost = w._APcost;
	return (*this);
}

//void AWeapon::attack() const {
//
//}