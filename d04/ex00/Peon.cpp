//
// Created by Vadym RADCHENKO on 10/5/18.
//

#include "Peon.hpp"

Peon::Peon() {
	_name = "DefPeon";
	std::cout << "Zog zog.\n";
}

Peon::~Peon() {
	std::cout << "Bleuark...\n";
}

Peon::Peon(std::string name) : Victim(name) {
	_name = name;
	std::cout << "Zog zog.\n";
}
void Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony !\n";
}