//
// Created by Vadym RADCHENKO on 10/6/18.
//

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &a) {
	*this = a;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back ...\n";
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *\n";
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *\n";
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT !\n";
}

ISpaceMarine* AssaultTerminator::clone() const {
	ISpaceMarine *i = new AssaultTerminator(*this);
	return (i);
}
AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &a) {
	(void)a;
	return (*this);
}