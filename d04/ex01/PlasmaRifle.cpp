//
// Created by Vadym RADCHENKO on 10/6/18.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &p) : AWeapon("Plasma Rifle", 5, 21){

}

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage){

}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &w) {
	AWeapon::operator=(w);
	return (*this);
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *\n";
}

