//
// Created by Vadym RADCHENKO on 10/5/18.
//

#include "Victim.hpp"

Victim::Victim() {
	_name = "DefVictim";
	std::cout<< "Some random victim called " << _name << " just popped !\n";
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason !\n";
}

Victim::Victim(Victim const &v) {
	*this = v;
}

Victim::Victim(std::string name) : _name(name) {
	std::cout<< "Some random victim called " << _name << " just popped !\n";
}

void Victim::introd() {
	std::cout << "I'm " << _name << " and I like otters !\n";
}

std::string Victim::getName() const {
	return (this->_name);
}

Victim& Victim::operator=(Victim const &s) {
	this->_name = s._name;
}

void Victim::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a cute little sheep !\n";
}

std::ostream& operator<<(std::ostream &o, Victim &v) {
	o << "I'm " << v.getName() << " and I like otters !\n";
	return (o);
}