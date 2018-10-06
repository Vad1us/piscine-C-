//
// Created by Vadym RADCHENKO on 10/6/18.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion") {
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const &e) : Enemy(80, "Rad Scorpion") {
	std::cout << "* SPROTCH *\n";
	*this = e;
	//void(e);
}

RadScorpion::RadScorpion(int hp, std::string const &type) : Enemy(80, type) {
	std::cout << "Gaaah. Me want smash heads !\n";
}

RadScorpion::~RadScorpion()  {
	std::cout << "* SPROTCH *\n";;
}
