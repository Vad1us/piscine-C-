#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name) {
	this->name = name;
	std::cout << "Pony " << this->name << " is borned";
}

Pony::~Pony() {
	std::cout << "Pony " << this->name << " is killed.\n";
}
