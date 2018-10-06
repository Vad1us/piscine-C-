//
// Created by Vadym RADCHENKO on 10/6/18.
//

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine::TacticalMarine(int i) {
	(void)i;
	std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const &marine) {
	*this = marine;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ...\n";
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &marine) {
	(void)marine;
	return (*this);
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *\n";
}

ISpaceMarine* TacticalMarine::clone() const {
	ISpaceMarine *i = new TacticalMarine(*this);
	return (i);
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *\n";
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !\n";
}