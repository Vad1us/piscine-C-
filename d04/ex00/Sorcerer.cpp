//
// Created by Vadym RADCHENKO on 10/5/18.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
	_name = "DefSorcerer";
	_title = "DefTitle";
	std::cout << _name << " ," << _title << " , is born !\n";
}

Sorcerer::~Sorcerer() {
	std::cout << _name << " ," << _title << " , is dead. Consequences will never be the same !\n";
}

Sorcerer::Sorcerer(Sorcerer const &s) {
	*this = s;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << _name << " ," << _title << " , is born !\n";
}

void Sorcerer::introd() {
	std::cout << "I am " << _name << ", " << _title << ", and I like ponies !\n";
}

std::string Sorcerer::getName() const {
	return (this->_name);
}

std::string Sorcerer::getTitle() const {
	return (this->_title);
}

Sorcerer& Sorcerer::operator=(Sorcerer const &s) {
	this->_title = s._title;
	this->_name = s._name;
}

void Sorcerer::polymorph(Victim const &s) const {
	s.getPolymorphed();
}

std::ostream& operator<<(std::ostream &o, Sorcerer &s) {
	o << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies !\n";
	return (o);
}

