//
// Created by Vadym RADCHENKO on 10/6/18.
//

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {

}

PowerFist::PowerFist(PowerFist const &p) : AWeapon("Power Fist", 8, 50){

}

PowerFist::PowerFist(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage){

}

PowerFist &PowerFist::operator=(PowerFist const &p) {
	AWeapon::operator=(p);
	return (*this);
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *\n";
}