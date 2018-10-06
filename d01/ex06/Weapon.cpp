#include "Weapon.hpp"

Weapon::Weapon(std::string w) : _type(w), _tref(_type) {

}

Weapon::~Weapon() {
	
}

std::string const	& Weapon::getType() {
	return (this->_tref);
}

void		Weapon::setType(std::string w) {
	this->_tref = w;
}